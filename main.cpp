#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    //cout<<n<<endl;
    int c=1,b=1,a=0;
    for(c;c<=n;c){
        cout<<c<<endl;
        c=a+b;
        a=b;
        //cout<<"a"<<a<<endl;
        b=c;
        //cout<<"b"<<b<<endl;
    }
    return 0;
}
