//LCS LARGEST COMMON SUBSEQUENCE
//Dynamic Programiing

#include<bits/stdc++.h>
using namespace std;

//main function
int main()
{
string a,b;
cin>>a>>b;
int m=a.length(); int n=b.length();
int dp[m+1][n+1];
for(int i=0;i<=m;i++)

	for(int j=0;j<=n;j++)
	{
		if(i==0 || j==0) dp[i][j]=0;
		else if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
		else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	}



int index=dp[m][n];
char v[index+1]; 
v[index] = '\0';  //null
int i=m,j=n;


//print output
while(i>0 && j>0)
{
if(a[i-1]==b[j-1]){v[index-1]=a[i-1]; i--; j--; index--;}
else if(dp[i-1][j]>dp[i][j-1]) i--;
else j--;
}

 cout<<v;

}
