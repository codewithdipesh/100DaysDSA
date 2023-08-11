#include<bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    int n = v.size();

    map<int, int> hash;

    for (int i = 0; i < n; i++) {
        hash[v[i]] += 1;
    }

    int maxi = -1;
    int mini = INT_MAX;
int maxElement = -1;
    int minElement = -1;

  for(auto pair:hash){
      if(pair.second > maxi){
          maxi = pair.second;
          maxElement = pair.first;
      }

       if(pair.second < mini){
          mini = pair.second;
          minElement = pair.first;
      }
  }

    vector<int> ans;
    ans.push_back(maxElement);
    ans.push_back(minElement);

    return ans;
}
