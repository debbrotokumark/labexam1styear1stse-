 #include<iostream>
using namespace std;
int x=10;
class cls{


public:
    static int a;
    int aa;
   public: void fun();

   int ab(){
    cout<<aa<<endl;
    }

};

void cls::fun(void){
    cout<<"two\n";

}

int cls :: a=100;
int main()
{
    int x=6;
    cout << x << endl;
    cout << ::x << endl;
    cls a;
    a.fun();
    a.ab();


     }
