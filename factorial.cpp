
#include <bits/stdc++.h>

using namespace std;

int facttorial(int a){
if(a==1)
    return 1;
else
    return a* facttorial(a-1);


}

int main()
{
  cout<< facttorial(5);

    return 0;
}


