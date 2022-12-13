class Planet implements CelestialBodies {

    private final float radius_c;

    private final float degree_c;

    private final float distance_c;

    public Planet(float radius_c, float degree_c, float distance_c) {
        this.radius_c = radius_c;
        this.degree_c = degree_c;
        this.distance_c = distance_c;
    }
    @Override
    public Planet radius(float r) {
        return new Planet(r, degree_c, distance_c);
    }
    @Override
    public Planet axis_tilt(float deg) { return new Planet(radius_c, deg, distance_c); }
    @Override
    public Planet sun_distance(float dist) { return new Planet(radius_c, degree_c, dist); }
    @Override
    public void display() {
        System.out.println("Planet radius = " + radius_c + " km, Planet axis tilt = " + degree_c + " degrees, Planet distance from the Sun = " + distance_c + "km.");
    }
}
