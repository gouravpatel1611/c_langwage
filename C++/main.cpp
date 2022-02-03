#include <iostream>
#include <string>
using namespace std;

// // funcation

// int add(int a ,int b){
//     return a+b;
// }

// // classes
class Employee
{

public:
    string name;
    int sallary;
    void details()
    {
        cout << "The name of first employ " << this->name << " and his salery is " << this->sallary << endl;
    }
    void shPassword(){
        cout<<"The password is "<<this->scPassword<<endl;
    }
    Employee(string n, int s, int sp, string print)
    {
        this->name = n;
        this->sallary = s;
        this->scPassword = sp;
        if (print == "yes")
        {
            this->details();
        }
    }
private:
    int scPassword;
};



int main()
{
    // cout<<"halo mehul";
    // cout<<"halo To all"<<endl;
    // short sa =9;
    // cout<<sa<<endl;

    // int marksInMaths = 73;
    // cout<<"The marks of the studentis " <<marksInMaths<<endl;

    // short a;
    // int b;
    // long c;
    // long long d;
    // float scor = 45.32;
    // double score = 45.2555256;
    // long double ka = 45.464;
    // scor = 25.4;
    // int const k = 5;

    // cout<<"The score is "<<scor<<endl;

    //user input
    // int a,b;
    // cout<<"Enter first number ";
    // cin>>a;
    // cout<<"Enter your 2nd Number ";
    // cin>>b;
    // cout<<"The sum of 2 number is "<<a+b<<endl;
    // cout<<"The div of 2 number is "<<a-b<<endl;
    // cout<<"The multi of 2 number is "<<a*b<<endl;
    // cout<<"The div of 2 number is "<<(float) a/b<<endl;

    // // if and else || && else if

    // int age;
    // cout << "Enter Your age ";
    // cin >> age;
    // if (age > 18)
    // {
    //     cout << "You can Vote" << endl;
    // }
    // else
    // {
    //     cout << "You can't Vote" << endl;
    // }

    // switch (age)
    // {
    // case 10:
    //     cout << "You are 10 year Old" << endl;
    //     break;
    // case 20:
    //     cout << "You are 20 year Old" << endl;
    //     break;

    // default:
    //     cout << "You are not 10 and not 20 year old" << endl;
    //     break;
    // }

    // // Loop
    // int i=0;
    // while (i<34)
    // {
    //     cout<<"number is "<<i<<endl;
    //     i = i+1;
    // }
    // do
    // {
    //     cout<<"index is "<<i<<endl;
    // } while (i>100);
    // for (int k = 0; k < 15; k++)
    // {
    //     cout<<"k is "<<k<<endl;
    // }

    // int c = add(5,8);
    // cout<<"The funcation output is "<<c<<endl;

    // // // arry
    // int arr[34];
    // int aarr[] = {0,5,6};

    // cout<<aarr[1]<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<aarr[i]<<endl;
    // }
    // int arr2D[2][2] = {{2,3},{4,4}};

    // // type castin

    // int a = 50;
    // float f = 98.7;

    // cout<<(float)a<<endl;
    // cout<<(int)f<<endl;

    // // string

    // string name = "gourav patel";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The name  lengt is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(0,3) <<endl;

    // // pointer

    // int a = 34;
    // int *ptr;
    // ptr = &a;

    // cout<<"value of a is "<<*ptr<<endl;
    // cout<<"and pointer of a is "<<ptr<<endl;

    // // // object oriyentedd  programing :-

    //  // // classes aand object

    // // // menwali made
    // Employee gourav;
    // gourav.name = "Gourav pattel";
    // gourav.sallary = 50000;

    // constructur made
    Employee gourav("Gourav ", 20000, 12345, "no");
    gourav.details();
    gourav.shPassword();
    Employee mehul("mehul", 10000, 2546, "yes");


    return 0;
}