#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/linsun/XilinxLab/sqrt_CORDIC/sqrt_CORDIC/solution1/.autopilot/db/a.g.bc ${1+"$@"}
