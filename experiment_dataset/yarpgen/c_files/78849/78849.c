/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((29002 && (arr_0 [i_0])));
        var_20 = (((arr_1 [i_0] [20]) << (((arr_1 [i_0] [i_0]) - 728512425967155560))));
        var_21 = (arr_0 [i_0]);
    }
    var_22 = (255 & 36);
    #pragma endscop
}
