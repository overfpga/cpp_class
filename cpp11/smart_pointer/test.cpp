#include<iostream>
#include<memory>


int main(){

    std::shared_ptr<std::string> ptr(new std::string("ptr"));
    std::shared_ptr<std::string> ptr1 = new std::string("ptr");


    return 0;
}