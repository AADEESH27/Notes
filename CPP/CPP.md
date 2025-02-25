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
- Runtime Error: Logical errors

```cpp
int main()
{
       std::cout << "Hello, World!\n";
       return 0;
}
```

![alt text][executable]

## How std:cout actually works

- COUT (Output Buffering)
How it works:
1. cout is buffered, meaning it doesn't immediately print to the console; instead, it stores output in an internal buffer.
2. The data is written to the console only when:
   1. The buffer is full.
   2. A newline character (\n) is encountered.
3. The stream is explicitly flushed (e.g., using std::flush or std::endl).
4. The program ends, triggering an automatic flush.
This buffering helps improve performance by reducing the number of system calls to the console.

## endl vs \n

- Using std::endl is often inefficient, as it actually does two jobs: it outputs a newline (moving the cursor to the next line of the console), and it flushes the buffer (which is slow). If we output multiple lines of text ending with std::endl, we will get multiple flushes, which is slow and probably unnecessary.

## cin buffer
```cpp
#include <iostream>

int main() {
    int a {};
    char b {};
    char c{};
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << b + c << "\n";
    return 0;
}

Input: 
d 5 6
as char d is not a valid input for int a the input extraction fails and 0 is stored in the value of a but b and c takes up the asci values of 5 and 6;
```