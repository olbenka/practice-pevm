#include <iostream>

int main() {
    int n, room_on_floor = 1, rooms=0, res=0, t=0; 
    std::cin >> n;
    while (n > 0) {
        if (room_on_floor == t) {
            room_on_floor++;
        }
        else if (n - room_on_floor > 0) {
            rooms += room_on_floor;
            t++;
            res++;
            n -= room_on_floor;
        }
        else break;
    }
    std::cout << res + 1 << std::endl; //1 этаж + рез
    std::cout << n << std::endl;
    return 0;
}
