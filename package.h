//global variables that are used by all classes.

float cost_per_person=200,cost_per_meal=35,cost_tour_guide=400,cost_private_tour=1100,average_tour_cost=1500;

//parent package class with pure virtual functions.

class package{
	
	public:
		
		virtual int cost_analysis(int, string, string, string)=0;
		virtual void set_data(string, int ,int ,string)=0;
		
};

// first child class for first package.

class package1: public package {
	
	string name;
	int age;
	int cnic;
	string city;
	
	
	float total_person_cost,total_meal_cost;
	float total_cost;
	int cost,total;
	
	public:
		
		//set data functions fo setting data.
		
		void set_data(string name1, int cnic1, int age1, string city1){
			
			name = name1;
			age = age1;
			cnic = cnic1;
			city = city1;
			
			//opening a new txt file to store the contumer's data using file handling.
			
			fstream c;
			c.open("costumer_data.txt",ios::out);
			
			if(!c){
				cout<<"the file did not open "<<endl;
				exit(0);
			}
			else{
				c<<name1<<"\t\t"<<cnic1<<"\t\t"<<age1<<"\t\t"<<city1<<"\n";
			}
			
			//closing the user data file after it is used to store information of the user.
			
			c.close();
			
		}
		//overloading operator as a function.
		void operator ++(){
			++cost;
			++total;
		}
		
		//cost analysis function for analyzing cost and displaying it using if-else conditions.
		
		int cost_analysis(int people, string preference_f, string preference_t, string tours){
			
			total_person_cost=people*cost_per_person;
			total_meal_cost=cost_per_meal*3*people;
			
			if(preference_f == "yes" && preference_t == "yes" && tours == "yes"){
			
			total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
			
			
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
			
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			
			//exception handling to display error statement.
			
			else{
				cout<<"there an error in the system please try again later "<<endl;
				
			}
			
		}
		
	
};
//similarly
//second child class for second package.

class package2: public package{
	
	string name;
	int age;
	int cnic;
	string city;
	
	
	float total_person_cost,total_meal_cost;
	float total_cost;
	int cost,total;
	public:
		
		void set_data(string name1, int cnic1, int age1, string city1){
			
			name = name1;
			age = age1;
			cnic = cnic1;
			city = city1;
			
			fstream c;
			c.open("costumer_data.txt",ios::out);
			
			if(!c){
				cout<<"the file did not open "<<endl;
				exit(0);
			}
			else{
				c<<name1<<"\t\t"<<cnic1<<"\t\t"<<age1<<"\t\t"<<city1<<"\n";
			}
			
			c.close();
			
		}
		void operator ++(){
			++cost;
			++total;
		}
		int cost_analysis(int people, string preference_f, string preference_t, string tours){
			
			total_person_cost=people*cost_per_person;
			total_meal_cost=cost_per_meal*3*people;
			
			if(preference_f == "yes" && preference_t == "yes" && tours == "yes"){
			
			total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
			
			
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
			
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else{
				cout<<"there an error in the system please try again later "<<endl;
				
			}
			
		}
		
	
};
//similarly
//third child class for third package.

class package3: public package{
	
	string name;
	int age;
	int cnic;
	string city;
	
	
	float total_person_cost,total_meal_cost;
	float total_cost;
	int cost,total;
	public:
		
		void set_data(string name1, int cnic1, int age1, string city1){
			
			name = name1;
			age = age1;
			cnic = cnic1;
			city = city1;
			
			fstream c;
			c.open("costumer_data.txt",ios::out);
			
			if(!c){
				cout<<"the file did not open "<<endl;
				exit(0);
			}
			else{
				c<<name1<<"\t\t"<<cnic1<<"\t\t"<<age1<<"\t\t"<<city1<<"\n";
			}
			
			c.close();
			
		}
		void operator ++(){
			++cost;
			++total;
		}
		int cost_analysis(int people, string preference_f, string preference_t, string tours){
			
			total_person_cost=people*cost_per_person;
			total_meal_cost=cost_per_meal*3*people;
			
			if(preference_f == "yes" && preference_t == "yes" && tours == "yes"){
			
			total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
			
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
			
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_private_tour;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_private_tour;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide;
				
			cout<<"the free of cost of parting gifts and rehional specialties are added as presents : "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else{
				cout<<"there an error in the system please try again later "<<endl;
				
			}
			
		}
		
	
};
//similarly
//fourth child class for fourth package.

class package4: public package{
	
