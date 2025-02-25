#include<iostream>
#include<memory>


int main() {
    std::shared_ptr<int> pointer1(new int(5));
    std::shared_ptr<int> pointer2 = pointer1;
    std::weak_ptr<int> pointer3 = pointer1;

    if(std::shared_ptr<int> pointer4 = pointer3.lock()){
        std::cout << *pointer4 << std::endl;
    }else{
        std::cout<<"No"<<std::endl;
    }

    std::cout << pointer1.use_count() << std::endl;
    std::cout << pointer2.use_count() << std::endl;
    std::cout << pointer3.use_count() << std::endl;
    pointer1.reset();  
    std::cout << pointer1.use_count() << std::endl;
    std::cout << pointer2.use_count() << std::endl;
    std::cout << pointer3.use_count() << std::endl;

    return 0;
}