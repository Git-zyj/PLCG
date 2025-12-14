/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) ? var_5 : (arr_0 [i_0] [i_0])));
        var_15 ^= (var_2 & 5043409622429213927);
        var_16 = (((arr_1 [i_0]) + 10327074540076860987));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (+((5043409622429213926 ? (arr_3 [i_1]) : ((var_4 ? 13403334451280337672 : (arr_2 [5]))))));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_18 = (min(var_18, -1859504355));
            var_19 = 5043409622429213934;
            var_20 = (min((((!(arr_5 [i_1] [i_1] [i_2 - 1])))), (max((arr_3 [i_2 + 3]), 100))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 = ((var_9 != (39 ^ var_11)));
            var_22 = arr_10 [i_1] [i_3] [i_3];
            var_23 = (min(var_23, 41));
            var_24 = (max(var_24, (((114 ? 12479 : var_1)))));
        }
    }
    var_25 += var_4;
    #pragma endscop
}
