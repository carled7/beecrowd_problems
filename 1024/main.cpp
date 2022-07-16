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
        if (msg == msgs[0])
            continue;

        char *encryptedMsg = (char *)malloc(msg.size() * sizeof(char));
        int halfMsg = msg.size() / 2 ;

        for (int i = 0; i < msg.size(); i++)
        {   
            if((int(msg[msg.size() - (i + 1)]) >= 65 && int(msg[msg.size() - (i + 1)]) <= 90)
            || (int(msg[msg.size() - (i + 1)]) >= 97 && int(msg[msg.size() - (i + 1)]) <= 122))
                encryptedMsg[i] = int(msg[msg.size() - (i + 1)]) + 3;
            else
                encryptedMsg[i] = int(msg[msg.size() - (i + 1)]);

        }
       // printf("%s\n", encryptedMsg);
        //cout << msg.size() << endl;
        //cout << halfMsg << endl << endl;
        for (int i = halfMsg ; i < msg.size(); i++)
        {

            encryptedMsg[i] -= 1;
        }

        printf("%s\n", encryptedMsg);
       // cout << halfMsg << endl;
    }
}
/*4
Texto #3
abcABC1
vxpdylY .ph
vv.xwfxo.fd

3# rvzgV
4
1FECedc
3
ks. \nxfrzx
5
gi.r{hyz-xx
5*/
int main()
{

    int n;
    string buffer;
    vector<string> messages;

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        getline(cin, buffer);
        messages.push_back(buffer);
    }
    system("clear");
    encryptMessage(messages);
    printf("\n");

    return 0;
}

//tentar descobrir como imprmir caracteres fora no range em c++ (ctrl shift u 1e)