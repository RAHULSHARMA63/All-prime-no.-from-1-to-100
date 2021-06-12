#include<iostream> 
using namespace std;
int main() 
{
	int i,j;
	for(j=2;j<=100;j++)
{
    for(i=2;i<=j-1;i++)
    {
        if(j%i==0)
        break;
    }                
    if(i==j && i!=2)
    cout<<j<<"\n";
}
}
