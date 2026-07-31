#include<iostream>
using namespace std;
int main()
{
int num, temp, rev=0;
cout<<"enter a number:";
cin>>num;
temp=num;
while (num!=0)
{
rev=rev*10+num%10;
num=num/10;
}
if(temp==rev)
cout<<"Palindrome Number";
else
cout<<"Not a Palindrome Number"<<endl;
return 0;
}
