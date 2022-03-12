
/*
Task 4 : Compute the following
for loop with i runs for (n/3 + 1) times. It takes polynomial time of order n.
for loop with j runs for (n/2 + 1) times. It takes polynomial time of order n.
Time complexity of nested loops is equal to (n/3 + 1) * (n/2 + 1) which is polynomial of order n^2.
Time complexity of given task is O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int n =10;
int sum =0;
float pie = 3.14;

for(int i=0;i<n;i+=3){
	cout<<pie<<endl;
	for(int j =1;j<n;j+=2){
		sum+=1;
		cout<<sum<<endl;
	}
}	
return 0;
}