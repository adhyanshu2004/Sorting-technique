#include<iostream>
using namespace std;
int bubble(int arr[],int n)
{
      for(int i=0;i<n-1;i++)
      {
         for(int j=0;j<n-i-1;j++)
         {
              if(arr[j]>arr[j+1])
              {
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
              }
         }
      }
}



int main()
{
   int arr[]={6,3,0,5};
   bubble(arr,4);
      cout<<"after sorting"<<" ";
        for(int i=0;i<4;i++)
           cout<<arr[i]<<" ";
     

return 0;
}