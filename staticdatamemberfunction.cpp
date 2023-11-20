#include <bits/stdc++.h>

using namespace std;

class av{
static int a;
public:
int b,c;

void fun1(int b1,int c1){
b=b1;
c=c1;
cout<<b<<" "<<c<<" "<<a<<endl;
}
static fun2(){
a++;


}




};
int av::a;

int main()
{
av a;
a.fun1(3,5);
av::fun2();
a.fun1(13,52);
av::fun2();
a.fun1(103,22);

    return 0;
}


