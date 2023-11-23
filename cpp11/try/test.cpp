#include <iostream>
#include <vector>
using namespace std;

void tryf(){

    vector<string> vec;
    vec.push_back("aa");

    try {
        string temp1 = vec.at(0);
        string temp2 = vec.at(1);
        cout<<"temp1= "<<temp1<<" temp2= "<<temp2<<endl;
    }catch(const std::exception& e){
        std::cout << "Exception caught: " << e.what() << std::endl;
    }


    return ;
}



// int main(){

//     tryf();
//     cout<<"hello world"<<endl;
    

//     return 0;
// }

void processNumber(int num) {
    try {
        if (num == 0) {
            // throw "Number cannot be zero!";
            throw;
        } else if (num < 0) {
            throw std::runtime_error("Number must be positive!");
        }
        
        std::cout << "Valid number: " << num << std::endl;
    } catch (const char* errorMsg) {
        std::cerr << "Error: " << errorMsg << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught!" << std::endl;
    }
}

int main() {
    int num1 = 10, num2 = 0, num3 = -5;

    processNumber(num1);   // Valid number: 10
    processNumber(num2);   // Error: Number cannot be zero!
    processNumber(num3);   // Exception caught: Number must be positive!

    return 0;
}