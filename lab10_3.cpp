#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string textline;
    int count = 0;
    double sum, SD, mean, all, sumsqr;
    ifstream source;

    source.open("score.txt");
    while (getline(source, textline))
    {
        sum += atof(textline.c_str());
        sumsqr += pow(atof(textline.c_str()), 2);
        count++;
    }
    mean = sum / count;
    all = (sumsqr / count) - (pow(mean, 2));
    SD = sqrt(all);

    source.close();

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD;
}