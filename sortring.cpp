
#include <bits/stdc++.h>
using namespace std;

void bubleshort(int a[],int n)
{

for(int i=0;i<n-1;i++)
    {
for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        }}
    }
    for(int y=0;y<n;y++)
   cout<<a[y]<<" ";



}


int main()
{
      int a[]={9,8,7,6,5,4,3,2,1};



      int b=sizeof(a)/sizeof(a[0]);
      sort(a,a+b);

      for (int x : a)
        cout << x << " ";
      cout<<"\nend main\n";
bubleshort(a,b);
    return 0;
}


