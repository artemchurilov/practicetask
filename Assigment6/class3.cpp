/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/

#include <iostream>
#include "class3.h"

class Class3 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return number == static_cast<int>(vec.size()) * -1;
    }

    int c_3_1() {
        return 2024; 
        }

    float c_3_2() {
        return 20.25f;
    }

    void c_3_3() {
        std::cout << "6 task || Templates"<<std::endl;
    }
};
