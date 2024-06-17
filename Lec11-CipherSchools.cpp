// Writing numbers from 1 to 100 using while loop...


#include<iostream>
using namespace std;
int main(){
	int i;
	i=1;
	while(i<=100){
		cout<<i<<" ";
		i++;
	}
	return 0;
}
  
  
  // Taking input from the user and if input is equal to 75 then it means user gussed it right....


#include<iostream>
using namespace std;
int main(){

	int i;
	i=1;
	
	while(i<=100){
		int a;
		cin>>a;
		if(a==75){
			cout<<"You have guessed right number";
			break;
		}
		else{
			cout<<"Try again"<<endl;
		}
		}
	
	return 0;
	
	
	
}




