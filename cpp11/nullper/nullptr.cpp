#include<iostream>
#include<vector>

using namespace std;


// int main(){

//     int a;
//     std::cout<<a<<std::endl;
//     a = NULL;
//     std::cout<<a<<std::endl;


//     return 0;
// }


/*


void test(int num){
    std::cout<<"helo world"<<num<<std::endl;
    return ;
}

void test(void* v){
    std::cout<<"helo world *"<<std::endl;
    return ;
}

int main(){
    //c++中NULL存在二义性，他既有整数0属性，又能表示指针，所以在参数类型是int或void类型都可以被NULL赋值
    //nullptr在c++只表示空指针
    test(nullptr);
    
    //void*类型不能进行隐士类型转换，可以进行显示类型转换
    void*a;
    int*b=a;

    return 0;
}

*/


int main(){

    int valuse[] {1,2,3};

    int a {};
    int* b{};

    int x1(5.3);
    int x2 = 5.3;
    int x3{5.0};
    int x4 = {5.3};

    std:: cout<<"x1 = "<<x1<<" x2 = "<<x2<<" x3 =  "<<x3<<" x4 = "<<x4<<std::endl;

    vector<int> v1{1,2,3,4.3,5.0};
    for(auto &v : v1){
        cout<<v<<endl;
    }

    return 0;
}