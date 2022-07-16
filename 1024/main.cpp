#include <iostream>
#include <string>
#include <vector>

#include <stdlib.h>
#include <stdio.h>

using namespace std;

void encryptMessage(vector<string> msgs)
{    

    for (auto &&msg : msgs)
    {


        char *encryptedMsg = (char *)malloc((msg.size() + 1) * sizeof(char));
        int halfMsg = msg.size() / 2 ;

        for (int i = 0; i < msg.size(); i++)
        {   
            if((int(msg[msg.size() - (i + 1)]) >= 65 && int(msg[msg.size() - (i + 1)]) <= 90)
            || (int(msg[msg.size() - (i + 1)]) >= 97 && int(msg[msg.size() - (i + 1)]) <= 122))
                encryptedMsg[i] = int(msg[msg.size() - (i + 1)]) + 3;
            else
                encryptedMsg[i] = int(msg[msg.size() - (i + 1)]);

        }

        for (int i = halfMsg ; i < msg.size(); i++)
        {

            encryptedMsg[i] -= 1;
        }
        encryptedMsg[msg.size()] = '\0';

        printf("%s\n", encryptedMsg);
    }
}

int main()
{

    int n;
    string buffer;
    vector<string> messages;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, buffer);
        messages.push_back(buffer);
    }
    system("clear");
    encryptMessage(messages);

    return 0;
}