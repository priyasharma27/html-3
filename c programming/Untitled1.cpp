#include<iostream>
 using namespace std;
 struct student{
 	string name;
 	double gpa;
 	bool enrolled;
 };
int main()
{
	student s1;
	s1.name = "priya";
	s1.gpa = 3.4;
	s1.enrolled = true;
	cout<<s1.name<<endl;
	cout<<s1.gpa<<endl;
	cout<<s1.enrolled<<endl;
		student s2;
	s2.name = "prayas";
	s2.gpa = 3.3;
	s2.enrolled = true;
	cout<<s2.name<<endl;
	cout<<s2.gpa<<endl;
	cout<<s2.enrolled<<endl;
	return 0;
}

