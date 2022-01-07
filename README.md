# Fake `os.version` for Java

Strips `-` (dash) and any following text from `uname(2)`’s release field (i.e., from what shows up when you run `uname -r`).

It has been a while since I played with `LD_PRELOAD`, so I thought I would try it to see if this could be used as a workaround for [a misbehaving java package](https://unix.stackexchange.com/questions/685313).

## Output

```
binki@sam ~/repos/binki-fool-java-os-version/example $ javac PrintOsVersion.java
binki@sam ~/repos/binki-fool-java-os-version/example $ java PrintOsVersion
3.7.10-gentoobinkisamxen20130418
binki@sam ~/repos/binki-fool-java-os-version/example $ ../src/invoke-java.sh PrintOsVersion 
3.7.10
```

## Compiling

In `src`, run `make`. Ensure you have the appropriate build tools installed first.
