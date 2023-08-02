
#include <cstdlib>
#include <iostream>

int getval(){
    int num{};
    std::cin >> num;

    return num;
}

char operant(){
    char oper;
    std::cin >> oper;

    return oper;
}

int cpu(int value,char oper,int value1){
    if (oper== '+'){
        return value + value1;
    }
    else if (oper == '-') {
        return value - value1;
    }
    else if (oper == '*'){
        return value * value1;
    }
    else if (oper == '/'){
        return value / value1;
    }
    else {
        return EXIT_FAILURE;
        exit(1);
    }

}

int main()
{

    int value {getval()};

    // std::cout << value<<std::endl; //debug

    char oper {operant()};

    /*std::cout << oper;  */           //debug

    int value1 {getval()};

    int  result{cpu(value , oper , value1)};

    std::cout << result<<std::endl;

    return 0;
}
