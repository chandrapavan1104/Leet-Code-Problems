class Solution {
public:
    string interpret(string command) {
        string k;
        for(int i=0; i<command.size(); i++){
            if(isalpha(command[i]))
                k.push_back(command[i]);
            if(command[i] == '(' && command[i+1] == ')')
                k.push_back('o');
        }
        return k;
    }
};