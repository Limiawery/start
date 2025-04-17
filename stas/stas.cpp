#include <iostream>
#include <vector>
struct location
{
    std::string name;
    std::vector<int> port;
};

struct player_ {

    int position;
    
};

player_ player1;

location room[3];

int main()//
{
   

    int direction;
    room[0].name = "village";
    room[0].port.push_back(1);

    room[1].name = "forest";
    room[1].port.push_back(0);
    room[1].port.push_back(2);

    room[2].name = "city";
    room[2].port.push_back(1);

    player1.position = 2;

    std::cout << room[player1.position].name << "\n";

    auto poratl_vect = room[player1.position].port;
    int sz = poratl_vect.size();
    for (int i = 0;i < sz;i++)
    {
        int direction = room[player1.position].port[i];


    }

    std::cin >> direction;
    if (0 <= direction and direction < 3)
    {
        player1.position = direction;
    }



}