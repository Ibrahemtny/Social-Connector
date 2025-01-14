// coworker.h
#ifndef COWORKER_H
#define COWORKER_H

#include <string>
#include <vector>

class Coworker {
public:
    std::string name;
    std::vector<std::string> items;
    bool isAvailable;

    Coworker(const std::string& n, const std::vector<std::string>& i, bool a)
        : name(n), items(i), isAvailable(a) {}

    bool hasItem(const std::string& item) const;
};

#endif // COWORKER_H
