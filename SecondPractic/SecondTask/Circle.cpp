//
// Created by Daniil Shabrov on 2/18/23.
//

#include "Circle.h"
#include <cmath>


Circle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float Circle::square() {
    return M_PI * pow(radius, 2);
}

bool Circle::triangle_around(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float r = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    return radius >= r;
}

bool Circle::triangle_in(float a, float b, float c) {
    float r = (a * b * c) / (4 * square());
    return radius <= r;
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
    float d = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return d <= radius + r;
}
