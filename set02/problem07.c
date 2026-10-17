/*WAP to print cricket score board*/

#include <stdio.h>

struct batting_record
{
    char name[100];
    int runs, balls, minutes, fours, sixers;
    float strike_rate;
};

typedef struct batting_record Br;

void input(Br *player)
{
    printf("Enter name, runs, balls, minutes, fours, sixers:\n");
    scanf("%99s%d%d%d%d%d", player->name,
          &player->runs, &player->balls,
          &player->minutes, &player->fours,
          &player->sixers);
}

void inputs(int n, Br players[n])
{
    for (int i = 0; i < n; i++)
    {
        input(&players[i]);
    }
}

void compute(Br *player)
{
    if (player->balls != 0)
        player->strike_rate = player->runs * 100.0 / player->balls;
    else
        player->strike_rate = 0;
}

void computes(int n, Br players[n])
{
    for (int i = 0; i < n; i++)
    {
        compute(&players[i]);
    }
}

void display(Br player)
{
    printf("%s %d %d %d %d %d %f\n",
           player.name, player.runs, player.balls,
           player.minutes, player.fours, player.sixers,
           player.strike_rate);
}

void displays(int n, Br players[n])
{
    for (int i = 0; i < n; i++)
    {
        display(players[i]);
    }
}

int main()
{
    int n;
    printf("Enter no of players: ");
    scanf("%d", &n);

    Br players[n];

    inputs(n, players);
    computes(n, players);
    displays(n, players);

    return 0;
}
