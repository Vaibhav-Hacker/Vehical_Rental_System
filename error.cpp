#ifndef error_cpp
#define error_cpp

#include <string>

using namespace std;

class Error {
    private:
        string message;

    public:
        Error(string message) { this -> message = message; };
        string getMessage() const { return this -> message; };
};

class NoSuchRecordError : public Error {
    public:
        NoSuchRecordError() : Error("No such record found") {};
};

class IOError : public Error {
    public:
        IOError() : Error("I/O Error could not open or process file make sure 'vehicles.txt', 'trips.txt' and 'users.txt' file exists in this directory") {};
};

class MemoryError : public Error {
    public:
        MemoryError() : Error("System out of memory") {};
};

#endif