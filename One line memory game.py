'''

In this game, 10 characters are chosen. Each character is repeated
twice. The characters are put in random order. Each player picks two numbers between 1 and
20. The two characters in these positions are shown and the rest are covered with their
position number. If the two characters match, the player wins a point and these two
characters are covered with * from now on. The screen is cleared and the remaining
character positions are displayed for the next player. When all characters are covered with *,
the game ends and the player with the biggest score wins.

Author: Ahmed Ashraf
Date: 26 Feb. 2022
Version: 1.0

'''
val = ["A","B", "C", "D", "E", "F", "G", "H", "I", "J", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"]
lst_1 = [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0, 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0]
temp_lst = [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0, 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0]
check_lst = ['*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*']
player_one_score = 0
player_two_score = 0
player_one_turn = True  

while lst_1 != check_lst :
    print("welcome: ", lst_1)

    first_num, second_num = input().split()
    first_num = int(first_num)
    second_num = int(second_num)

    # To avoid entering any number out of range
    if not (1 <= first_num <=20 and 1 <= second_num <=20):
        print("Wrong number")
        continue
    # To avoid that two numbers is the same
    if first_num == second_num:
        print("those numbers are same")
        continue
    # To avoid that when player one enter two numbers and player two enter the same numbers or even one number 
    if lst_1[int(first_num)-1] == '*' or lst_1[int(second_num)-1] == '*':
        print("This postion is taken")
        continue

    for i in range (1,len(lst_1)+1):

        if i == first_num:
            lst_1[i-1] = val[first_num-1]
        
        if i == second_num:
            lst_1[i-1] = val[second_num-1]
        
        else:
            continue


        if val[first_num-1] == val[second_num-1]:

            lst_1[first_num-1] = '*'
            lst_1[second_num-1] = '*'

            print(lst_1)

            if player_one_turn:
                player_one_score += 1
                player_one_turn = False
            else:
                player_two_score += 1
                player_one_turn = True

            print(f'player_one_score :{player_one_score}, player_two_score: {player_two_score}')
            

        if val[first_num-1] != val[second_num-1]:
            player_one_turn = not player_one_turn

            print(lst_1)
            lst_1[first_num-1] = temp_lst[first_num-1]
            lst_1[second_num-1] = temp_lst[second_num-1]

        if player_one_turn :
            print("player one turn")
        else:
            print("player two turn")
                
            

if player_one_score > player_two_score :
    print("player one win")

elif player_one_score < player_two_score:
    print("player two win")

else:
    print("Draw")