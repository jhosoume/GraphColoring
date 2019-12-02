#ifndef TIME
#define TIME

#include <string>

class Time {
public:
    Time();
    Time(int id, std::string day, std::string hour);
    void set_occupied(int);
    void set_desoccupied();

    int id;
    std::string day, hour;
    bool occupied = false;
    int course = -1;
};


#endif
