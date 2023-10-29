
#include<iostream>
#include"crime_data.h"
#include"MYArray.h"
#include<string>

using namespace std;

criminal::criminal() : name("Unknown"), race(" "), gender(" "), CNIC("_____ - _______ - _ "),
state(" "), city(" "), address(" "), crime_type(" "), offence(" "), crime_date(" "),
complainer_name(" "), investigating_officer(" "), punishment_date(" "), DateofBirth(" "),
cell_no(0), postal_code(0), punishment_years(0), age(0) {}

criminal::criminal(string nam, string rac, string gend, string cnic, string stat, string cit, string addres, string crimetp, string off, string crimedt, string compname, string investoff, string punishdt, string DOB, int cell, int postcod, int punishyr, int ag)
	:name(nam), race(rac), gender(gend), CNIC(cnic), state(stat), city(cit), address(addres), crime_type(crimetp),
	offence(off), crime_date(crimedt), complainer_name(compname), investigating_officer(investoff), punishment_date(punishdt),
	DateofBirth(DOB), cell_no(cell), postal_code(postcod), punishment_years(punishyr), age(ag) {}

criminal::~criminal()
{
	// to delete some pointer or dynamic allocated attribute
}

void criminal::setname(string nam)
{
	for (int i = 0; i < nam.length(); i++)
	{
		nam[i] = toupper(nam[i]);
	}
	this->name = nam;
}
void criminal::setrace(string rac)
{
	for (int i = 0; i < rac.length(); i++)
	{
		rac[i] = toupper(rac[i]);
	}
	this->race = rac;
}
void criminal::setgender(string gen)
{
	for (int i = 0; i < gen.length(); i++)
	{
		gen[i] = toupper(gen[i]);
	}
	this->gender = gen;
}
void criminal::setCNIC(string cnic)
{
	this->CNIC = cnic;
}
void criminal::setstate(string stat)
{
	for (int i = 0; i < stat.length(); i++)
	{
		stat[i] = toupper(stat[i]);
	}
	this->state = stat;
}
void criminal::setcity(string cit)
{
	for (int i = 0; i < cit.length(); i++)
	{
		cit[i] = toupper(cit[i]);
	}
	this->city = cit;
}
void criminal::setaddress(string addres)
{
	for (int i = 0; i < addres.length(); i++)
	{
		addres[i] = toupper(addres[i]);
	}
	this->address = addres;
}
void criminal::setcrime_type(string crimetp)
{
	for (int i = 0; i < crimetp.length(); i++)
	{
		crimetp[i] = toupper(crimetp[i]);
	}
	this->crime_type = crimetp;
}
void criminal::setoffence(string off)
{
	for (int i = 0; i < off.length(); i++)
	{
		off[i] = toupper(off[i]);
	}
	this->offence = off;
}
void criminal::setcrime_date(string crimedt)
{
	this->crime_date = crimedt;
}
void criminal::setcomplainer_name(string compnam)
{
	for (int i = 0; i < compnam.length(); i++)
	{
		compnam[i] = toupper(compnam[i]);
	}
	this->complainer_name = compnam;
}
void criminal::setinvestigating_officer(string investoff)
{
	for (int i = 0; i < investoff.length(); i++)
	{
		investoff[i] = toupper(investoff[i]);
	}
	this->investigating_officer = investoff;
}
void criminal::setpunishment_date(string punishdt)
{
	this->punishment_date = punishdt;
}
void criminal::setDateofBirth(string dob)
{
	this->DateofBirth = dob;
}
void criminal::setpostal_code(int postalcod)
{
	this->postal_code = postalcod;
}
void criminal::setcell_no(int cell)
{
	// here it is the prison number means cell number 

	this->cell_no = cell;

}
void criminal::setpunishment_years(int punishyr)
{
	this->punishment_years = punishyr;
}
void criminal::setage(int ag)
{
	this->age = ag;
}


string criminal::getname()
{
	return name;
}
string criminal::getrace()
{
	return race;
}
string criminal::getgender()
{
	return gender;
}
string criminal::getCNIC()
{
	return CNIC;
}
string criminal::getstate()
{
	return state;
}
string criminal::getcity()
{
	return city;
}
string criminal::getaddress()
{
	return address;
}
string criminal::getcrime_type()
{
	return crime_type;
}
string criminal::getoffence()
{
	return offence;
}
string criminal::getcrime_date()
{
	return crime_date;
}
string criminal::getcomplainer_name()
{
	return complainer_name;
}
string criminal::getinvestigating_officer()
{
	return investigating_officer;
}
string criminal::getpunishment_date()
{
	return punishment_date;
}
string criminal::getDateofBirth()
{
	return DateofBirth;
}


int criminal::getpostal_code()
{
	return postal_code;
}
int criminal::getcell_no()
{
	return cell_no;
}
int criminal::getpunishment_years()
{
	return punishment_years;
}
int criminal::getage()
{
	return age;
}