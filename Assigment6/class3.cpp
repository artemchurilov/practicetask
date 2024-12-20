/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/

#include <iostream>
#include "class3.h"

bool Class3::bar(int number, std::vector<float>& vec) {
        return number == static_cast<int>(vec.size()) * -1;
};

int Class3::c_3_1() {
        return 2024; 
};

float Class3::c_3_2() {
        return 20.25f;
};

void Class3::c_3_3() {
        std::cout << "Class3: 6 task || Templates"<<std::endl;
};
