class Solution {public:bool checkIfPangram(string sentence){vector<int>v(26, 0);int cnt = 0;for(auto &c : sentence ){if(v[c - 'a'] == 0)cnt++;v[c - 'a']++;}if(cnt < 26)return false;return true;}};