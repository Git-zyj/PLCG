/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((43 ? 19964 : 57084));
        var_10 = ((4032927520392632676 ? 8452 : 11026235054980777577));
    }
    var_11 = (((((((4032927520392632681 << (247 - 246))) != (((50105 ? 0 : 35620)))))) * (var_6 && var_8)));
    var_12 &= ((var_7 / ((((min(4127734405, 0))) ? ((4032927520392632660 ? 4032927520392632661 : 68)) : var_0))));
    #pragma endscop
}
