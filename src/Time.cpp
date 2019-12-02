#include "Time.hpp"

Time::Time()
    : id{-1}
    { }

Time::Time(int id, std::string day, std::string hour)
    : id{id}, day{day}, hour{hour}
    { }

void Time::set_occupied(int course_id) {
    occupied = true;
    course = course_id;
}

void Time::set_desoccupied() {
    occupied = false;
    course = -1;
}
