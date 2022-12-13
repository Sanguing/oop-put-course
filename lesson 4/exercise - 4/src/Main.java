import java.lang.Math;
public class Main {

    public static void main(String[] args) {

        CelestialBodies mars = new Planet(6371000, 23.5f, 150000000000f);

        mars = mars.radius(3389500f);
        mars = mars.axis_tilt(25f);
        mars = mars.sun_distance(228000000000f);
        mars.display();

    }

}
