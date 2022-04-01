#ifndef storable_cpp
#define storable_cpp

#include "serializable.cpp"

#include <iostream>
#include <string>

using namespace std;

class Storable : public Serializable {

    protected:
        long recordId;

    public:

        Storable ( long recordId ) { this -> recordId = recordId; };
        long getRecordId() const { return this -> recordId; };

        virtual void setDataFrom ( Storable * s) = 0;

        template<class T> friend class Table;
        friend class Database;
};
#endif