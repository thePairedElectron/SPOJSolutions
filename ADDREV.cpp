#include<bits/stdc++.h>
using namespace std;
int reverse(int num)
{
	int remainder,reverse=0;
	 while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}
int main()
{
	int n,k=0;
	cin>>n;
	int arr[n][2],res[n];
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<n;i++)
	{
	int a=reverse(arr[i][0]);
	int b=reverse(arr[i][1]);
	res[k++]=reverse(a+b);
	}
	for(int i=0;i<k;i++)
	{
		cout<<res[i]<<endl;
		
	}
	
}
