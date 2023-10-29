#pragma once


class Array
{

private:

	criminal* c;
	int count;
	int capacity;


public:

	// constructors 

	Array();
	Array(int, int);
	//Array(const Array&);

	//destructors
	~Array();

	// mutators 

	void set_count(int);
	void set_capacity(int);

	// accessors 

	int get_count();
	int get_capacity();

	// member functions 


	void insert_criminal_record();
	int search_name_binary(string);
	int search_By_crime_type(string);
	void update_record(string);
	void Display_offence_murder();
	void Display_offence_theft();
	void Bubble_sort_name();
	void Delete_record(string);
	void Display_lastMonth_offence();



};