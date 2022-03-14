#include <iostream>
#include <vector>
using namespace std;
void print_lst(int l[20]){
    cout << "{";
    for(int i = 0; i < 20; ++i){
        if(l[i] <= 20 and l[i] >= 0)
            cout << ((i==0)? "":", ") << l[i];
        else
            cout << ((i==0)? "":", ") << (char) l[i];
    }
    cout << "}" << endl;
}
bool end(const int l[20], const char check[20]){
    bool pass = false;
    for(int i = 0; i < 20; ++i){
        if((char) l[i] == check[i]) {
            pass = true;
        }
        else {
            pass = false;
            break;
        }
    }
    return pass;
}
int main() {
    vector<int> ascii_vals{ 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74 };
    int lst_1 [20] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int temp_lst [20] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    char check_lst[20] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
    int first_num;
    int second_num;
    int player_one_score = 0;
    int player_two_score = 0;
    bool player_one_turn = true;
    bool x = true;
    cout << "Welcome!" << endl;
    while (x == 1) {
        print_lst(lst_1);
        cout << "Chose two numbers from 1 to 20: ";
        cin >> first_num >> second_num;
        if (1 > first_num or first_num > 20 or 1 > second_num or second_num > 20) {
            cout << "Wrong Number" << endl << endl;
            continue;
        }
        else if (first_num == second_num) {
            cout << "Those numbers are the same" << endl << endl;
            continue;
        }
        else if (lst_1[int(first_num) - 1] == '*' or lst_1[int(second_num) - 1] == '*') {
            cout << "This number is taken" << endl << endl;
            continue;
        }
        for (int i = 1; i <= sizeof(lst_1); i++) {
            if (i == first_num) {
                lst_1[i - 1] = ascii_vals[first_num - 1];
            }
            if (i == second_num) {
                lst_1[i - 1] = ascii_vals[second_num - 1];
            }
            else {
                continue;
            }
            cout << endl;
            print_lst(lst_1);
            if (ascii_vals[first_num - 1] == ascii_vals[second_num - 1]) {
                lst_1[first_num - 1] = '*';
                lst_1[second_num - 1] = '*';
                if (player_one_turn) {
                    player_one_score += 1;
                    player_one_turn = false;
                }
                else{
                    player_two_score += 1;
                    player_one_turn = true;
                }
            }
            else if (ascii_vals[first_num - 1] != ascii_vals[second_num - 1]) {
                player_one_turn = not player_one_turn;
                lst_1[first_num - 1] = temp_lst[first_num - 1];
                lst_1[second_num - 1] = temp_lst[second_num - 1];
            }
            cout << "player_one_score : " << player_one_score << ", player_two_score : " << player_two_score << endl << endl;
            if(end(lst_1, check_lst)){
                x = false;
            }
            else if (player_one_turn) {
                cout << "--------------------player one turn!----------------------" << endl;
            }
            else {
                cout << "--------------------player two turn!----------------------" << endl;
            }
        }
    }
    if (player_one_score > player_two_score) {
        cout << "player one win" << endl;
    }
    else if (player_one_score < player_two_score) {
        cout << "player two win" << endl;
    }
    else {
        cout << "Draw" << endl;
    }
    return 0;
}
