/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(-40, var_11);
    var_14 -= ((2996640452 ? 150 : 166));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (159 < -5684444871083133038);
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_16 = (var_8 && 2996640452);
    }
    #pragma endscop
}
