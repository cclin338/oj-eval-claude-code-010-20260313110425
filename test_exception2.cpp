#include "list.hpp"
#include <iostream>

int main() {
    sjtu::list<int> myList, otherList;
    int ans = 0;

    try{ myList.pop_back(); } catch (...) { ans++; }
    try{ myList.pop_front(); } catch (...) { ans++; }
    try{ myList.front(); } catch (...) { ans++; }
    try{ myList.back(); } catch (...) { ans++; }
    sjtu::list<int>::iterator it = myList.end(), oit = otherList.end();
    try{ *it; } catch (...) { ans++; }
    try{ it--; } catch (...) { ans++; }
    try{ it++; } catch (...) { ans++; }
    try{ myList.erase(it); } catch (...) { ans++; }
    try{ myList.insert(oit, 0); } catch (...) { ans++; }

    std::cout << "ans = " << ans << ", expected = 9" << std::endl;
    return ans == 9;
}
