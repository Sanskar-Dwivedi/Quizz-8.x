#include <iostream>

namespace
{
    constexpr double gravity{9.81};
}
double getTowerHeight()
{
    double towerHeight{};
    std::cout << "Enter the Height of tower (in meters): ";
    std::cin >> towerHeight;
    return towerHeight;
}
double ballHeight(double towerHeight, int time)
{

    const double fallDistance{gravity * (time * time) / 2.0};
    const double ballHeight{towerHeight - fallDistance};
    return ballHeight;
}

double printResult(double tower)
{

    int time{};
    while (true)
    {

        double ball{ballHeight(tower, time)};
        if (ball <= 0)
        {
            std::cout << "Ball has hit the ground at " << time << " seconds";
            break;
        }
        std::cout << "At " << time << " Seconds, Ball's Height is " << ball << " Meters\n";

        ++time;
    }

    return 0;
}

int main()
{
    double const height{getTowerHeight()};
    printResult(height);

    return 0;
}