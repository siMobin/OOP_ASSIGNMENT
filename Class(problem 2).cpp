#include <iostream>
using namespace std;

class Student
{
    int age;
    string first_name,last_name;
    int standard;
public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string fn)
    {
        first_name = fn;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string ln)
    {
        last_name = ln;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        string result;
        result += std::to_string(age) + ",";
        result += first_name + ",";
        result += last_name + ",";
        result += std::to_string(standard);
        return result;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout <<endl<< st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl<<endl;
    cout << st.to_string() << endl;
    return 0;
}
