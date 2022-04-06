# one-line-game
1 - create a list of The alphabet letters that name is   "val"   ["A","B", "C", "D", "E", "F", "G", "H", "I", "J", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"]

2 - create a list of numbers that name is   "lst_1"   [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0, 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0]

3 - create a list of numbers that name is  "temp_lst" **(that when the two numbers not the same, takes the numbers from the "temp_lst" from the index)** [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0, 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,0]

4 - create a list of asterisk that name is "check_lst" ['*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*']

5 - create a falg for the two players, one of the players is true and the other is false to change a turn.

6 - create a while loop to check that "lst_1 != check_lst" if true....

7 - print("welcome: ", lst_1)

8 - input the first_num, second_num **(int)**

9 - if not (1 <= first_num <=20 and 1 <= second_num <=20) **(# To avoid entering any number out of range)**

10 - print("Wrong number")

11 - if first_num == second_num **(# To avoid that two numbers is the same)

12 - print("those numbers are same")

13 - if lst_1[int(first_num)-1] == '*' or lst_1[int(second_num)-1] == '*' **(# To avoid that when player one enter two numbers and player two enter the same numbers or even one number)**

14 - print("This postion is taken")

15 - create a for loop from "1" to "len(lst_1)+1"

16 - if i == first_num

17 - lst_1[i-1] = val[first_num-1] **(# to take the alphabet letters and put it in the index of the "lst_1")**

18 - if i == second_num

19 - lst_1[i-1] = val[second_num-1] **(# to take the alphabet letters and put it in the index of the "lst_1")**

20 - if val[first_num-1] == val[second_num-1] **(# if the two numbers have the same alphabets)**

21 - lst_1[first_num-1] = '*'
            lst_1[second_num-1] = '*'  **(# put the astricks in place "first_num" and "second number")**

22 - print(lst_1)

23 - if "player_one_turn" have a turn and get the same of two alphabets, his score increases by one

24 - flag changeing to "true" and thats turn of palyer two

25 - if val[first_num-1] != val[second_num-1] **(# if the two numbers not the same to alphabets)**

26 - player_one_turn = not player_one_turn

27 - lst_1[first_num-1] = temp_lst[first_num-1]
            lst_1[second_num-1] = temp_lst[second_num-1] **(# to get the numbers from "temp_lst" to put it in the index of the "lst_1")**

28 - if player_one || two _turn

29 - print("player one || two turn")

30 - if player_one_score > player_two_score

31 - print("player one win")

32 - elif player_one_score < player_two_score

33 - print("player two win")

34 - else:  print("Draw")
