#include<cstring>
#include<string>
using std::string;
enum prio {
    VERYLOW,
    LOW,
    MEDIUM,
    HIGH,
    VERYHIGH,
    NUMB
};
struct Token
{
  string data;
  prio priority; //numb:numb , least:(),middle:+ - , high:*/ ,over_high:^
};