#include<iostream>
#include<memory>

std::unique_ptr<int> getUniquePointer(){
    std::unique_ptr<int> pointer1 = std::make_unique<int>(5);
    return std::move(pointer1);
}

int main() {
    std::unique_ptr<int> u = std::make_unique<int>(9);
    std::unique_ptr<int> pointer2 = getUniquePointer();
    // std::shared_ptr<int> pointer3 = pointer2;
    std::cout<<sizeof(std::vector<int>)<<std::endl;
    std::shared_ptr<int> pointer3 = std::move(pointer2);
    if(pointer2){
        std::cout << *pointer2 << std::endl;
    }
    std::cout << *pointer3 << std::endl;
    std::cout << *u << std::endl;
    return 0;
}