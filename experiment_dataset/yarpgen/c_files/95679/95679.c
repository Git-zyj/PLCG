/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2178557559;
    var_19 += var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        var_21 ^= ((((((arr_1 [i_0] [i_0]) ? var_13 : (arr_0 [i_0])))) ? 16 : ((var_5 ? 34472 : 0))));
    }
    #pragma endscop
}
