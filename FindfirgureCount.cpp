#include<iostream>
using namespace std;
int main(){
	cout<<"ededi daxil edin";
	string eded;
	cin>>eded;
	int count=0;
	//get all element
	for(int i=0;i<eded.length();i++){
		//check one figure
		if(int(eded[i])=='1'){
			count++;
		}
	}
	
	cout<<"birlerin sayi: "<<count;
	
}
