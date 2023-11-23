#include<iostream>
#include <tuple>

int main(){

    std::pair<int,std::string> pa;
    std::pair<int,std::string> pai(1,"aa");

    std::tuple<int,std::string> tup(1,"aa");

    bool b = (pa == pai);
    int n =1;
    int bb =3;

    auto tu = std::tuple_cat(std::make_tuple(bb,"aa"),std::tie(n));
    std::get<2>(tu) = 2;
    std::get<0>(tu) = 4;
    std::cout<<std::get<2>(tu)<<std::endl;
    std::cout<<n<<std::endl;
    std::cout<<std::get<0>(tu)<<std::endl;
    std::cout<<bb<<std::endl;

    // std::pair<int,std::tuple<int,std::string>> pairt(1,tu);

    // std::cout<<tu<<std::endl;

    return 0;
}