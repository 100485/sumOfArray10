#include <iostream>
using namespace std;

int main(){

    //Declaring and Initializing
    int Nums [10] = {10,20,30,40,50,60,70,80,90,100};
    int Sum = 0;

for (int i = 0; i < 10; i++){
//Formula
Sum = Sum + Nums[i];

   cout << " The sum of the array is:"<< Sum <<endl;
}
    return 0;

}