#include<iostream>
#include<string>
#include<cmath>
 using namespace std;

int main(){
	
	
	int num;
	
	cout<<"Input num :";
	
	cin>>num;
	
	if(num >=0 <40){
		cout<<"Grade is E";
		
		
		else{
			if(num >40 <50){
		cout<<"Grade is D";
		
		}
		else{
			if(num >50 <60){
		cout<<"Grade is C";
		
		}
		
			else{
				if(num >60 <700){
		cout<<"Grade is B";
		
			}
			
			else{
				if(num >70 <100){
		cout<<"Grade is A";
		
			}
	}
	
	return 0;
	
}
	
	