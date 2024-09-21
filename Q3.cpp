/*
Q3Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
member functions to accept and display Student information also display count of students. (Use Static
data member and Static member function)
*/
#include<iostream>
using namespace std;

class Student
{
    private:
	string name;
	int roll_no,class_;
	static int count;
	
	public:
		
		void set(int no,string name_,int cls)
		{
			name=name_;
			roll_no=no;
			class_=cls;
			count++;
		}
		
		void display()
		{
			cout<<"\n"<<"\nRoll No: "<<roll_no;
			cout<<"\nName: "<<name;
			cout<<"\nClass: "<<class_;
			cout<<"\nTotal Student: "<<count;
			
		}
		
};
int Student::count=0;

int main()
{
	Student s1,s2,s3;
	s1.set(1,"Shweta",12);
	s1.display();
	s2.set(2,"Ankita",12);
	s2.display();
	s3.set(3,"Shruti",12);
	s3.display();
	
}