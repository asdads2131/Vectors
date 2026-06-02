#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, even;
    double avg;
    int sum = 0;
    vector<int> num;

    // The inserts of numbers
    for(int i = 0; i < 10; i++){

        cin >> n;
        num.push_back(n);
    }
    // The sum of all numbers
    for(int i = 0; i < 10; i++){

        sum += num[i];
    }
    // The output of numbers
    for(int x : num){

        cout << x <<endl;

    }

    //The largest number
    int largest = num[0];

    for(int i=0; i < num.size(); i++){

        if(largest < num[i]){

            largest = num[i];
        }
    }

    // The average
    avg = sum / num.size();

    // The Even numbers
    cout << "Even numbers are: " << endl;
    for(int i = 0; i < num.size() ; i++){

         if(num[i] % 2 == 0){
            cout << num[i] << " ";

         }
    }

    cout << endl;
    cout << "The sum is : " << sum << endl;
    cout << "The largest number is : " << largest << endl;
    cout << "The average is : " << avg << endl;
    cout << "Numbers in revese : " << endl;

    //Numbers in revese
    for(int i = num.size() - 1; i >= 0; i--){

        cout << num[i] << " ";
    }

    
    
    
    return 0;
}