#include <iostream>
#include <string>

bool isCyclic(const std::string &p, const std::string &q) {
    if (p.length() != q.length()) {
        return false;
    }
    std::string temp = p + p;
    return temp.find(q) != std::string::npos;
}

int main() {
    std::string p = "abcd";
    std::string q = "cdab";

    if (isCyclic(p, q)) {
        std::cout << q << " is a cyclic permutation of " << p << std::endl;
    } else {
        std::cout << q << " is not a cyclic permutation of " << p << std::endl;
    }

    return 0;
}
