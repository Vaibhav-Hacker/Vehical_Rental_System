#ifndef Date_h
#define Date_h

#include "storable.cpp"

#include <ctime>
#include <string>

using namespace std;

typedef struct Date : Serializable {
    private:
        struct tm date;
        bool empty;
    
    public:
        Date (string date);
        Date ();

        Date operator + (int days);
        bool operator > (Date date) const;
        bool operator >= (Date date) const;
        bool operator < (Date date) const;
        bool operator <= (Date date) const;
        bool isEmpty() const;
        string toString() const;

} Date;

#endif