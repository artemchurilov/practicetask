/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/

#include <iostream>
#include "class2.h"

class Class2 {
public:
    bool bar(int number, std::vector<float>& vec) {
         return !vec.empty();
    }

    int c_2_1() {
        return 6; 
        }

    float c_2_2() {
        return 20.12f;
    }

    void c_2_3() {
        std::cout << "Class2: Artem Churilov"<<std::endl;
    }
};
