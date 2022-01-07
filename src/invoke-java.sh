#!/bin/sh
LD_PRELOAD="${LD_PRELOAD}${LD_PRELOAD:+:}${0%/*}/uname-strip-local-version.so" exec java "${@}"
