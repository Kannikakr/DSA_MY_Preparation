#include <iostream>
using namespace std;

int main() {
    string name = "my name";
    int start = 0;
    int end = name.length() - 1;

    while(start < end){
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout << name;
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string name = "my name";
    
    reverse(name.begin(), name.end());
    
    cout << name;
    return 0;
}
