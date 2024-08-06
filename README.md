# 42Cpp01
Memory allocation, pointers to members, references, switch statement in C++.

## Key Learnings
In C++, member variables are initialized in the order they are declared in the class definition, not in the order they appear in the initializer list.

Use of filename.c_str() to convert std::string into char *.

Distinction between declaration and usage within the class scope:
```c++
//use of Harl:: prefix
Harl::Harl() {
    std::cout << "Harl created" << std::endl;
    void (Harl::*debugPtr)(void) = &Harl::debug;
    void (Harl::*infoPtr)(void) = &Harl::info;
    void (Harl::*warningPtr)(void) = &Harl::warning;
    void (Harl::*errorPtr)(void) = &Harl::error;
}

//no use of Harl:: prefix
void    Harl::complain( std::string level ) {
    if (level == "DEBUG")
        debugPtr();
}
```
