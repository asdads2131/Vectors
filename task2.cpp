#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> num;
    

    for(size_t i =0; i < 10; i++ ){

        cin >> n;
        num.push_back(n);
    }


    int largest = num[0];
    int second = num[0];

    for(size_t i = 0; i < 10; i++){

        if(num[i] > largest){

            second = largest;
            largest = num[i];
        }
        else if(largest > num[i] && num[i] > second){

            second = num[i];
        }
    }
    cout << largest << " " << second << endl;
    
    
    

    
    
    
    return 0;
}