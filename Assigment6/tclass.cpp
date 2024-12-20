#include <iostream>
#include <vector>

template<typename T>
class MyTemplateClass {
public:
    MyTemplateClass(T newobj, int num, std::vector<float> vec) 
        : obj(newobj), num(number), vec(vec) {}
    bool foo() {
        return obj.bar(number, vec);
    }
private:
    T obj;
    int number; 
    std::vector<float> vec;
};

template<>
class MyTemplateClass<int> {
public:
    MyTemplateClass(Class1 obj) : obj(newobj) {}
    bool foo() {
        return true;
    }

private:
    Class1 obj; 
};

template<>
class MyTemplateClass<double> {
public:
    MyTemplateClass(Class1 obj) : obj(newobj) {}

    bool foo() {
        return false;
    }

private:
    Class1 obj;
};
