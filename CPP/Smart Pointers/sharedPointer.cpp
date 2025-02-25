#include<iostream>
#include<memory>

std::shared_ptr<int> getSharedPointer(){
    std::shared_ptr<int> pointer1 = std::make_shared<int>(5);
    return pointer1;
}

int main() {
    std::shared_ptr<int> pointer2 = getSharedPointer();
    std::shared_ptr<int> pointer3 = pointer2;
    std::cout << *pointer2 << std::endl;
    std::cout << *pointer3 << std::endl;
    std::cout << pointer2.use_count() << std::endl;
    std::cout << pointer3.use_count() << std::endl;
    pointer2.reset();
    std::cout << pointer2.use_count() << std::endl;
    std::cout << pointer3.use_count() << std::endl;
    return 0;
}