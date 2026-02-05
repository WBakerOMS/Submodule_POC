#include <iostream>
#include <vector>
#include <string>

#include "feat1/Submodule_POC/feature1-include.hpp"

using namespace std;

int main()
{
    vector<string> msg {FEATURE_1};

    for (const string& word : msg)
    {
        cout << word << endl;
    }
}
