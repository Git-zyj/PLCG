/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_9 ? var_0 : var_2))) ? (((1 ? -1 : 800552186))) : (144 * 8))) / 4294967287));
    var_13 = ((4 ? ((var_6 ? (!1) : var_4)) : var_11));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_14 = (arr_3 [i_0] [i_1]);
            var_15 = ((var_4 ? var_3 : ((24 ? var_2 : (arr_0 [17])))));
        }
        var_16 ^= ((8 ? -10097292 : 207990705));
        var_17 = -21;
    }
    #pragma endscop
}
