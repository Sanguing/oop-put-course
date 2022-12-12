public class Application {

    public static void main(String[] args) {
        Forecast forecast = new Forecast.Fake();
        Weather weather = new Weather(forecast, 29.9f);
        assert "29.9".equals(weather.toString());
        System.out.println(weather.toString());
        System.out.println(forecast.f_temperature());
    }
}
