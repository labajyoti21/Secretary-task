#include <iostream>
using namespace std;
void solve(int n,int left,int l,int*a,int t){
    if(left==0){
        for(int j=0;j<l;j++){
            if(j==l-1){
                cout<<a[j]<<endl;
            }
            else{
                cout<<a[j]<<"+";
            }
        }
    }
    else if(left<0){
        return ;
    }
    else{
    for(int i=t;i<=n;i++){
        int s;
        s=left-i;
        a[l]=i;
        solve(n,s,l+1,a,i);
        
    }
    }
}

int main() {
	int n;
	cin>>n;
	int a[n];
	solve(n,n,0,a,1);
	return 0;
}