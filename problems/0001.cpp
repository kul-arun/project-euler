/*  Multiples of 3 or 5
    *******************

    Problem 1:
    ----------
    If we list all the natural numbers below that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
*/


/*  Solving Stategy
    ---------------
    Compute 3 sums:
    * A = Sum of numbers divisible by 3.
    * B = Sum of numbers divisible by 5.
    * C = Sum of numbers divisible by 3 and 5.
    
    The required sum is given by A + B - C.

    Count of numbers from 1 to N that are divisible by d is floor(N/d).
    Their sum is given by d * [1 + 2 + 3 + .... + floor(N/d)].
*/


#include <iostream>

#define ul unsigned long

// sum of the first n natural numbers.
ul findSum(const ul &n) {
    return n * (n+1) / 2;
}

int main() {
    
    int n {};
    std::cout << "Enter the number below which the sum has to be computed: ";
    std::cin >> n;

    // upper limit is non-inclusive in the sum.
    --n;

    ul divBy3Sum = 3 * findSum(n/3);
    
    ul divBy5Sum = 5 * findSum(n/5);

    ul divBy3And5Sum = 15 * findSum(n/15);
    
    ul result {divBy3Sum + divBy5Sum - divBy3And5Sum};
    
    std::cout << "Sum: " << result << "\n";

    return 0; 
}