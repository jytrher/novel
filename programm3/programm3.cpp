#include <iostream>
using namespace std;
int main()
{
    int points;
    bool escape, attempt, leave;
    points = 0;
    cout << "You don't remember how you found yourself in the forest.\n"; // Ты не помнишь, как очутился в лесу.
    cout << "You're walking, trying to get out of the woods.\n"; // Ты идешь, пытаясь выбраться из леса.
    cout << "Suddenly a strange beast stands in front of you.\n"; // Вдруг перед тобой встаёт странный зверь.
    cout << "It seems to you that he is trying to tell you something, but you are very scared.\n\n"; // Тебе кажется, что он пытается сказать тебе что-то, но тебе очень страшно.
    cout << "Listen to him(1) or try to escape from the forest(0)?\n\n"; // Послушать его или попытаться сбежать из леса?.
    cin >> escape;
    if (escape)
    {
        cout << "\n\nThe beast said that you can stay in the forest.\n"; // Зверь сказал, что ты можешь остаться в лесу.
        points += 1;
    }   
    else
    {
        cout << "\n\nThe beast caught up with you, but it didn't kill you, it said you could still stay here.\n"; // Зверь настиг тебя, но не убил, а сказал, что ты все еще можешь остаться здесь.
    }
    cout << "You stayed in the forest, but you wanted to get home.\n\n"; // Ты остался жить в лесу, но тебе хотелось попасть домой.
    cout << "Do you want to stay in the forest forever(1) or will you try to attack the beast while it sleeps(0)\n\n"; // Хочешь ли остаться в лесу навсегда или ты попытаешься напасть на зверя, пока он спит.
    cin >> attempt;
    if (attempt)
    {
        cout << "\nYou don't do anything and go to sleep.\n\n"; // Ты ничего не делаешь и идёшь спать.
        points += 1;
    }   
    else
    {
        cout << "\nIt didn't work out for you.\n\n"; // У тебя ничего не вышло.
    }
    cout << "The beast said you can leave if you want.\n\n"; // Зверь сказал, что ты можешь уйти если хочешь.
    cout << "Stay in the forest(0) or leave it(1).\n\n";
    cin >> leave;
    if (leave)
    {
        if (points == 2)
        {
            cout << "\n\nThe beast accompanies you home and you forget what you saw in the forest.\n\n"; // Зверь провожает тебя домой, и ты забываешь о том, что видел в лесу
            cout << "1/3 good end\n\n";
        }
        else
        {
            cout << "\n\nYou got lost in the forest and couldn't get out.\n\n"; // Ты заблудился в лесу и не смог выбраться.
            cout << "2/3 bad end\n\n";
        }
    }
    else
    {
        cout << "\n\nYou stayed in the forest forever.\n\n"; // Ты навсегда остался в лесу.
        cout << "3/3 true end";
    }   
    return 0;
}
