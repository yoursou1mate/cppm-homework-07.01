//
//  main.cpp
//  cppm-homework-07.01
//
//  Created by a1ex on 11/24/23.
//

#include <iostream>

#define MODE 3


class Math
{
private:
    int x;
    int y;
public:
    Math (int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    
    int add (int x, int y)
    {
        int sum = x+y;
        return sum;
    }
};



int main(int argc, const char * argv[]) {
    
#ifndef MODE
#error Please define MODE
#endif
    
#if MODE == 0
    std::cout << "Working in trainig mode =/" << std::endl;
#endif
    
#if MODE == 1
    std::cout << "Working in full mode =)" << std::endl;
    int x; int y;
    std::cout << "Please enter first number: ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Please enter second number: ";
    std::cin >> y;
    std::cout << std::endl;
    Math m(x,y);
    std::cout << "Your result is: " << m.add(x,y) << std::endl;
    
#endif
    
#if MODE != 1 && MODE != 0
    std::cout << "Unknown mode. Shutdown =(" << std::endl;
#endif
    
        
    
   
    return 0;
}
