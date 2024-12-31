#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool image[][70]) {
    cout << "------------------------------------------------------------------------\n";
    for (int i = 0; i < 30; i++) {
        cout << "|";
        for (int j = 0; j < 70; j++) {
            if (image[i][j]) cout << "*";
            else cout << " ";
        }
        cout << "|\n";
        }
    cout << "------------------------------------------------------------------------\n";
}


void updateImage(bool image[N][M], int s, int x, int y) {
    
    for (int i = -s+1; i <= s-1; ++i) {
        for (int j = -s+1; j <= s-1; ++j) {
        
            if (i * i + j * j <= (s-1) * (s-1)) {
                int row = x + i; 
                int col = y + j;  
                
                
                if (row >= 0 && row < N && col >= 0 && col < M) {
                    image[row][col] = true;  
}
}
}
}
}





