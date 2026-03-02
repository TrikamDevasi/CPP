#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    FILE* file = fopen("output.txt", "r");
    int n;
    fscanf(file, "%d", &n);
    fclose(file);

    vector<int> v1;   // empty vector
    int num;
    cin >> num;
    while(num != -1)
    {
        v1.push_back(num);
        cin >> num;
    }

    sort(v1.begin(), v1.end());

    ofstream out("output.txt");
    for(int i = 0; i < v1.size(); i++)
    {
        out << v1[i] << " ";
    }
    out.close();

    return 0;
}
