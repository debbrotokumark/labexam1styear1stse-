#include <bits/stdc++.h>

using namespace std;
class cls{
private :
    int a,i;
    public :int b,j;
    protected :
        int c,k;
     public:
int fun1(int d){
    a=d;
    cout<<a<<endl;


}
int fun2(int e){
    b=e;
    cout<<b<<endl;
//cout<<e<<endl;

}

int fun3(int f){
    c=f;
    cout<<c<<endl<<b<<endl;


}

};


class two : public cls{
public:
fun4(){
c=111;
b=90;
cout<<c<<endl<<b;
}
};



int main()
{
cls ob1;
ob1.fun1(4);

ob1.fun2(5);
ob1.b=10; // not change
ob1.fun3(8);
two ob2;
ob2.fun4();

    return 0;
}


