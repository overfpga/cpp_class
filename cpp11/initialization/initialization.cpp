#include<iostream>
#include<vector>

using namespace std;
/* 
int main(){

    int valuse[] {1,2,3};

    int a {};
    int* b{};
//基本数据类型，用{...}和（...）进行初始化
//基础数据类型或指针用{} 空大括号初始化为 0或空指针（nullptr）
    int x1(5.3);
    int x2 = 5.3;
    int x3{5.0};
    int x4 = {5.3};

    std:: cout<<"x1 = "<<x1<<" x2 = "<<x2<<" x3 =  "<<x3<<" x4 = "<<x4<<std::endl;
    //窄化（也就是精度降低或造成数值变动，高精度类型转换成低精度类型）
    vector<int> v1{1,2,3,4.3,5.0};
    for(auto &v : v1){
        cout<<v<<endl;
    }

    char s1{65};
    cout<<s1<<endl;
    return 0;
}
*/


// void prinum(std::initializer_list<int> numbers){
//     for(auto &v : numbers){
//         std::cout<<v<<std::endl;
//     }
//     const int * num = numbers.begin();
//     std::cout<<*num<<std::endl;
//     std::cout<<*(++num)<<std::endl;
//     std::cout<<numbers.size()<<std::endl;
//     const int * nn = std::begin(numbers);
//     std::cout<<*nn<<std::endl;
//     return ;
// }

void inster(string str){

    std::cout<<str<<std::endl;

    string s = std::move(str);
    std::cout<<str<<std::endl;
}


int main(){

    // prinum({1,2,3,4});
    inster("hhsa");



    return 0;
}
/*
#move语义：
用来避免非必要拷贝和产生临时对象

*/




/*
当元素在for循环中被初始化为decl，不得有任何显式类型转换（explicit type conversion）。因此下面的代码无法通过编译:

class C{
    public:
        explicit C(const std::string& s);
        ...

};

std::vector<std::string> vs; // ERROR, 在for循环初始化的表达式，不能进行显示类型转换
for(const C& elem : vs){
    std::cout<<elem<<std::endl;
}


C++中的for循环语法不支持在循环头部进行类型转换。在for循环的初始化表达式、条件表达式和迭代器表达式中，只能使用已声明的变量或已定义的对象，而不允许进行类型转换。

如果需要在循环体内进行类型转换，可以使用强制类型转换（即C-style cast或static_cast、dynamic_cast等），或者使用其他方式来实现所需的类型转换操作。

*/

/*
#explicit
在C++中，explicit是一个关键字，用于声明单参数构造函数或转换函数。它的作用是禁止隐式类型转换，只允许显式调用。当使用explicit修饰构造函数时，编译器将不会自动执行隐式的构造操作。这对于避免意外的类型转换和提高代码的可读性非常有用。

以下是一个使用 explicit 的示例：

cpp
class MyClass {
public:
    explicit MyClass(int x) : value(x) {}
    
private:
    int value;
};

void func(MyClass obj) {
    // some code here
}

int main() {
    MyClass obj1(10);     // 直接初始化
    MyClass obj2 = 20;   // 编译错误，禁止隐式转换
    
    func(obj1);          // 正常调用
    func(30);            // 编译错误，禁止隐式转换

    return 0;
}
在上面的示例中，由于构造函数被声明为 explicit，所以禁止了直接将整数隐式地转换为 MyClass 对象。只有通过显式调用构造函数才能创建对象。
*/


/*
#constexpr
在C++中，constexpr是用于声明一个常量表达式的关键字。常量表达式是在编译时就可以计算出结果的表达式。

使用constexpr修饰变量或函数可以使其成为常量表达式，从而在编译时进行求值，并且可以在其他需要常量表达式的地方使用。

示例代码：

cpp
constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr int num1 = 5; // 常量表达式
    const int num2 = add(3, 4); // 编译时调用常量表达式函数

    constexpr int result = num1 + num2; // 常量表达式计算

    return 0;
}
请注意，对于一个constexpr函数，在其参数被编译器认定为常量时会以常量方式求值，在其他情况下则会按照普通函数方式运行。此外，constexpr变量必须在编译时初始化，并且其初始化值必须能够在编译期间确定。

这样做有助于提高程序性能和优化，因为它允许编译器进行更多的静态分析和优化操作。

*/

/*
#noexcept
在C++中，noexcept是一个关键字，用于指示一个函数是否可能抛出异常。当使用 noexcept 关键字声明一个函数时，它表示该函数不会抛出任何异常。

例如：

cpp
void func() noexcept {
    // 函数体
}
使用 noexcept 有以下几个作用：

提供了一种方法来明确表达函数不会抛出异常的意图，使代码更具可读性。
编译器可以基于 noexcept 来进行优化，提高代码的执行效率。
在某些情况下，编译器可能会针对 noexcept 的保证进行静态分析和检查。
需要注意的是，在一个带有 noexcept 声明的函数内部调用了可能会抛出异常的函数，并且没有进行适当的处理或者在合适的地方捕获异常时，程序将会终止运行。因此，在使用 noexcept 时需要仔细考虑异常处理策略。
*/
// namespace std
// {
//   /// initializer_list
//   //initializer_list只有一个模板参数，initializer_list接收多个参数时，所有参数必须是相同的数据类型，
//   /*
//     缺点：
//         1.不支持动态大小调整：一旦使用了initializer_list初始化一个对象，其大小将被确定，并且不能再进行动态大小调整。
//         2.只能进行简单赋值初始化：initializer_list只能用于简单地赋值初始化对象，而不能进行更复杂的构造过程。
//         3.存在潜在性能开销：当传递大量数据时，由于每个元素都需要复制到内存中，可能会引起额外的内存拷贝开销。
    
