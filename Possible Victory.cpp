#include <iostream>
using namespace std;

int main() {
    int r,o,c;
    cin>>r>>o>>c;
    int p,q;
    p=20-o;
    p=p*36;
    q=p+c;
    if(q>r)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
	return 0;
}
