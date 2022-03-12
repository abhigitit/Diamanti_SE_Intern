/* Task 7 : Shuffle an Array
--shuffleArray function is written to shuffle a given integer array in a random manner.
--printArray function is used to print the array.

Complexity Analysis
Time Complexity: O(N) 
Space COmplexity: O(1)

*/


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


void shuffleArray(int *arr, int size)
{
int last_index = size-1;
int rand_index = 0;
while(last_index>0)
{
	rand_index = rand() % last_index;
	swap(arr[rand_index],arr[last_index]);
	last_index--;
}
}

void printArray(int *arr,int size)
{
for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
cout<<"\n";
}

int main(){
int arr[]= {1,505,9,3,4,55,73,88,68,99};
cout<< "Original Array "<< "\n";
printArray(arr,10);
shuffleArray(arr,10);
cout<< "Shuffled Array "<< "\n";
printArray(arr,10);
return 0;
}