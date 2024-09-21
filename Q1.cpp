#include <iostream>
#include <fstream>

using namespace std;

class Student 
{
	public:
    int id;
    string name;
    
    void addRecord() 
	{
        ofstream file("DBMS.txt", ios::app);
        cout << "Enter ID and Name: ";
        cin >> id >> name;
        file << id << " " << name << endl;
        file.close();
    }
  
      void listRecords()
	   {
        ifstream file("DBMS.txt");
        while (file >> id >> name) {
            cout << id << " " << name << endl;
        }
        file.close();
    }

};

int main()
 {
    Student student;
    int choice, id;

    while (true)
	 {
        cout << "\n1. Add Record\n2. List Records\n3. Modify Record\n4. Delete Record\n5. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: 
			student.addRecord(); break;
			
            case 2:
			student.listRecords(); break;
			
            case 3: 
                cout << "Enter ID to modify: "; 
                cin >> id;
                break;
                
            case 4: 
                cout << "Enter ID to delete: "; 
                cin >> id;
                break;
                
            case 5: 
			return 0;
			
            default: 
			cout << "Invalid choice, try again.\n";
        }
    }
}