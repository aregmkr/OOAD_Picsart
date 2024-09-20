#pragma once
#include <iostream>

template<typename T>

class Auto_ptr {
public:
    explicit Auto_ptr(T* ptr = nullptr) : ptr_{ptr} {}
    
    Auto_ptr(const Auto_ptr& obj) {
        ptr_ = obj.ptr_;
        obj.ptr_ = nullptr;
    }

    Auto_ptr& operator=(Auto_ptr&& obj) {
        if (this == &obj) {
            return *this;
        }
        delete ptr_;
        ptr_ = obj.ptr_;
        obj.ptr_ = nullptr;
        return *this;
    }

    T& operator*() const {
        return *ptr_;
    }

    T* operator->() const {
        return ptr_;
    }

    ~Auto_ptr() {
        std::cout << "DTOR\n";
        delete ptr_;
    }

    T* get() const {
        return ptr_;
    }

    void reset(T* p = nullptr) {
        if (ptr_ != p) {
            delete ptr_;
            ptr_ = p;
        }
    }
private:
    T* ptr_ = nullptr;  
};
