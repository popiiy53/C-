#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for(int i=0; i<db.size(); i++){
        for(int j=0; j<db[i].size(); j++){
            if(id_pw[0]==db[i][0]){
                if(id_pw[1]==db[i][1]){
                    return "login";
                }
                else
                    return "wrong pw";
            }
            else
                answer = "fail";
        }
    }
    return answer;
}