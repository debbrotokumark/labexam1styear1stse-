#include <bits/stdc++.h>

using namespace std;
callbyvalue(int x,int y){
swap(x,y);

cout<<x<<' '<<y<<endl;
}
callbyref(int *x,int *y){
swap(*x,*y);



}





int main()
{

   int i=6,j=9;
callbyvalue(i,j);

callbyref(&i,&j);
cout<<i<<' '<<j<<endl;

    return 0;
}


