public class Weather {
    private final Forecast forecast;
    private final float temperature;

    public Weather(Forecast fore, float tem)
    {
        this.forecast = fore;
        this.temperature = tem;
    }

    public Float announcer () {return this.forecast.f_temperature();}

    //@Override
    public String toString() {
        return Float.toString(temperature);
    }
}
