/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, 1));
        arr_4 [i_0] = -8872;
        var_13 = 2444983060;
        arr_5 [i_0] = (~-2088671987);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_9 [i_1] = (-127 - 1);
        var_14 += (!124);
        arr_10 [1] |= 127;
    }
    var_15 = (min(var_15, (!1490783135)));
    var_16 = 32767;
    #pragma endscop
}
