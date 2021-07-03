#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;
        
            sum += number;
            cout<<"Enter a number(up to 10 only): ";
            cin>> number;

            for(int count = 1; count<=number; ++count){
                sum+=count;
            }
            cout<<"Sum = "<<sum<<endl;
            
    return 0;
}