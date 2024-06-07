/*

FAILED ATTEMPT!!

*/
#include <iostream>
#include <map>

using namespace std;

int main() {
   //initialising the map
   map<int, int> mmap;
   int n;
   cin >> n;
   int a[n], b[n];
   for (int i = 0; i < n; i++) cin >> a[i];
   for (int i = 0; i < n; i++) cin >> b[i];
   for (int i = 0; i < n; i++) mmap.insert(pair<int, int>(a[i], b[i])); // Corrected type of pair
   map<int, int>::iterator itr;

   //iterating through the contents
   for (itr = mmap.begin(); itr != mmap.end(); ++itr) {
      cout << itr->first << ": " << itr->second << endl;
   }
   return 0;
}