#include<iostream>
#include<climits>
#include<conio.h>
int binarysearch(int arr[],  int n , int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid =(s+e)/2;
         if(key==arr[mid])
           return mid;
        
     else if(key>arr[mid])
        s=mid+1;
    else 
       e=mid-1;
    }
    return -1;
}
int main()
{
 int n;
 std::cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     std::cin>>arr[i];
 }
 int key;
 std::cin>>key;
   std::cout<<binarysearch(arr,n,key);
   getch();
    return 0;
}