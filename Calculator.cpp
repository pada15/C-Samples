#include <iostream>

using std::cout;
using namespace std;

class functions{
public:
    void Body(){
        cout << " CALCULATOR " << endl;   
    }               
    int Addition(int x, int y){
        int ans = x + y;
        return ans;
    }       
    int Subtraction(int x, int y){
        int ans = x - y;
        return ans;
    }       
    int Multiplication(int x, int y){
        int ans = x * y;
        return ans;
    }       
    int Division(int x, int y){
        int ans = x / y;
        return ans;
    }
};

int main(){
int func;
int x, y;

functions key; //Object
key.Body(); //Object

cout << "What function do you want to use? " << endl;
cout << "1. Addition " << endl;
cout << "2. Subtraction " << endl;
cout << "3. Multiplication " << endl;
cout << "4. Division " << endl;
cout << "Select your choice: " << endl;

cin >> func;
cout << endl;

switch(func){

    case 1: //It's Addition
        cout << "You Choose Addition" << endl;
        cout << "Please enter your first number: " << endl;
        cin >> x;
        cout << "Please enter your second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = "; 
        cout << key.Addition(x, y)<<endl;
        break;          
    case 2: //It's Subtraction
        cout << "You Choose Subtraction" << endl;  
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Subtraction(x, y)<<endl;
        break;              
    case 3: //It's Multiplication
        cout << "You Choose Multplication" << endl;   
        cout << "Please enter your first number: " << endl;
        cin >> x;
        cout << "Please enter your second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << key.Multiplication(x, y)<<endl;
        break;      
    case 4: //It's Division
        cout << "You Choose Division" << endl; 
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Division(x, y)<<endl;
        break;
    default:
        cout << "No Choice is listed here";
        break;
}

}
