/*
Task 5: Given three integer arrays sorted in ascending order, return the smallest number that is
common in all three arrays. Return -1 if there is no common number.
--smallestCommon function takes in three arguments of three dynamic arrays as constant references.
--Reason for declaring the vectors const : Just promising not to change the values.
--Reason for passing as reference : Save the cost of memory copying. 
--Used the three pointer approach to return the smallest_common_number among the three vectors.

Complexity Analysis
Time Complexity: O(n1+n2+n3) n1,n2,n3 be the sizes of the input vectors respectively.
Space COmplexity: O(1)
*/

#include<bits/stdc++.h>
int smallestCommon(const std::vector<int> &list1,const std::vector<int> &list2,const std::vector<int> &list3)
{
	int i=0,j=0,k=0;
	while(i<list1.size() && j<list2.size() && k<list3.size())
	{
		if(list1[i]==list2[j] && list2[j]==list3[k]) return list1[i];
		else if(list1[i]<list2[j]) i++;
		else if(list2[j]<list3[k]) j++;
		else k++;

	}
	return -1;
}

int main(){
	std::vector<int> list1 = {0,2,4,6,8,10};
	std::vector<int> list2 = {1,2,3,4,5,6};
	std::vector<int> list3 = {-1,1,3,5,6,7};
	int smallest_common_number = smallestCommon(list1,list2,list3);
	std::cout<<smallest_common_number<<"\n";
return 0;
}