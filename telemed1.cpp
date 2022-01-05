//Welcome to Telemed for Fast, Convenient Medical Attention
#include<iostream>
#include<string>
using namespace std;

//Declare Variables and Initialize
string symptoms[5] = { "nausea","fever","vomiting","headache","cough" };
string timeSlots[5] = { "10:00am","11:00am","12:00pm","13:00","14:00" };
string username;
string option = "0";


bool signin() {
	//patient logs in using credentials in code.
	// system will reject login if incorrect username password provided
	//function to check username password against what is stored on file.
	string password;
	cout << "\n\tPlease enter your username & password \n";
	cout << "\n\tusername:";
	getline(cin, username);
	cout << "\n\tpassword:";
	getline(cin, password);

	if (username == "Patient" && password == "password") {
		cout << "\n\tWelcome " << username << " \n";
		cout << "\n\tSee list of Symptoms \n";
	}
	else {
		cout << "\n\tWrong username and/or password\n";
		return false;
	}
	return true;

}

void symptomsRequest() {
	//application to request for symptoms from patient.
	//symptoms to be stored in array 
	//function to move to next line after each symptom is input.

	int i = 0;
	while (i < 5) {
		cout << "\n\t" << i + 1 << ":" << symptoms[i];
		i++;
	}

	cout << "\n\n\t Enter your symptoms below from the list given above";
	cout << "\n\t1:";
	getline(cin, symptoms[0]);
	cout << "\n\t2:";
	getline(cin, symptoms[1]);
	cout << "\n\t3:";
	getline(cin, symptoms[2]);
	cout << "\n\t4:";
	getline(cin, symptoms[3]);
	cout << "\n\t5:";
	getline(cin, symptoms[4]);
}

void bookAppointment() {
	//list number available time slots
	//ideally time slots will be stored in array and output accordingly
	cout << "\n\tThe following times are available for an appointment: ";
	for (int i = 0; i < 5; i++) {
		cout << "\n\t" << i + 1 << ":" << timeSlots[i];
	}
	cout << "\n\tPlease pick an appointment from option 0 to 4 above\n\t";
	getline(cin, option);
}

void listAppointments() {
	//fetch user id and associated appointments
	// display on console.
	cout << "\n\tThank you " << username << " for using Kat Online Consultations\n";
	cout << "\n\tYou have the below symptoms";
	int i = 0;
	while (i < 5) {
		cout << "\n\t " << i + 1 << " :" << symptoms[i];
		i++;
	}
	cout << "\n\tAnd your appointment has been booked accordingly\n\n\n";
}
int main() {
	cout << "\n\tWELCOME TO KAT ONLINE CONSULTATIONS. \t";
	cout << "\n\t......................................\t";
	if (signin()) {
		symptomsRequest();
		bookAppointment();
		listAppointments();
	}
	return 0;
}