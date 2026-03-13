#include "list.hpp"
#include <iostream>

int main() {
    sjtu::list<int> myList, otherList;
    int ans = 0;

    std::cout << "Testing pop_back on empty list..." << std::endl;
    try{ myList.pop_back(); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing pop_front on empty list..." << std::endl;
    try{ myList.pop_front(); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing front on empty list..." << std::endl;
    try{ myList.front(); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing back on empty list..." << std::endl;
    try{ myList.back(); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    sjtu::list<int>::iterator it = myList.end(), oit = otherList.end();

    std::cout << "Testing dereference of end iterator..." << std::endl;
    try{ *it; } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing decrement of end iterator on empty list..." << std::endl;
    try{ it--; } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing increment of iterator..." << std::endl;
    try{ it++; } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing erase with iterator..." << std::endl;
    try{ myList.erase(it); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "Testing insert with iterator from different container..." << std::endl;
    try{ myList.insert(oit, 0); } catch (...) { ans++; std::cout << "  Exception caught! ans=" << ans << std::endl; }

    std::cout << "\nTotal exceptions: " << ans << " (expected: 9)" << std::endl;
    return ans == 9 ? 0 : 1;
}
