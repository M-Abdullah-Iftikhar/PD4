#include <iostream>
using namespace std;

void printMenu();
void details(int num);
void mainUI(string name1,string name2,int num, float agg1, float agg2);


main(){
    float result1;
    float result2;

	printMenu();

}


void printMenu(){

	system("cls");

int num;

cout<<"********************"<<endl;
cout<<"*   UET LAHORE     *"<<endl;
cout<<"********************"<<endl;

 	cout<<"Press 1 to Enter Details of first student:"<<endl;
        cout<<"Press 2 to Enter Details of second student:"<<endl;
        cout<<"Press 3 to calculate the aggregate of first student:"<<endl;
        cout<<"Press 4 to calculate the aggregate of second student:"<<endl;
        cout<<"Press 5 to display the student with roll number 01:"<<endl;
	cout<<"Enter Choice: ";
	cin>>num;

	details(num);

       	}



void details(int num){

	char anyKey;



	if(num==1||2){

	system("cls");


	if(num==1){
	string name1;
	float metric1;
	float inter1;
	float ecat1;
	float result1;

	cout<<"Enter Your Name: ";
	cin>>name1;

	cout<<"Enter Your Metric Marks: ";
	cin>>metric1;

	cout<<"Enter Your Inter Marks: ";
	cin>>inter1;

	cout<<"Enter Your Ecat Marks: ";
	cin>>ecat1;

	result1 = (inter1/550)*40+(metric1/1100)*10+(ecat1/400)*50;

	cout<<"Press any key to continue: ";
	cin>>anyKey;

	cout<<endl;
	printMenu();

	}

	if(num==2){

	string name2;
	float metric2;
	float inter2;
	float ecat2;
	float result2;

	cout<<"Enter Your Name: ";
	cin>>name2;

	cout<<"Enter Your Metric Marks: ";
	cin>>metric2;

	cout<<"Enter Your Inter Marks: ";
	cin>>inter2;

	cout<<"Enter Your Ecat Marks: ";
	cin>>ecat2;

	result2 = (inter2/550)*40+(metric2/1100)*10+(ecat2/400)*50;

	cout<<"Press any key to continue: ";
	cin>>anyKey;

	cout<<endl;
	printMenu();


	}
	if (num==3){

	}




	}

	}





void mainUI(string name1,string name2,int num, float agg1, float agg2){



	if(num==3){

	cout<<name1<<"! Your Aggregade is: "<<agg1;

	}
	if(num==4){

	cout<<name2<<"! Your Aggregade is: "<<agg2;

	}

	if(num==5){

	if(agg1>agg2){
	cout<<name1<<"! Your Roll No. is 1";

	}

	if(agg2>agg1){
	cout<<name2<<"! Your Roll No. is 1";

	}
}

}






