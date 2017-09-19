#include <iostream>
#include <iomanip>

using namespace std;

void pascalsTriangle();

int main()
{

    pascalsTriangle();

    return 0;
}

void pascalsTriangle(){

   int userInput;

   cout << "Put the number of rows: ";

   cin >> userInput;

   cout << endl;

   int pascalsTriangle[userInput][userInput];

   pascalsTriangle[0][0] = 0;
   pascalsTriangle[0][1] = 1;
   pascalsTriangle[0][2] = 0;

   for(int a = 1;a < userInput;a++){

        for(int b = 0;b <= a + 2;b++){

            if(b == 0 || b == a + 2){

                pascalsTriangle[a][b] = 0;

            }
            else{

                pascalsTriangle[a][b] = pascalsTriangle[a - 1][b - 1] + pascalsTriangle[a - 1][b];

            }

        }

   }

   for(int s = 0, f = userInput;s < userInput, f > 0; s++, f--){

        cout <<setw(f);

        for(int d = 1;d <= s + 1;d++){

            cout << pascalsTriangle[s][d] << " " ;

        }

        cout << endl;

   }

}
