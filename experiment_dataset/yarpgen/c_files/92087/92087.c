/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~(arr_1 [i_0 - 2]));
        arr_3 [i_0] = (-(((arr_1 [i_0]) ? 240 : var_0)));
    }
    var_12 = var_6;
    var_13 = (max((((((min(var_5, var_7))) >= ((2857963455 ? var_10 : var_1))))), ((min(2857963465, 8478648174786024834)))));
    var_14 = ((var_4 ? var_3 : (var_0 <= -220089960)));
    #pragma endscop
}
