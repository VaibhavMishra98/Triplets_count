#include<iostream>
using namespace std;
void insertion_sort(int b[],int x)
{
    int i,j,key;
    for(j=1;j<x;j++)
    {
        key=b[j];
        i=j-1;
        while(i>=0 && b[i]>key)
        {
            b[i+1]=b[i];
            i=i-1;
        }
        b[i+1]=key;
    }
}
int main()
{ int flag=0;
    int arr[]={1,5,3,2,4};
    int i,j,k;
    int n= sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for (i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
     {
           for(k=j+1;k<n;k++)

           {
             if(  arr[k]==arr[i]+arr[j])

                flag++;
           }
     }
    }
 cout<<flag;
}
