#include <iostream>
#include <vector>


struct portal_ {

    std::string name_portal;
};

struct location
{
    std::string name;
    std::vector<portal_> port;
};

struct player_ {

    int position;
    

    void Game() {

        std::string user;
        std::string bot[3] = { "kamen", "noj", "bum" };





        for (int i = 0; i < 3;)
        {
            std::cin >> user;
            if (user == "kamen" or user == "noj" or user == "bum")
            {
                int temp = rand() % 2;

                if (user == "kamen" and bot[temp] == "noj" or user == "noj" and bot[temp] == "bum" or user == "bum" and bot[temp] == "kamen")
                {
                    std::cout << "win\n";
                    i++;
                }
                else if (user == bot[temp])
                {
                    std::cout << "draw\n";
                }
                else
                {
                    std::cout << "lose\n";
                }
            }
            else
            {
                std::cout << "error\n";
            }


        }

    }

};

player_ player1;

location room[3];



void InitGame() {

    room[0].name = "village";
    room[0].port.push_back(1);

    room[1].name = "forest";
    room[1].port.push_back(0);
    room[1].port.push_back(2);

    room[2].name = "city";
    room[2].port.push_back(1);

    player1.position = 2;

}

int main()
{
    srand(time(NULL));

    std::string chouse;


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

    std::cin >> chouse;
    if (chouse == "go")
    {
        //player1.position = direction;
    }


}


