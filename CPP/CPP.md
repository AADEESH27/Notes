<!-- images -->

[Compiler]: image.png
[executable]: image-2.png
# CPP

- Statically typed language: type of variable determined at compile time(conversion of high level code into low level code).

```cpp
#incluce <iostream>

int add(int a, int b){
   return (a + b);
}

class Calculator{
   public:
       int multiply(int a, int b){
           return (a*b);
       }
};

int main(){
   Calculator c;
   int product = c.multiply(4, 5);
   std::cout<<product<<endl;
   return 0;
}
```

## Why CPP?

- Performance
- Portability
- OOP

## Binary system

- converting from possitive to negative:
  - Convert to possitive binary representation
  - Get 1's compliment
  - Get 2's compliment

## Bitwise Operator

- basic and, or, xor
- not ~: inverts every bit (changes 0-1, 1-0)

## Compiler

- converts source code(human readable) to machine code(object code)

![alt text][Compiler]

- Compile time error:
  Eg: We didn’t provide the compiler with anything to explain what std::cout was, so the compiler complains.

```cpp
int main()
{
       std::cout << "Hello, World!\n";
       return 0;
}
```
![alt text][executable]