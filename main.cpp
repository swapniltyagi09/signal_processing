//Author : SWapnil Tyagi
//Date : 14th Feb 2023
//Calculates linear and circular convolution of two sequences

#include <iostream>
using namespace std;

void display_seq(int seq[],int len)
{
	for(int i = 0; i < len ; i++)
		cout << seq[i] << " ";

	cout << endl;
}



int main()
{
	int seq1[] = {1,2,3,4};
	int seq2[] = {5,6};

	int len1 = sizeof(seq1)/sizeof(seq1[0]);
	int len2 = sizeof(seq2)/sizeof(seq2[0]);
	int len3 = len1+len2-1;

	display_seq(seq1,len1);
	display_seq(seq2,len2);

	int seq3[len3] = {0};

	for(int i = 0; i < len1 ; i++)
	{
		for(int j = 0; j < len2; j++)
		{
			seq3[i+j] = seq3[i+j] + seq1[i]*seq2[j];
		}
	}

	display_seq(seq3,len3);
	return 0;
}