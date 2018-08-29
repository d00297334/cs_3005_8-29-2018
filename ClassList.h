#include <vector> //closest thing to a list
#include <string>
class ClassList {

public:
    ClassList(); //constructor, should be the same name as the class
    void addName(std::string name);
    std::string getNextName();

private:    
    std::vector <std::string> mNames;
    unsigned int mPosition;
};