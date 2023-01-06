#include<iostream>
#include<ctime>
using namespace std;
string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};

int main(){
    srand(time(0));
    int ran = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string result = grade[ran];
    cout << "You will get "<< result <<" in this 261102.";

}

