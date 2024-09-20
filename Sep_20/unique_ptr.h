#pragma once

template<typename T>

class Unique_ptr {
public:
    explicit Unique_ptr(T* ptr) : ptr_{ptr} {}

    ~Unique_ptr() {
        if (ptr_ != nullptr) {
            delete ptr_;
        }
    }

    Unique_ptr(Unique_ptr&& obj) {
        ptr_ = obj.ptr_;
       // delete obj.ptr_;
        obj.ptr_ = nullptr;
    }

    Unique_ptr& operator=(Unique_ptr&& obj) {
        if (this == &obj) {
            return *this;
        }
        delete ptr_;
        ptr_ = obj.ptr_;
        obj.ptr_ = nullptr;
        return *this;   
    }

    Unique_ptr(const Unique_ptr&) = delete;
    Unique_ptr& operator=(const Unique_ptr&) = delete;

    T& operator*() const {
        return *ptr_;
    }

    T* operator->() const {
        return ptr_;
    }

    void reset(T* p = nullptr) {
        if (ptr_ != p) {
            delete ptr_;
            ptr_ = p;
        }
    }

    T* get() const {
        return ptr_;
    }

    T* release() {
        T* tmp = ptr_;
        ptr_ = nullptr;
        return tmp;
    }
    
private:
    T* ptr_;
};