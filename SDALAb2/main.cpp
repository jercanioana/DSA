#include <iostream>
#include <assert.h>
#include "Iterator.h"
#include "SortedSet.h"

bool r2(TComp e1, TComp e2) {
    if (e1 <= e2) {
        return true;
    }
    else {
        return false;
    }
}
int main() {

        int vverif[5];
        int iverif;
        TComp e;

        SortedSet s1(r2);
        assert(s1.add(5) == true);
        assert(s1.add(1) == true);
        std::cout<<s1.iterator().getCurrent();
        std::cout<<"ok";

        s1.iterator().next();
        std::cout<<s1.iterator().getCurrent();

    return 0;
}