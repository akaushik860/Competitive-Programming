#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int remainder=(x+1)%b;
	    if(a%b==0 || a%b==remainder){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
