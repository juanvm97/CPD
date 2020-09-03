
#include <iostream>
#include <ctime>

using namespace std;

const int MAX = 10000;

double A[MAX][MAX], x[MAX], y[MAX];

int main()
{
    unsigned t0, t1;

    t0 = clock();
    /* First pair of loops  */
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            y[i] += A[i][j] * x[j];
    t1 = clock();

    double time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout << "First pair of loops execution Time: " << time << endl;

    /* Assign y = 0 */
    /* Second pair of loops */
    t0 = clock();
    for (int j = 0; j < MAX; j++)
        for (int i = 0; i < MAX; i++)
            y[i] += A[i][j] * x[j];
    t1 = clock();

    time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout << "Second pair of loops execution Time: " << time << endl;
    return 0;
}