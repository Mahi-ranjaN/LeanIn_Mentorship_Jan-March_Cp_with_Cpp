#include<iostream>
using namespace std;
int singleNumber(int a[],int n) 
{
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = ans ^ a[i];
    return ans;
}
int main()
{
	int a[]={4,1,2,1,2};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	cout<<"The Single Number is "<<singleNumber(a,n);
	return 0;
}