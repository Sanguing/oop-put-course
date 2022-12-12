public interface Forecast {
    float f_temperature();
    final class Fake implements Forecast {
        @Override
        public float f_temperature(){
            return 100.0f;
        }
    }
}
