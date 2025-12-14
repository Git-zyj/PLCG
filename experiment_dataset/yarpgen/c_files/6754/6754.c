/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((31017 ? var_8 : 65535));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = 635;
            var_21 = ((var_5 ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_0] [i_1])));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_6 [i_0] = (arr_1 [i_2 + 2]);
            var_22 = var_11;
        }
        var_23 = (-29116 | 1023);
        var_24 = (arr_3 [i_0]);
        var_25 = 7856;
    }
    var_26 ^= ((((max(var_12, var_0))) - (((var_3 ? var_17 : var_13)))));
    var_27 = (max(var_27, var_3));
    #pragma endscop
}
