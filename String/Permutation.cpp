class Solution {
private:
bool check(int a[26], int b[26]){
    for(int i =0; i<26; i++){
    if(a[i]!= b[i]){
        return 0;
    }
    }
    return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i=0; i<s1.length(); i++){
            count1[s1[i]-'a']++;
        }
        //for first window
        int i =0;
        int windowsize = s1.length();
        int count2[26] = {0};
        for(i =0; i<windowsize &&i<s2.length(); i++){
            count2[s2[i]-'a']++;
        }
        if(check(count1, count2)) return true;

        //for next windows remove previous elements and take next elements 
        while(i<s2.length()){
            char newChar = s2[i];
            count2[newChar - 'a']++;

            char oldChar = s2[i-windowsize];
            count2[oldChar-'a']--;

            if(check(count1, count2)) return 1;
            i++;
        }
        return 0;
    }
};