/*
By starting with 1 and 2, the first 10 fibonacci numbers will be:1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed 1000, find the sum of the even-valued terms.
*/

#include <iostream>
using namespace std;

void fibbonnacci(int[], int, int[]);
void fibbonnacci_even(int[], int[]);

int main()
{
	//create array of fib
	//figure out which values are divisible by 2, send that to another array
	//sum that other array

	int max = 1000;
	int sequence[20];
	int sequence_even[20];
	sequence[0] = 1;
	sequence[1] = 2;

	fibbonnacci(sequence, max, sequence_even);

	fibbonnacci_even(sequence, sequence_even);


}

void fibbonnacci(int sequence[], int max, int sequence_even[])
{

	//this function prints the sequences
	//pseudocode of fibonacci
	// 0 --> 1 = 1
	// 1 --> 2 + 1 = 1
	// 2 --> 0 + 1 = 1
	// 3 --> 1 + 1 = 2
	// 4 --> 1 + 2 = 3
	// 5 --> 2 + 3 = 5

	//generate sequence in array
	
	cout << "Regular fibbonnacci: " << endl;
	for (int i = 0; sequence[i] < 1000; i++)
	{
		
		sequence[i + 2] = sequence[i] + sequence[i + 1];
		cout << sequence[i] << ", ";
	}	
	cout << endl;



}

void fibbonnacci_even(int sequence[], int sequence_even[])
{
	//this function checks if element is divisible by 2, and puts it in sequeence_even
	int j = 0;
	int sum = 0;
	//cout << sequence[4] % 2;
	
	
	cout << "Even series: " << endl;
	for (int i = 0; i < 20; i++)
	{
		if (sequence[i] % 2 == 0 && sequence[i] < 1000)
		{
			sequence_even[j] = sequence[i];
			cout << sequence_even[j] << ", ";

			j++; 
			
		}
	}
	cout << endl;
	//sum
	for (int i = 0; i < 5; i++)
	{
		
		sum = sum + sequence_even[i];
	}
	cout << "The sum is " << sum << endl;

}