#pragma once

#include "line.hpp"

class LineSegment : public Line {
public:
    using Line::Line;

    ~LineSegment() = default;

    std::ostream& print(std::ostream& os) const override {
        return os << "segment through " << first << " & " << last;
    }
};
