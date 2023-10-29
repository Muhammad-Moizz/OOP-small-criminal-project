
#include<iostream>
#include"crime_data.h"
#include"MYArray.h"
using namespace std;

Array::Array() :count(0), capacity(0), c(nullptr) {}
Array::Array(int c, int cap) :count(c), capacity(cap)
{
    this->c = new criminal[capacity];
}
//Array::Array(const Array& other) :count(other.count), capacity(other.capacity)
//{
//	arr = new int[capacity];
//	for (int i = 0; i < count; i++)
//	{
//		arr[i] = other.arr[i];
//	}
//}
Array::~Array()
{
    delete[] c;
}

// mutators

void Array::set_count(int c)
{
    count = c;
}

void Array::set_capacity(int cap)
{
    capacity = cap;
}

// accessors 

int Array::get_count()
{
    return count;
}

int Array::get_capacity()
{
    return capacity;
}

// member functions

void Array::insert_criminal_record()
{
    if (count < capacity)
    {
        criminal obj;

        string updatedName, race, gender, cnic, state, city, address, crime_type, offence, crime_date, complainer_name, investigating_officer, punishment_date, DateofBirth;
        int cell_no, postal_code, punishment_years, age;


        cin.ignore();
        cout << "Enter  name: ";
        getline(cin, updatedName);
        obj.setname(updatedName);

        cout << "Enter race: ";
        getline(cin, race);
        obj.setrace(race);

        cout << "Enter gender: ";
        getline(cin, gender);
        obj.setgender(gender);

        cout << "Enter CNIC: ";
        getline(cin, cnic);
        obj.setCNIC(cnic);

        cout << "Enter state: ";
        getline(cin, state);
        obj.setstate(state);

        cout << "Enter city: ";
        getline(cin, city);
        obj.setcity(city);

        cout << "Enter address: ";
        getline(cin, address);
        obj.setaddress(address);

        cout << "Enter crime type: ";
        getline(cin, crime_type);
        obj.setcrime_type(crime_type);

        cout << "Enter offence: ";
        getline(cin, offence);
        obj.setoffence(offence);

        cout << "Enter the crime date: ";
        getline(cin, crime_date);
        obj.setcrime_date(crime_date);

        cout << "Enter the complainer name: ";
        getline(cin, complainer_name);
        obj.setcomplainer_name(complainer_name);

        cout << "Enter the name of investigating officer: ";
        getline(cin, investigating_officer);
        obj.setinvestigating_officer(investigating_officer);

        cout << "Enter the punishment date: ";
        getline(cin, punishment_date);
        obj.setpunishment_date(punishment_date);

        cout << "Enter Date of Birth: ";
        getline(cin, DateofBirth);
        obj.setDateofBirth(DateofBirth);

        cout << "Enter cell number: ";
        cin >> cell_no;
        obj.setcell_no(cell_no);

        cout << "Enter postal code: ";
        cin >> postal_code;
        obj.setpostal_code(postal_code);

        cout << "Enter punishment years: ";
        cin >> punishment_years;
        obj.setpunishment_years(punishment_years);

        cout << "Enter age: ";
        cin >> age;
        obj.setage(age);

        c[count++] = obj;
        cout << endl;
        cout << " Record added successfully :) " << endl;
    }
    else
    {
        cout << " You can not enter the data anymore :( " << endl << endl;
    }
}

int Array::search_name_binary(string key)
{

    int start = 0;
    int end = count;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int comparisonResult = c[mid].getname().compare(key);

        if (comparisonResult == 0)
        {
            return mid;
        }
        else if (comparisonResult > 0)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;

}

