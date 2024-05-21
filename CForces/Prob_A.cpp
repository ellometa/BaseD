#include <iostream>
#include <cmath>

using namespace std;

//extra_cells= ceil(static_cast<double>(total_cells)/7);

int min_screens(int x, int y) {
    int s_needed, e_screen;
    int b_screens = (y+1)/2;
    int cells_without_y = (b_screens*15) - y*4;
    int cells_reqd = x - cells_without_y;
    if (cells_reqd>0){
        e_screen=(cells_reqd+14)/15;
        s_needed=b_screens+e_screen;
    }
    else{
        s_needed = b_screens;
    }
    return s_needed;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {

        int x, y;
        cin >> x >> y;
        cout << min_screens(x, y) << endl; 
    }
    
    return 0;
}
