import java.lang.System;

class PrintOsVersion {
  public static void main(String[] args) {
    System.out.println(System.getProperties().getProperty("os.version"));
  }
}
