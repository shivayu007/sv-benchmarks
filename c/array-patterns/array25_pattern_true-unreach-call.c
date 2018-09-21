/*
   Copyright 2018 Shivayu Satija

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

/* Program Description :-
 * A square 2D array is declared.
 * Elements of matrix are initialized as the following condition :-
 * i) Both row and column even - num^2.
 * ii) Both row and column odd - num.
 * iii) else, zero.
 * Sum of array should be 0, if ARR_SIZE is even, otherwise
 * ARR_SIZE.
 */

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int() ;
extern short __VERIFIER_nondet_short() ;

short ARR_SIZE ;

int main()
{
	ARR_SIZE = __VERIFIER_nondet_short() ;
	__VERIFIER_assume(ARR_SIZE > 1) ;

	int array[ARR_SIZE][ARR_SIZE] ;
	
	int row = 0, column = 0, num = -1 ;
	signed long sum = 0 ;

	for(row=0;row<ARR_SIZE;row++)
		for(column=0;column<ARR_SIZE;column++)
		{
			if(row %2 == 0 && column%2 == 0)
				array[row][column] = num*num ;
			else if(row %2 == 1 && column%2 == 1)
				array[row][column] = num ;
			else
				array[row][column] = 0 ;
		}
				

	for(row=0;row<ARR_SIZE;row++)
		for(column=0;column<ARR_SIZE;column++)
			sum = sum + array[row][column] ;

	__VERIFIER_assert(sum == 0 || sum == ARR_SIZE) ;
	return 0 ;
}
