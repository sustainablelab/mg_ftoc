/* *************Copy build to ~/.local/bin/ ***************
 * Copy mg_ftoc.exe /usr/bin
 * Now I can run this helpful little calc utility anywhere.
 * *******************************/
#include <iostream>

float FtoC(float f)
{
    /* *************DOC***************
     * Return the temperature in Celsius
     * f : temperature in Fahrenheit
     *
     * Example:
     * float t;
     * t = 75; // °F
     * printf("F:%f C:%f\n", t, FtoC(t));
     * *******************************/
    return (f-32)*5/9.0;
}
int main(int argc, char *argv[])
{
    using namespace std;
    /* for(int i=0; i<argc; i++) cout<<argv[i]<<endl; */
    if (argc == 1)
    {
        cout<<"Expecting one or more args for Fahrenheit temperature" << endl;
        cout<<"Example: mg_ftoc 32 75 100"<<endl;
    }
    if (argc > 1)
    {
        for(int i=1; i<argc; i++)
            cout<<argv[i]<<"°F is "<<FtoC(stof(argv[i]))<<"°C"<<endl;
    }
    return 0;
}

