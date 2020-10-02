#include<bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
   int i=0,j=size-1;
    while(i<j)
    {
        if(input[i]==1)
        {
            if(input[j]==0)
            {
                int temp = input[j];//swapping input[i] and input[j]
                input[j]=input[i];
                input[i]= temp;
                
            }
            else {
                j--;//if input[j] != 0 then do j--
            }
        }
        else{
            i++;//if input[i] != 1 then do i++
        }
        
    }
    //Write your code here
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
