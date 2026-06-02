#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a;
    int n = 0;
    vector<int> num;

    for(size_t i = 0; i < 5; i++){

        cin >> a;
        num.push_back(a);
    }

    int smallest = num[0];
    int second_small = num[1];
    int largest = num[0];

    for(size_t i = 0; i < 5; i++){

        if(num[i] < smallest){

            second_small = smallest;
            smallest = num[i];
        
        }else if(num[i] > smallest && num[i] < second_small){

            second_small = num[i];
        }
        if (num[i] > largest){

            largest = num[i];
        }

    }


    for(size_t i = 0; i < num.size(); i++){

        
        if(num[i] == largest){

            n++;
        }
    }

    for(size_t i = 0; i < num.size(); i++){

        if(num[i] == num[i+1]){

            num.pop_back(num[i+1]);
        }



    }

      
    
    
    
    
    
    
    
    
    return 0;
}