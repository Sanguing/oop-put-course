#include <iostream>
#include <string>
using namespace std;

class weather {
public:
    int temperature;
    std::string weather_w;
    std::string humidity_percentage;
    int wind_speed;

    weather();
};

weather::weather()
{
    temperature = 19;
    weather_w = "sunny";
    humidity_percentage = "50%";
    wind_speed = 7;
}

class place {
public:
    std::string country;
    std::string region;
    std::string town;

    weather weather_here = weather();
};

int main()
{
    weather today_weather;
    weather tommorow_weather;
    place today_place;

    today_weather.temperature = 15;
    today_weather.weather_w = "clear sky & sunny";
    today_weather.humidity_percentage = "65%";
    today_weather.wind_speed = 15;

    tommorow_weather.temperature = 14;
    tommorow_weather.weather_w = "clear sky & sunny";
    tommorow_weather.humidity_percentage = "60%";
    tommorow_weather.wind_speed = 11;

    today_place.country = "Polska";
    today_place.region = "Wielkopolska";
    today_place.town = "Poznan";

    cout << today_place.country << " " << today_place.region << " " << today_place.town << endl;
    cout << today_place.weather_here.temperature << endl;

    if (today_weather.temperature >= tommorow_weather.temperature)
    {
        std::cout << "Tommorow's not gonna be hotter";
    }
    else { std::cout << "Tommorow's gonna be hotter"; }
}
