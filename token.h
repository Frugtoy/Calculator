#include<cstring>
#include<string>
using std::string;
enum prio {
    VERYLOW = 0,//(
    LOW = 1,//+ -
    MEDIUM = 2,// * /
    HIGH  = 3,// ^
    VERYHIGH = 4,// )
    NUMB = 5
};
struct Token
{
  string data;
  prio priority; //numb:numb , least:(),middle:+ - , high:*/ ,over_high:^
};