int Array::search_By_crime_type(string type)
{
    int start = 0;
    int end = count;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int comparisonResult = c[mid].getcrime_type().compare(type);

        if (comparisonResult == 0)
        {
            return mid;
        }
        else if (comparisonResult > 0)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

void Array::update_record(string name)
{
    int index = search_name_binary(name);

    if (index != -1)
    {
        criminal obj = c[index];

        cout << "------ Update Record -------" << endl << endl;

        string updatedName, race, gender, cnic, state, city, address, crime_type, offence, crime_date, complainer_name, investigating_officer, punishment_date, DateofBirth;
        int cell_no, postal_code, punishment_years, age;

        cout << "Enter new name: ";
        cin >> updatedName;
        obj.setname(updatedName);

        cout << "Enter race: ";
        cin >> race;
        obj.setrace(race);

        cout << "Enter gender: ";
        cin >> gender;
        obj.setgender(gender);

        cout << "Enter CNIC: ";
        cin >> cnic;
        obj.setCNIC(cnic);

        cout << "Enter state: ";
        cin >> state;
        obj.setstate(state);

        cout << "Enter city: ";
        cin >> city;
        obj.setcity(city);

        cout << "Enter address: ";
        cin >> address;
        obj.setaddress(address);

        cout << "Enter crime type: ";
        cin >> crime_type;
        obj.setcrime_type(crime_type);

        cout << "Enter offence: ";
        cin >> offence;
        obj.setoffence(offence);

        cout << "Enter the crime date: ";
        cin >> crime_date;
        obj.setcrime_date(crime_date);

        cout << "Enter the complainer name: ";
        cin >> complainer_name;
        obj.setcomplainer_name(complainer_name);

        cout << "Enter the name of investigating officer: ";
        cin >> investigating_officer;
        obj.setinvestigating_officer(investigating_officer);

        cout << "Enter the punishment date: ";
        cin >> punishment_date;
        obj.setpunishment_date(punishment_date);

        cout << "Enter Date of Birth: ";
        cin >> DateofBirth;
        obj.setDateofBirth(DateofBirth);

        cout << "Enter cell number: ";
        cin >> cell_no;
        obj.setcell_no(cell_no);

        cout << "Enter postal code: ";
        cin >> postal_code;
        obj.setpostal_code(postal_code);

        cout << "Enter punishment years: ";
        cin >> punishment_years;
        obj.setpunishment_years(punishment_years);

        cout << "Enter age: ";
        cin >> age;
        obj.setage(age);

        c[index] = obj;
        cout << endl;
        cout << "Record Updated Successfully :)" << endl << endl;
    }
    else
    {
        cout << "Not found, and you can't update the record :(" << endl;
    }
}

void Array::Display_offence_murder()
{
    cout << " The lists of the criminal with offence ' Murder ' are given below " << endl << endl;

    for (int i = 0; i < count; i++)
    {
        if (c[i].getoffence() == "MURDER")
        {
            cout << "    Criminal No . ( " << i + 1 << " ) " << endl << endl;
            cout << " Name : " << c[i].getname() << endl;
            cout << " Race : " << c[i].getrace() << endl;
            cout << " Gender : " << c[i].getgender() << endl;
            cout << " CNIC : " << c[i].getCNIC() << endl;
            cout << " State : " << c[i].getstate() << endl;
            cout << " City : " << c[i].getcity() << endl;
            cout << " Address : " << c[i].getaddress() << endl;
            cout << " Crime type : " << c[i].getcrime_type() << endl;
            cout << " Offence : " << c[i].getoffence() << endl;
            cout << " Crime date : " << c[i].getcrime_date() << endl;
            cout << " Complainer name : " << c[i].getcomplainer_name() << endl;
            cout << " Investigating officer name : " << c[i].getinvestigating_officer() << endl;
            cout << " Punishment date : " << c[i].getpunishment_date() << endl;
            cout << " Date of birth : " << c[i].getDateofBirth() << endl;
            cout << " Cell No. : " << c[i].getcell_no() << endl;
            cout << " Postal Code : " << c[i].getpostal_code() << endl;
            cout << " Punishment year : " << c[i].getpunishment_years() << endl;
            cout << " Age : " << c[i].getage() << endl << endl;
            cout << "-------------------------------------------" << endl << endl;

        }
    }
}


void Array::Display_offence_theft()
{
    cout << " The lists of the criminal with offence ' Theft ' are given below " << endl << endl;

    for (int i = 0; i < count; i++)
    {
        if (c[i].getoffence() == "THEFT")
        {
            cout << " Criminal No . ( " << i + 1 << " ) " << endl;
            cout << " Name : " << c[i].getname() << endl;
            cout << " Race : " << c[i].getrace() << endl;
            cout << " Gender : " << c[i].getgender() << endl;
            cout << " CNIC : " << c[i].getCNIC() << endl;
            cout << " State : " << c[i].getstate() << endl;
            cout << " City : " << c[i].getcity() << endl;
            cout << " Address : " << c[i].getaddress() << endl;
            cout << " Crime type : " << c[i].getcrime_type() << endl;
            cout << " Offence : " << c[i].getoffence() << endl;
            cout << " Crime date : " << c[i].getcrime_date() << endl;
            cout << " Complainer name : " << c[i].getcomplainer_name() << endl;
            cout << " Investigating officer name : " << c[i].getinvestigating_officer() << endl;
            cout << " Punishment date : " << c[i].getpunishment_date() << endl;
            cout << " Date of birth : " << c[i].getDateofBirth() << endl;
            cout << " Cell No. : " << c[i].getcell_no() << endl;
            cout << " Postal Code : " << c[i].getpostal_code() << endl;
            cout << " Punishment year : " << c[i].getpunishment_years() << endl;
            cout << " Age : " << c[i].getage() << endl << endl;
            cout << "-------------------------------------------" << endl << endl;

        }
    }
}


void Array::Delete_record(string key)
{
    int index = search_name_binary(key);

    if (index >= 0 && index < count)
    {
        for (int i = index; i < count - 1; i++)
        {
            c[i] = c[i + 1];
        }
        count--;
        cout << " Your data at ( " << index << " ) is deleted successfully :) " << endl;
        cout << " Criminal name was : " << c[index].getname() << endl;
    }
    else
    {
        cout << " We cant delete because Data not found :( " << endl;
    }

}

void Array::Display_lastMonth_offence()
{
    string mon;
    cout << "Enter the month number (e.g., '01' for January): ";
    cin >> mon;

    if (mon.length() != 2 || mon < "01" || mon > "12")
    {
        cout << "Invalid month input. Please enter a valid month (e.g., '01' for January)." << endl;
        return;
    }

    cout << " Offenses in month " << mon << ":" << endl;

    for (int i = 0; i < count; i++)
    {
        if (c[i].getcrime_date().substr(3, 2) == mon)
        {
            cout << " Criminal name is : " << c[i].getname() << endl;
            cout << "Offense: " << c[i].getoffence() << " on Date: " << c[i].getcrime_date() << endl;
        }
    }
}

void Array::Bubble_sort_name()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (c[j].getname() > c[j + 1].getname())
            {
                criminal temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
}