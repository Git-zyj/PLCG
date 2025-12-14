/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -415148925;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= 3240;
        arr_3 [i_0] = ((((max((arr_1 [i_0] [i_0]), ((3685308128 ? 830612784 : 3464354512))))) && var_4));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = ((-830612784 & (arr_1 [1] [i_1])));
        var_14 -= var_10;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, 3464354503));
        var_16 -= (arr_0 [i_2]);
    }
    var_17 = (((((4870031606466217503 ? -4870031606466217498 : (65535 / -2064116847)))) ? 830612786 : var_5));
    var_18 = var_0;
    #pragma endscop
}
