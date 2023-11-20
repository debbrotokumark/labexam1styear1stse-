

#include <bits/stdc++.h>
using namespace std;

void piramid1(int n)
{
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++)
    cout<<"*";

    cout<<endl;}
}

void piramid2(int n){
for(int i=1;i<=n;i++)
{
    for(int j=i;j<=n;j++)
         cout<<"*";

    cout<<endl;
}
}


void piramid3(int n){
for(int i=1;i<=n;i++)
{
    for(int j=1;j<i;j++)
         cout<<" ";
         for(int j=i;j<=n;j++)
         cout<<"*";


    cout<<endl;
}
}





int main()
{
      piramid1(5);
      cout<<"\nend piramid 1\n\n";
      piramid2(5);
  cout<<"\nend piramid 2\n\n";
 piramid3(5);
  cout<<"\nend piramid 3\n\n";

    return 0;
}



