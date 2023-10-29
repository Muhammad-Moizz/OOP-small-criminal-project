#pragma once

#include<string>
using namespace std;

class criminal
{

private:


	string name;
	string race;
	string gender;
	string CNIC;
	string state;
	string city;
	string address;
	string crime_type;
	string offence;
	string crime_date;
	string complainer_name;
	string investigating_officer;
	string punishment_date;
	string DateofBirth;

	int cell_no;
	int postal_code;
	int punishment_years;
	int age;

public:

	criminal();
	criminal(string, string, string, string, string, string, string, string, string, string, string, string, string, std::string, int, int, int, int);
	//criminal(const criminal&);
	~criminal();

	// mutators 

	void setname(string);
	void setrace(string);
	void setgender(string);
	void setCNIC(string);
	void setstate(string);
	void setcity(string);
	void setaddress(string);
	void setcrime_type(string);
	void setoffence(string);
	void setcrime_date(string);
	void setcomplainer_name(string);
	void setinvestigating_officer(string);
	void setpunishment_date(string);
	void setDateofBirth(string);
	void setpostal_code(int);
	void setcell_no(int);
	void setpunishment_years(int);
	void setage(int);

	// accessors

	string getname();
	string getrace();
	string getgender();
	string getCNIC();
	string getstate();
	string getcity();
	string getaddress();
	string getcrime_type();
	string getoffence();
	string getcrime_date();
	string getcomplainer_name();
	string getinvestigating_officer();
	string getpunishment_date();
	string getDateofBirth();


	int getpostal_code();
	int getcell_no();
	int getpunishment_years();
	int getage();


};