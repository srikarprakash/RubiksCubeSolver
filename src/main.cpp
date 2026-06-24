#include <iostream>
#include <chrono>

#include "database/StateDatabase.h"

using namespace std;

int main()
{
    StateDatabase db;

    auto start =
        chrono::high_resolution_clock::now();

    cout
        << "Building depth 7 database...\n";

    db.build(7);

    auto end =
        chrono::high_resolution_clock::now();

    cout
        << "\nStates Stored: "
        << db.size()
        << "\n";

    cout
        << "Build Time: "
        << chrono::duration_cast<
            chrono::seconds
        >(end - start).count()
        << " seconds\n";

    cout
        << "\nSaving database7.bin...\n";

    db.save("database7.bin");

    cout
        << "Done!\n";

    return 0;
}