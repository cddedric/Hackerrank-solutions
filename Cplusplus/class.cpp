/*
https://www.hackerrank.com/challenges/c-tutorial-class/
*/

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

    public:
    void set_age(unsigned new_age){
        age = new_age;
    }
    int get_age(){
        return age;
    }

    void set_first_name(std::string new_first_name){
        first_name=new_first_name;
    }
    std::string get_first_name(){
        return first_name;
    }

    void set_last_name(std::string new_last_name){
        last_name=new_last_name;
    }
    std::string get_last_name(){
        return last_name;
    }

    void set_standard(int new_standard){
        standard=new_standard;
    }
    int get_standard(){
        return standard;
    }

    std::string to_string(){
        std::string to_string_string;
        std::string c = ",";
        to_string_string = std::to_string(age) + c + first_name + c + last_name + c + std::to_string(standard);
        return to_string_string;
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
