#include <iostream>
class point{
    private:
    int x;
    int y;
    public:
    point(int x, int y) : x(x), y(y) {}
    void print(){
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
void printPoint(const point& p){
    p.print();
}
int main(){
    point p1(1, 2);
    printPoint(p1);
    return 0;
}