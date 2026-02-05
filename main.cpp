#include <iostream>
#include <vector>
#include <string>

#include "feat1/Submodule_POC/feature1-include.hpp"
#include "feat2/Submodule_POC/feature2-include.hpp"

using namespace std;

int main()
{
    vector<string> msg {FEATURE_1, FEATURE_2};

    for (const string& word : msg)
    {
        cout << word << endl;
    }
}
