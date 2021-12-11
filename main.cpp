#include <iostream>

using namespace std;
int main() {
    string name1;
    int age1;
    float gpa1;
    char char1;

cout<<"Enter info continue Y or N"<<endl;
cin>>char1;
if(char1 =='Y'){
    cout<<"Enter name: ";
    cin>>name1;
    cout<<"Enter age: ";
    cin>>age1;
    cout<<"Enter GPA: ";
    cin>>gpa1;

    cout<<"Name:"<<name1<<endl;
    cout<<"Age: "<<age1<<endl;
    cout<<"GPA: "<<gpa1<<endl;


}else if (char1=='N'){
    cout<<"Program closed";
}




}
