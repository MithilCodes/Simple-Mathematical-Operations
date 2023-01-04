#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,j;
	int h=1;
	cin>>a>>b;
	if(a%b==0){
		c=a/b;
		cout<<c<<"/1";
	}
	else if(a>b){
		j=a%b;
		e=a/b;
		
		for(int i=1;i<=j;i++){
			if(a%i==0&&b%i==0){
				h=i;
			}
		}
		f=j/h;
		g=b/h;
		cout<<e<<"("<<f<<"/"<<g<<")";
	}
	else if(b>a){
		for(int i=1;i<=a;i++){
			if(a%i==0&&b%i==0){
				h=i;
			}
		}
		a=a/h;
		b=b/h;
		cout<<a<<"/"<<b;
	}
	else{
		cout<<"1/1";
	}
	
	
}