class Solution {
public:
    string interpret(string command) {
        string s = "";
        for(int i=0;i<command.size();i++){
            if (command[i] == 'G'){
                s +='G';
               // i++;
            }
            else if(command[i] == '(' && command[i+1] == ')') {
                s += 'o';
                i+2;
            }
            else if(command[i] == '(' && command[i+1] == 'a') {
                s += "al";
                i+3;
            }
        }
        return s;
    }
};