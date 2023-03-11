#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


const char stringpool[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"|,.<>/?";

void initseed()
{
    time_t t;
    srand((unsigned)time(&t) );
}

string gen_pw(int len)
{
    const int poollen = sizeof(stringpool) - 1;

    string pw;
    for (int i = 0; i < len; i++)
    {
        pw += stringpool[rand() % poollen];
    }

    return pw;
}

int main()
{

    initseed();

    //freopen("output.txt","w",stdout);
    clock_t start = clock();
    vector<string> pws;

    // Change for password amount
    for(int i = 0; i < 1; i++)
        pws.push_back(gen_pw(32)); // 32 = Password lengh

    for(int i = 0; i < pws.size(); i++)
        cout << pws[i] << endl;


    clock_t endt = clock();
    float seconds = (float)(endt - start) / CLOCKS_PER_SEC;
    // Outputs the time which is needed to generate you Password
    // cout << "Time: " << seconds << "s." << endl;
    return 0;


}
