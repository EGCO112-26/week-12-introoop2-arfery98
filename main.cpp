/* #include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

  //s1.set_name("Amy"); s1.set_age(20);
  //s2.set_name("James");
  //s2.set_age(17); 
  if (s1.get_age() > s2.get_age()) {
        s1.print_name(); 
        cout << "is older" << endl;
    } else {
        s2.print_name(); 
        cout << "is older" << endl;
    }

  //int N=(argc-1)/2;

  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    cout<<"student "<<i<<endl;
    cout<<"name:";
    cin>>n;
    a[i].set_name(n);
    cout << "age: ";
    cin >> age;
    a[i].set_age(age);
  }
  

  //2. Print name and age of all N ppl
  cout << "\nstudents" << endl;
    for(i = 1; i < N; i++) {
        a[i].print_name();
        cout << "Age: " << a[i].get_age() << endl;
    }
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  // Print all info for the yougest person
  int min_age = a[0].get_age(); 
    int youngest = 0;

    for(i = 1; i < N; i++) {
        if (a[i].get_age() < min_age) {
            min_age = a[i].get_age();
            youngest = i;
        }
    }

    cout << "\nThe Youngest Person" << endl;
    a[youngest].print_name();
    cout << "Age: " << a[youngest].get_age() << endl;

  //4. Change input from cin to argv
    for(int i = 0; i < N; i++){
        if(a[i].get_age() == min_age){
            a[i].print_name();
            cout << "Age: " << a[i].get_age() << endl;
        }
    }
  
  return 0;

    
  } */

#include <iostream>
#include <cstdlib>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {

    int N = (argc - 1) / 2;
    student a[N];

    //4. Change input from cin to argv
    int index = 1;
    for(int i = 0; i < N; i++){
        a[i].set_name(argv[index]);
        a[i].set_age(atoi(argv[index+1]));
        index += 2;
    }

    //2. Print name and age of all N ppl
    cout << "Youngest student" << endl;

    int min_age = a[0].get_age();    //Find what the age of the youngest person
    for(int i = 1; i < N; i++){
        if(a[i].get_age() < min_age){
            min_age = a[i].get_age();
        }
    }

    
    for(int i = 0; i < N; i++){       // Print all info for the yougest person
        if(a[i].get_age() == min_age){
            a[i].print_name();
            cout << "Age: " << a[i].get_age() << endl;
        }
    }



  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  // Print all info for the yougest person
  //4. Change input from cin to argv
    return 0;
}