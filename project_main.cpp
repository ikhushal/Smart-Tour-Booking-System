#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//templpate of the class. declaration

template<class T>
class tour;

//including the header file in which the class is defined.

#include"package.h"

//main function.

int main(void){
	
	//using file handling to read the data from the file about the tourism packages.
	
	fstream b;
	string a,j;
	
	//variables to store cosmumer data on the programer's end.
	
	int num;
	string name, city;
	int age;
	int cnic;
	
	int people;
	string food,tour_guide,tour;
	
	//opening the txt file of tourism packages.
	
	b.open("tourism_packages.txt",ios::in);
	
	//checking if the file is open or there's an error.
	
	if(!b){
		cout<<"the file did not open "<<endl;
		exit(0);
	}
	
	//while loop so that the program can run several times unless the user wants to end it with a choice.
	
	while(1){
		
		//printing the data from the text file.
		
		while(!b.eof()){
		
		getline(b,a);
			cout<<a<<endl;
			
			
		}
		
		cout<<"\nenter the index number of the package you want to select and proceed with : "<<endl;
		cin>>num;
		
		//the first package data and working is in the first (if body).
		
		if(num == 1){
			
			cout<<"enter your first name "<<endl;
			cin>>name;
			cout<<"enter you cnic number "<<endl;
			cin>>cnic;
			cout<<"enter your age "<<endl;
			cin>>age;
			cout<<"enter your current address of residence "<<endl;
			cin>>city;
			
			package1 obj1;
			
			//to set data of the customer we call the function.
			
			obj1.set_data(name,cnic,age,city);
			
			cout<<"enter the number of people going for the tour "<<endl;
			cin>>people;
			cout<<"do you want the 3 times-a-day-meal deal (yes/no) "<<endl;
			cin>>food;
			cout<<"do you want the tour guide (yes/no) "<<endl;
			cin>>tour_guide;
			cout<<"do you want a private tour or woth public (yes/no) "<<endl;
			cin>>tour;
			
			// to calculate the cost of the tour package.
			
			obj1.cost_analysis(people,food,tour_guide,tour);
			
			//asking the user if he or she wants to book another tour or wants to exit the website.
			
			cout<<"do you want to book another tour ? (yes/no) "<<endl;
			cin>>j;
			
			if(j == "yes"){
				continue;
			}
			else{
				exit(0);
			}
			
		}
		else if(num == 2){
			
			cout<<"enter your first name "<<endl;
			cin>>name;
			cout<<"enter you cnic number "<<endl;
			cin>>cnic;
			cout<<"enter your age "<<endl;
			cin>>age;
			cout<<"enter your current address of residence "<<endl;
			cin>>city;
			
			package2 obj2;
			
			//storing the user data.
			
			obj2.set_data(name,cnic,age,city);
			
			cout<<"enter the number of people going for the tour "<<endl;
			cin>>people;
			cout<<"do you want the 2 times-a-day-meal deal supper ansd dinner (yes/no) "<<endl;
			cin>>food;
			cout<<"do you want the tour guide (yes/no) "<<endl;
			cin>>tour_guide;
			cout<<"do you want a private tour or woth public (yes/no) "<<endl;
			cin>>tour;
			
			//calculating the total cot of the tour.
			
			obj2.cost_analysis(people,food,tour_guide,tour);

			cout<<"do you want to book another tour ? (yes/no) "<<endl;
			cin>>j;
			
			if(j == "yes"){
				continue;
			}
			else{
				exit(0);
			}
			
		}
		else if(num == 3){
			
			cout<<"enter your first name "<<endl;
			cin>>name;
			cout<<"enter you cnic number "<<endl;
			cin>>cnic;
			cout<<"enter your age "<<endl;
			cin>>age;
			cout<<"enter your current address of residence "<<endl;
			cin>>city;
			
			package3 obj3;
			
			//storing the user data.
			
			obj3.set_data(name,cnic,age,city);
			
			cout<<"enter the number of people going for the tour "<<endl;
			cin>>people;
			cout<<"do you want the 3 times-a-day-meal deal (yes/no) "<<endl;
			cin>>food;
			cout<<"do you want the tour guide (yes/no) "<<endl;
			cin>>tour_guide;
			cout<<"do you want a private tour or woth public (yes/no) "<<endl;
			cin>>tour;
			
			//calculating the total cost.
			
			obj3.cost_analysis(people,food,tour_guide,tour);

			cout<<"do you want to book another tour ? (yes/no) "<<endl;
			cin>>j;
			
			if(j == "yes"){
				continue;
			}
			else{
				exit(0);
			}
			
		}
		else if(num == 4){
			
			cout<<"enter your first name "<<endl;
			cin>>name;
			cout<<"enter you cnic number "<<endl;
			cin>>cnic;
			cout<<"enter your age "<<endl;
			cin>>age;
			cout<<"enter your current address of residence "<<endl;
			cin>>city;
			
			package1 obj4;
			
			//storing the user data.
			
			obj4.set_data(name,cnic,age,city);
			
			cout<<"enter the number of people going for the tour "<<endl;
			cin>>people;
			cout<<"do you want the 3 times-a-day-meal deal (yes/no) "<<endl;
			cin>>food;
			cout<<"do you want the tour guide (yes/no) "<<endl;
			cin>>tour_guide;
			cout<<"do you want a private tour or woth public (yes/no) "<<endl;
			cin>>tour;
			
			//calculating the total cost.
			
			obj4.cost_analysis(people,food,tour_guide,tour);

			cout<<"do you want to book another tour ? (yes/no) "<<endl;
			cin>>j;
			
			//asking the user about the choice to exit or continue.
			
			if(j == "yes"){
				continue;
			}
			else{
				exit(0);
			}
			
		}
		else if(num == 5){
			
			cout<<"enter your first name "<<endl;
			cin>>name;
			cout<<"enter you cnic number "<<endl;
			cin>>cnic;
			cout<<"enter your age "<<endl;
			cin>>age;
			cout<<"enter your current address of residence "<<endl;
			cin>>city;
			
			package1 obj5;
			
			//storing user data.
			
			obj5.set_data(name,cnic,age,city);
			
			cout<<"enter the number of people going for the tour "<<endl;
			cin>>people;
			cout<<"do you want the 3 times-a-day-meal deal (yes/no) "<<endl;
			cin>>food;
			cout<<"do you want the tour guide (yes/no) "<<endl;
			cin>>tour_guide;
			cout<<"do you want a private tour or woth public (yes/no) "<<endl;
			cin>>tour;
			
			//calculating  the total cost.
			
			obj5.cost_analysis(people,food,tour_guide,tour);

			cout<<"do you want to book another tour ? (yes/no) "<<endl;
			cin>>j;
			
			if(j == "yes"){
				continue;
			}
			else{
				exit(0);
			}
			
		}
		
		//exception handling using else condition to show error statement and run the loop again for the user to make another choice.
		
		else {
			
			cout<<"sorry but you may have entered a wrong choice. please try again with the package selection "<<endl;
			continue;
			
		}
		
	}	
	
	//closing the tourism packages text file after usage.
		
	b.close();
	
	return 0;
}
