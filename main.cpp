#include <algorithm>
#include <bits/types/locale_t.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <limits>
#include <type_traits>
#include <cmath>



int getvaluefromuser(){
    std::cout << "enter a integer"<<'\n';
    int num{};
    std::cin >> num;

    return num;

}
void console_print(int x , int y){
    std::cout<<"x : y = "<< x <<":"<< y <<'\n';
}

int main(){

    int x{getvaluefromuser()};
    int y{getvaluefromuser()};
    console_print(x,y);
    struct {
        int a{34};
        int b{};
        int c{};

                
    }struct_1;

    std::cout <<struct_1.a<<std::endl;

}
