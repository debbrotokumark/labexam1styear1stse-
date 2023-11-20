
#include <bits/stdc++.h>

using namespace std;

int main()
{ int a,b,c,d,e;
cin>>a>>b>>c;
//smallest
    d=(a<b)?((a<c)?a:c):((b<c)?b:c);
    cout<<d<<endl;
//largest
e=(a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<e;

    return 0;
}

