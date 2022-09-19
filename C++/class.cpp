#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    int age;
    string f_name;
    string l_name;
    int standar;
    
    // method
    void set_age(int inputAge){
        Student::age = inputAge;
    }
    
    void set_standard(int inputStd){
        Student::standar = inputStd;
    }  
    
    void set_first_name(string inputFname){
        Student::f_name = inputFname;
    }
    
    void set_last_name(string inputLname){
        Student::l_name = inputLname;
    }
    
    int get_age(){
        return Student::age;
    }
    
    string get_last_name(){
        return Student::l_name;
    }
    
    int get_standard(){
        return Student::standar;
    }
    
    string get_first_name(){
        return Student::f_name;
    }
    
    string to_string(){
        stringstream ss1, ss2;
        string strAge;
        string strStd;
        ss1 << age;
        ss1 >> strAge;
        ss2 << standar;
        ss2 >> strStd;

        return (strAge + "," + f_name + "," + l_name + "," + strStd);
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
