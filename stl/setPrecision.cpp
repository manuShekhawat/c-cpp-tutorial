#include<bits/stdc++.h>

using namesapce std;

int main(){
   vector<int>v1 = {10 , 20  , 30 , 40 , 50 };
   vector<int>v2 = {10 , 20 , 17};
  vector<int>k(max(v1.size(), v2.size()));
  auto it = set_difference(v1.begin() , v1.end() , v2.begin() , v2.end() , k.begin()) ;
  k.resize( it - k.begin()); 
  // k = { 30 , 40 , 50}
}
