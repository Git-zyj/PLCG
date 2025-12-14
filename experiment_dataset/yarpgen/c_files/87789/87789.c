/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (var_11 <= var_1)));
    var_20 = (max(var_20, var_15));
    var_21 = -3284303461176400757;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [11] [i_0] = (((arr_2 [i_0 + 1] [11]) && (arr_2 [i_0 - 1] [i_0])));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] |= 134217728;
            arr_8 [4] = 133;
            var_22 = (arr_1 [i_0 + 1]);
        }
    }
    var_23 = var_4;
    #pragma endscop
}