	string name;
	int age;
	int cnic;
	string city;
	
	
	float total_person_cost,total_meal_cost;
	float total_cost;
	int cost,total;
	public:
		
		void set_data(string name1, int cnic1, int age1, string city1){
			
			name = name1;
			age = age1;
			cnic = cnic1;
			city = city1;
			
			fstream c;
			c.open("costumer_data.txt",ios::out);
			
			if(!c){
				cout<<"the file did not open "<<endl;
				exit(0);
			}
			else{
				c<<name1<<"\t\t"<<cnic1<<"\t\t"<<age1<<"\t\t"<<city1<<"\n";
			}
			
			c.close();
			
		}
		void operator ++(){
			++cost;
			++total;
		}
		int cost_analysis(int people, string preference_f, string preference_t, string tours){
			
			total_person_cost=people*cost_per_person;
			total_meal_cost=cost_per_meal*3*people;
			
			if(preference_f == "yes" && preference_t == "yes" && tours == "yes"){
			
			total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
			
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
			
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_private_tour;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_private_tour;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide;
				
			cout<<"there is special discount for aged people and family having more than seven menmbers in this tour package "<<endl;	
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else{
				cout<<"there an error in the system please try again later "<<endl;
				
			}
			
		}
		
	
};
//similarly
//fifth child class for fifth package.

class package5: public package{
	
	string name;
	int age;
	int cnic;
	string city;
	
	
	float total_person_cost,total_meal_cost;
	float total_cost;
	int cost,total;
	public:
		
		void set_data(string name1, int cnic1, int age1, string city1){
			
			name = name1;
			age = age1;
			cnic = cnic1;
			city = city1;
			
			fstream c;
			c.open("costumer_data.txt",ios::out);
			
			if(!c){
				cout<<"the file did not open "<<endl;
				exit(0);
			}
			else{
				c<<name1<<"\t\t"<<cnic1<<"\t\t"<<age1<<"\t\t"<<city1<<"\n";
			}
			
			c.close();
			
		}
		void operator ++(){
			++cost;
			++total;
		}
		int cost_analysis(int people, string preference_f, string preference_t, string tours){
			
			total_person_cost=people*cost_per_person;
			total_meal_cost=cost_per_meal*3*people;
			
			if(preference_f == "yes" && preference_t == "yes" && tours == "yes"){
			
			total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
			
			
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
			
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "no" && tours == "yes"){
				
				total_cost=total_person_cost+average_tour_cost+cost_private_tour;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the private tour cost is : "<<cost_private_tour<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "yes" && preference_t == "no" && tours == "no"){
				
				total_cost=total_person_cost+total_meal_cost+average_tour_cost;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the total meal cost is : "<<total_meal_cost<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else if(preference_f == "no" && preference_t == "yes" && tours == "no"){
				
				total_cost=total_person_cost+average_tour_cost+cost_tour_guide;
				
				
			cout<<"the average tour cost is : "<<average_tour_cost<<endl;
			cout<<"the total person cost is : "<<total_person_cost<<endl;
			cout<<"the cost of hiring a tour guide  is : "<<cost_tour_guide<<endl;
			cout<<"the total cost of the tour is : "<<total_cost<<endl;
				
			}
			else{
				cout<<"there an error in the system please try again later "<<endl;
				
			}
			
		}
		
};

////////////////////////////////////////					the end						///////////////////////////////////////////////

