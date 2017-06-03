#include <iostream>

using namespace std;

int main()
{
    cout << "Hello HUY!" << endl;
    int the_first_age,a;
    the_first_age=a;
    int the_second_age,b;
    the_second_age=b;
    cout <<"Please enter the first user' age\n";
    cin  >>a;
    cout <<"Please enter the second user' age\n";
    cin  >>b;
    if((a>0 && a<=100) && (b>0 && b<=100)){
        if(a>b){
            cout <<"The first user is older";
        }
        else if(a==b){
            cout <<"The both is the same age";
        }
        else
            cout <<"The second user is older";
        //(a>b)?(cout<<"The first user is older"):(cout<<"The second user is older");
    }else
        cout <<"Error condition (The both are over 100)";

    return 0;
}
