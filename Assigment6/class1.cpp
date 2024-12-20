#include <iostream>
#include <vector>

class Class1 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return number > 0;
    }

    int c_1_1() {
        return 82; 
        }

    float c_1_2() {
        return 130.184f;
    }

    void c_1_3() {
        std::cout << "Class1: st130184@student.spbu.ru"<<std::endl;
    }
};
