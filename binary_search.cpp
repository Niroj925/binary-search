#include<iostream>
using namespace std;
int bs(int a[],int s,int v)
{
  int l=0;
  int h=s-1;
  int mid;
  while(l<=h)
  {
  mid=(l+h)/2;
  if(v==a[mid])
  {
      return mid;
  }
  else if(v>a[mid])
  {
      l=mid+1;
  }
  else
  {
      h=mid-1;
  }
}
}
int main()
{
    int ary[]={5,10,15,20,25,30,35,40,45,50,55};
    int ui;
    cout<<"enter any value to search:";
    cin>>ui;
    int result=bs(ary,9,ui);
    if(result>=0)
    {
        cout<<"entered value:"<<ary[result]<<" is found with index:"<<result<<endl;
    }
    else
    {
        cout<<"entered number is not found."<<endl;
    }
}