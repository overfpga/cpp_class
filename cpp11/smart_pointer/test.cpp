#include<iostream>
#include<memory>
#include<ratio>


int main(){

    std::shared_ptr<std::string> ptr(new std::string("ptr"));
    // std::shared_ptr<std::string> ptr1 = new std::string("ptr");


    // int a =1 ;
    // int b =2;
    // std::swap(a,b);
    // std::cout<<"a="<<a<<" b="<<b<<std::endl;

    std::ratio<1,3> ra;
    // std::cout<<std::ratio<1,3><<std::endl;

    return 0;
}
