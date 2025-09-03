#include <iostream>
#include <string>

using namespace std;

int longestRepetition(const string& dna) {
    int maxRep = 0, currRep = 1;
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            currRep++;
        } else {
            maxRep = max(maxRep, currRep);
            currRep = 1;
        }
    }
    return max(maxRep, currRep);
}

int main() {
    string dna;
    cin >> dna;
    cout << longestRepetition(dna) << endl;
    return 0;
}