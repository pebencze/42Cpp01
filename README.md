# 42Cpp01
Memory allocation, pointers to members, references, switch statement in C++.

## Key Learnings
In C++, member variables are initialized in the order they are declared in the class definition, not in the order they appear in the initializer list.

### Dynamic Memory Allocation
Using pointers and the **new** and **delete** keywords to allocate objects on the heap and use them across functions. The syntax to allocate a list of objects is a bit special. When using new, the constructor is automatically called. Accordingly, the destructor gets called with the delete keyword. 

```c++
Zombie* Zombie::newZombie( std::string name ) {
    Zombie* newZ = new Zombie(); //constructor called
    newZ->setName(name);
    return newZ;
}

int main() {
    Zombie* z = Zombie::newZombie("Newbie");
    z->announce();
    delete z; //destructor called
}

Zombie* zlist = new Zombie[5];
delete [] zlist;
```

### Reference vs. Pointer
A reference is an alias for an existing variable; mor precisely: a pointer that is constant and always unreferenced and never void. It is not possible to create an uninitialized reference int& Reference you always have to assign it to somehting like: int& Reference = variable. Changing the value it is pointing to is easy: Reference = newValue;
- advantage of reference: controlled access, easier syntax, constant -> always exists, never changes
- advantage of pointers: value that it points to can change over time and does not have to be initialized from the beginning -> not always exists, changes

```c++
std::string var = "HI THIS IS BRAIN";
std::string* stringPTR;
stringPTR = &var;
std::string& stringREF = var;
```

### Function pointers:
```c++
void (Harl::*funcPtr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
```

### Filestreams
In C++, files are mainly dealt by using the classes fstream, ifstream, ofstream available in the <fstream> headerfile.
```c++
std::ofstream ofs("filename")
ofs << src
ofs.close()

std::ifstream ofs("filename")
ofs << src
ifs.close()
```
Use of filename.c_str() to convert std::string into char *.

### Switch statements
```c++
    switch (i) {
        case (DEBUG):
            this->_debug();
        case (INFO):
            this->_info();
        case (WARNING):
            this->_warning();
        case (ERROR):
            this->_error();
            break;
        default:
            std::cout << std::endl << "[ Probably complaining about insignificant problems. ]" << std::endl;
            break;
    }
```


