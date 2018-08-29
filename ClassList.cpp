#include "ClassList.h"

ClassList::ClassList() 
    : mNames(0), mPosition(0) {
    
}

void ClassList::addName(std::string name) {
    mNames.push_back(name);
}

std::string ClassList::getNextName() {
    std::string next_name = mNames[mPosition];
    mPosition++;
    if (mPosition >= mNames.size() ) {
        mPosition = 0;
    }
    return next_name;
}