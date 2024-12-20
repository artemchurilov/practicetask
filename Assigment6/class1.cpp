/* Artem Churilov st130184@student.spbu.ru
   6 task "Templates"
*/

#include <iostream>
#include "class1.h"

bool Class1::bar(int number, std::vector<float>& vec) {
  return number > 0;
};


int Class1::c_1_1() {
   return 82; 
};


float Class1::c_1_2() {
        return 130.184f;
    };


void Class1::c_1_3() {

        std::cout << "Class1: st130184@student.spbu.ru"<<std::endl;
    };
