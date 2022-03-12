/*
Task 6: Reverse words in a given string
--reverseString fucntion is written to reverse the entire string.
--First step of the algoirthm is to reverse the entire string and then reverse word by word.
--reverseWords function calls reverseString internally to reverse words in the string.
--Additional spaces either before or after the string were not asked to remove explicitly in the task. Hence, keeping them as is.

Complexity Analysis
Time Complexity: O(N) 
Space COmplexity: O(1)

*/
#include<bits/stdc++.h>
#include<algorithm>
void reverseString(std::string& str,int left, int right)
{
	int size_of_word = right-left;
for(int i=0;i<size_of_word/2;i++)
{
	std::swap(str[left+i],str[right-i-1]);
}
}

void reverseWords(std::string& str)
{
	reverseString(str,0,str.length());
	int hp = 0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' '){

			reverseString(str,hp,i);
			hp=i+1;

		}
	}
	reverseString(str,hp,str.length());

}

int main(){
	std::string str = " Diamanti Software Engineering Internship ";
	std::cout<<"Original String : "<<str<<"\n";
	reverseWords(str);
	std::cout<<"Reversed words in the String : "<<str<<"\n";
return 0;
}