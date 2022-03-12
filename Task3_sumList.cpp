/*
Task 3: Write a program that calculates the total sum of all numbers in a given list.
sumTotalList function takes in a vector as an argument.
Declared the vector as const so as to promise not to change the contents of the vector.
Passed as a reference so as to save the cost of copying in memory.

Complexity Analysis:
Time Complexity : O(N)
Sapce Complexity : O(1)

*/
#include<bits/stdc++.h>
int sumTotalList(const std::vector<int>& list)
{
    int sum=0;
    for(auto i:list)
    {
        sum+=i;
    }
    return sum;
}
int main(){
std::vector<int> list = {45,56,78,32,-12,98};
std::cout<<sumTotalList(list)<<"\n";
return 0;
}
