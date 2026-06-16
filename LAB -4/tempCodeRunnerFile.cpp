#include <iostream>
void demo () {
    static int s = 0;
    int n = 0;
    s++;
    n++;
    std::cout << "s: " << s << ", n: " << n << std::endl;
}
int main(){
    for (int i = 0; i < 5; i++) {
        demo();
    }
    return 0;
}