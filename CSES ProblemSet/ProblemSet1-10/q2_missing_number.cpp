#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Enter the total number of elements in the sequence: ";
    cin >> input;

    int sum = 0;
    cout << "Enter the existing numbers in the sequence (one number per line): " << endl;

    for (int i = 1; i < input; ++i)
    {
        int num;
        cin >> num;
        sum += num;
    }

    int missingNumber = (input * (input + 1) / 2) - sum;
    cout << "The missing number in the sequence is: " << missingNumber << endl;
}

/*
Missing Number
TASK STATISTICS
Time limit: 1.00 s Memory limit: 512 MB
You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

Input

The first input line contains an integer n
.

The second line contains n−1
 numbers. Each number is distinct and between 1
 and n
 (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105

Example

Input:
5
2 3 1 5

Output:
4
*/