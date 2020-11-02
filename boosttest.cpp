#include<cstdio>
#include <boost/container/vector.hpp>
#include <boost/container/flat_map.hpp>

int main() {
    boost::container::vector<int> v;
    boost::container::flat_map<int, int> fm;

    fm[1] = 1;
    fm[42] = 100;

    printf("The flat map has %d entries.\n", (int)fm.size());
    return 0;
}
