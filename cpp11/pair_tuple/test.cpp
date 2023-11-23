#include<iostream>
#include <tuple>

int main(){

    std::pair<int,std::string> pa;
    std::pair<int,std::string> pai(1,"aa");

    std::tuple<int,std::string> tup(1,"aa");

    bool b = (pa == pai);


    return 0;
}