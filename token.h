#include<cstring>
#include<string>
using std::string;
enum prio {
    VERYLOW = 0,
    LOW,
    MEDIUM,
    HIGH,
    VERYHIGH

};
struct Token
{
  string data;
  prio priority; //numb:numb , least:(),middle:+ - , high:*/ ,over_high:^
};