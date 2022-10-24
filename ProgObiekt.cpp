#include <iostream>
#include <string>

class weather {
public:
    int temperature;
    std::string weather;
    std::string humidity_percentage;
    int wind_speed;
};

class place {
public:
    std::string country;
    std::string region;
    std::string town;
};

int main()
{
    weather today_weather;
    weather tommorow_weather;
    place today_place;

    today_weather.temperature = 15;
    today_weather.weather = "przejrzyste niebo, slonecznie";
    today_weather.humidity_percentage = "65%";
    today_weather.wind_speed = 15;

    tommorow_weather.temperature = 14;
    tommorow_weather.weather = "przejrzyste niebo, slonecznie";
    tommorow_weather.humidity_percentage = "60%";
    tommorow_weather.wind_speed = 11;


    today_place.country = "Polska";
    today_place.region = "Wielkopolska";
    today_place.town = "Poznan";

    if (today_weather.temperature >= tommorow_weather.temperature)
    {
        std::cout << "Tommorow's not gonna be hotter";
    }
    else { std::cout << "Tommorow's gonna be hotter"; }
}
