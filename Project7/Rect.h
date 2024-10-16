#pragma once

class Rect {
public:
    int h; 
    int w;  

    Rect(); 
    Rect(int height, int width);  

    void print(); 
    int getArea();  
    int getPerimeter(); 
};