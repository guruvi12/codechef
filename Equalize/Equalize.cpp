#include <iostream>
using namespace std;

int main() {
int t,a,b;
cin>>t;
for(int i=0;i<t;i++){
cin>>a>>b;
if(a==b){
    cout<<"YES"<<endl;
}
else if(a<b){
    do{
        a*=2;
    }while(a<b);
    if(a==b){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

}
else{
    do{
      b*=2;
    }while(b < a);
     if(a==b){cout<<"YES"<<endl;}
     else{cout<<"NO"<<endl;}
}}
	return 0;
}

