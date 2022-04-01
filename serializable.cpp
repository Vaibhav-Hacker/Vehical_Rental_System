#include <string>
using namespace std;

class Serializable {
    public:
    
        virtual string toString() const = 0;
};