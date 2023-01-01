#include <iostream>
using namespace std;





main(){
	int holidays;
	int working;
	float minutes;	
	float exhours;


	cout<<"Number of holidays: ";
	cin>>holidays;

	working = 365-holidays;

	minutes= (working *63)+(holidays*127);

	

	cout<<"	Tom played Hours: "<<minutes/60<<"hours";

cout<<endl;

        exhours=30000-minutes;

	if(exhours>0){

	cout<<"Tom Sleeps well "<<exhours/60<<"less for play";
}
        exhours=30000-minutes;

	if(exhours<0){

	cout<<"Tom will run away "<< (exhours/60) *-1 <<" for play";
}



}

	