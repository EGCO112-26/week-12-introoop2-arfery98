#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
  void set_name(string="Yme");
  void print_name();
  void set_age(int);
  void display();
  int get_age();

};

void student::set_name(string n){
  name=n;
}

int student::get_age(){
  return age;
}

void student::print_name(){
  cout<<"Name: " << name << endl;
}

void student::set_age(int x){
    if(x>80) age = 80;
    else if(x<13) age=13;
    else age=x;
}

void student::display(){
  print_name();
  cout << "Age: "<<age<<endl;
}