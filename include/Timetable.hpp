#ifndef TTABLE
#define TTABLE

#include <vector>
#include <iostream>

#include "Time.hpp"
#include "Vertex.hpp"

template <typename T>
class Timetable {
public:
    Timetable() {
        insertTime(0, "Segunda", "8h");
        insertTime(0, "Segunda", "10h");
        insertTime(0, "Segunda", "14h");
        insertTime(0, "Segunda", "16h");

        insertTime(1, "Terça", "8h");
        insertTime(1, "Terça", "10h");
        insertTime(1, "Terça", "14h");
        insertTime(1, "Terça", "16h");

        insertTime(2, "Quarta", "8h");
        insertTime(2, "Quarta", "10h");
        insertTime(2, "Quarta", "14h");
        insertTime(2, "Quarta", "16h");

        insertTime(3, "Quinta", "8h");
        insertTime(3, "Quinta", "10h");
        insertTime(3, "Quinta", "14h");
        insertTime(3, "Quinta", "16h");

        insertTime(4, "Sexta", "8h");
        insertTime(4, "Sexta", "10h");
        insertTime(4, "Sexta", "14h");
        insertTime(4, "Sexta", "16h");
    }

    void arrange_all_semesters(std::vector< Vertex<T> > all_courses) {
        std::vector < Vertex <T> > semester_courses;
        for (int indx = 0; indx < 9; ++indx) {
            semester_courses.clear();
            for (Vertex<T> course : all_courses) {
                if (course.extra_info == indx + 1) {
                    semester_courses.push_back(course);
                }
            }
            arrange(semester_courses);
            std::cout << "______________________________" << std::endl;
            std::cout << "Semestre " << indx + 1 << std::endl << std::endl;
            print();
        }
    }

    void insertTime(int id, std::string day, std::string hour) {
        Time time = Time(id, day, hour);
        schedule.push_back(time);
    }

    void arrange(std::vector< Vertex<T> > courses) {
        ordered_courses = courses;
        for (Time &time : schedule) {
            time.set_desoccupied();
        }
        for (int indx = 0; indx < ordered_courses.size(); ++indx) {
            if (ordered_courses.at(indx).weight == 4) {
                std::vector<int> to_try = {4, 5, 0, 1, 2, 3, 6, 7};
                for (int time_indx : to_try) {
                    if (!schedule.at(time_indx).occupied &&
                        !schedule.at(time_indx + 8).occupied) {
                        schedule.at(time_indx).set_occupied(indx);
                        schedule.at(time_indx + 8).set_occupied(indx);
                        break;
                    }
                }
            } else if (ordered_courses.at(indx).weight == 6) {
                std::vector<int> to_try = {0, 1, 2, 3};
                for (int time_indx : to_try) {
                    if (!schedule.at(time_indx).occupied &&
                        !schedule.at(time_indx + 8).occupied &&
                        !schedule.at(time_indx + 16).occupied
                       ) {
                        schedule.at(time_indx).set_occupied(indx);
                        schedule.at(time_indx + 8).set_occupied(indx);
                        schedule.at(time_indx + 16).set_occupied(indx);
                        break;
                    }
                }

            } else {
                std::vector<int> to_try = {16, 17, 0, 1, 4, 5, 2, 6, 11};
                for (int time_indx : to_try) {
                    if (!schedule.at(time_indx).occupied) {
                        schedule.at(time_indx).set_occupied(indx);
                        break;
                    }
                }
            }
        }
    }

    void print() {
        for (Time time : schedule) {
            std::cout << time.day << " " << time.hour << " | ";
            if (time.occupied && time.course != -1) {
                std::cout << ordered_courses.at(time.course).get_id();
            } else {
                std::cout << "-";
            }
            std::cout << std::endl;
        }
    }

private:
    std::vector <Time> schedule;
    std::vector < Vertex <T> > ordered_courses;
};

#endif