//     initializer_list的成员函数：
//         size()：参数列表中参数个数
//         begin()：参数列表第一个参数的const _E* 指针
//         end(): 参数列表尾指针，为null
//         initializer_list的构造函数被编译器调用
//   */
//   template<class _E>
//     class initializer_list
//     {
//     public:
//       typedef _E 		value_type;
//       typedef const _E& 	reference;
//       typedef const _E& 	const_reference;
//       typedef size_t 		size_type;
//       typedef const _E* 	iterator;
//       typedef const _E* 	const_iterator;

//     private:
//       iterator			_M_array;
//       size_type			_M_len;

//       // The compiler can call a private constructor.
//       //编译器可以调用私有构造函数。
//       constexpr initializer_list(const_iterator __a, size_type __l)
//       : _M_array(__a), _M_len(__l) { }

//     public:
//       constexpr initializer_list() noexcept
//       : _M_array(0), _M_len(0) { }

//       // Number of elements.
//       constexpr size_type
//       size() const noexcept { return _M_len; }

//       // First element.
//       constexpr const_iterator
//       begin() const noexcept { return _M_array; }

//       // One past the last element.
//       constexpr const_iterator
//       end() const noexcept { return begin() + size(); }
//     };

//   /**
//    *  @brief  Return an iterator pointing to the first element of
//    *          the initilizer_list.
//    *  @param  __ils  Initializer list.
//    */
//   template<class _Tp>
//     constexpr const _Tp*
//     begin(initializer_list<_Tp> __ils) noexcept
//     { return __ils.begin(); }

//   /**
//    *  @brief  Return an iterator pointing to one past the last element
//    *          of the initilizer_list.
//    *  @param  __ils  Initializer list.
//    */
//   template<class _Tp>
//     constexpr const _Tp*
//     end(initializer_list<_Tp> __ils) noexcept
//     { return __ils.end(); }
// }

// #pragma GCC visibility pop

// #endif // C++11

// #endif // _INITIALIZER_LIST


/*

#pragma  message("消息文本")  
    当编译器遇到这条指令时就在编译输出窗口中将消息文本打印出来。  


另一个使用得比较多的pragma参数是code_seg

    格式如：  
    #pragma  code_seg( ["section-name" [, "section-class"] ] )  
    它能够设置程序中函数代码存放的代码段，当我们开发驱动程序的时候就会使用到它。  

#pragma once  (比较常用) 

    只要在头文件的最开始加入这条指令就能够保证头文件被编译一次，这条指令实际上在VC6中就已经有了，
但是考虑到兼容性并没有太多的使用它。 

(4)#pragma  hdrstop

    表示预编译头文件到此为止，后面的头文件不进行预编译。BCB可以预编译头文件以加快链接的速度，
但如果所有头文件都进行预编译又可能占太多磁盘空间，所以使用这个选项排除一些头文件。    
    有时单元之间有依赖关系，比如单元A依赖单元B，所以单元B要先于单元A编译。
你可以用#pragma  startup指定编译优先级，如果使用了#pragma  package(smart_init)，
BCB就会根据优先级的大小先后编译。 

#pragma  resource  "*.dfm"

    表示把*.dfm文件中的资源加入工程。*.dfm中包括窗体  
外观的定义。 

(6)#pragma  warning( disable: 4507 34; once: 4385; error: 164 )
  
    等价于：  
    #pragma  warning( disable: 4507 34 )    //  不显示4507和34号警告信息  
    #pragma  warning( once: 4385 )          //  4385号警告信息仅报告一次  
    #pragma  warning( error: 164 )          //  把164号警告信息作为一个错误。 

    同时这个pragma  warning  也支持如下格式：  
    #pragma  warning( push [, n ] )  
    #pragma  warning( pop )  
    这里n代表一个警告等级(1---4)。  
    #pragma  warning( push )保存所有警告信息的现有的警告状态。  
    #pragma  warning( push, n )保存所有警告信息的现有的警告状态，并且把全局警告等级设定为n。    
    #pragma  warning( pop )向栈中弹出最后一个警告信息，在入栈和出栈之间所作的一切改动取消。例如：  
    #pragma  warning( push )  
    #pragma  warning( disable: 4705 )  
    #pragma  warning( disable: 4706 )  
    #pragma  warning( disable: 4707 )  
    //.......  
    #pragma  warning(  pop  )    
    在这段代码的最后，重新保存所有的警告信息(包括4705，4706和4707)。 


(1) #pragma  pack( [ n ] )

    该指令指定结构和联合成员的紧凑对齐。而一个完整的转换单元的结构和联合的紧凑对齐由/Zp 选项设置。
紧凑对齐用pack编译指示在数据说明层设置。该编译指示在其出现后的第一个结构或联合说明处生效。
该编译指示对定义无效。
    当你使用#pragma  pack ( n ) 时, 这里n 为1、2、4、8 或16。
    第一个结构成员之后的每个结构成员都被存储在更小的成员类型或n 字节界限内。
如果你使用无参量的#pragma  pack, 结构成员被紧凑为以/Zp 指定的值。该缺省/Zp 紧凑值为/Zp8 。




https://www.cnblogs.com/fnlingnzb-learner/p/5854494.html



*/