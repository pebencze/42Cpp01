# 42Cpp01
Memory allocation, pointers to members, references, switch statement in C++.

## Key Learnings
In C++, member variables are initialized in the order they are declared in the class definition, not in the order they appear in the initializer list.

Use of filename.c_str() to convert std::string into char *.

Function pointers:
```c++
void (Harl::*funcPtr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
```
