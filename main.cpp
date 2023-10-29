#include<iostream>
#include<string>
#include"crime_data.h"
#include"MYArray.h"
using namespace std;

int main()
{
    int cap;
    cout << " Kindly enter the capacity of the array : ";
    cin >> cap;
    cout << endl;
    Array myarray(0, cap);
    bool main_choice = false;
    int choice;
    do {

        cout << " ============== Criminal Record =============== " << endl;
        cout << " || 1. Insert Criminal Record   " << endl;
        cout << " || 2. Search by name using Binary search " << endl;// i think we have to make sorting function first then we'll do this
        cout << " || 3. Search by Crime Type using Binary search " << endl;
        cout << " || 4. Update the Record " << endl;
        cout << " || 5. Delete the record " << endl;
        cout << " || 6. Displaying Offence Murder list " << endl;
        cout << " || 7. Displaying Offence Theft list " << endl;
        cout << " || 8. Criminal Raised in last month " << endl << endl;
        cout << " Kindly enter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            myarray.insert_criminal_record();

            break;
        }

        case 2:
        {
            string n;
            cout << " Enter the name to search in criminal record by Binary Search : ";
            cin >> n;
            for (int i = 0; i < n.length(); i++)
            {
                n[i] = toupper(n[i]);
            }
            int found = myarray.search_name_binary(n);
            if (found != -1)
            {
                cout << " The name you entered which is ( " << n << " ) is found in the record :) " << endl;
            }
            else
            {
                cout << " Sorry your name is not found in the criminal record :( " << endl;
            }

            break;
        }

        case 3:
        {

            string type;
            cout << " Enter the crime type to search in the record : ";
            cin >> type;
            for (int i = 0; i < type.length(); i++)
            {
                type[i] = toupper(type[i]);
            }
            int yes = myarray.search_By_crime_type(type);
            if (yes != -1)
            {
                cout << " Your crime :  " << type << "  is found in the record :) " << endl;
            }
            else
            {
                cout << " Sorry your crime type is not found in the record :( " << endl;
            }

            break;

        }

        case 4:
        {
            string nam;
            cout << " Kindly enter the name of criminal which you want to update his record : ";
            cin >> nam;
            for (int i = 0; i < nam.length(); i++)
            {
                nam[i] = toupper(nam[i]);
            }
            myarray.update_record(nam);

            break;
        }

        case 5:
        {
            string criminal_name;
            cout << " Kindly enter the name of criminal which you want to update his record : ";
            cin >> criminal_name;
            for (int i = 0; i < criminal_name.length(); i++)
            {
                criminal_name[i] = toupper(criminal_name[i]);
            }
            myarray.Delete_record(criminal_name);

            break;
        }

        case 6:
        {

            myarray.Display_offence_murder();

            break;
        }

        case 7:
        {
            myarray.Display_offence_theft();

            break;
        }


        case 8:
        {

            myarray.Display_lastMonth_offence();

            break;
        }


        default:
            cout << " invalid chocie :( " << endl << endl;
        }

        cout << endl;
        cout << " Press 1 to perform again and 0 to exit the program :( -> ";
        cin >> main_choice;
        cout << endl;
    } while (main_choice == true);

    return 0;
}