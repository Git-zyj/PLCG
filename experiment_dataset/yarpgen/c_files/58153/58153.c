/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(3409806473073432610 ^ 40)));
    var_14 = (min(-var_10, var_1));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [17] = (((((var_5 ^ ((min((arr_1 [i_0] [i_0]), -18692)))))) + ((283434663 / (min(var_1, (arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((min(1479602753, (((1677108863 >= ((((arr_7 [i_0] [i_0] [i_2]) >= -7)))))))))));
                        var_17 = (min(var_17, ((max((!-39), 490637108)))));
                        arr_12 [i_3] [i_1] [i_0] = -283434650;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_18 -= (arr_1 [i_4] [i_4]);
        arr_16 [i_4] = (((((!(arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) <= (var_2 || 127)));
        arr_17 [i_4] [i_4] = (((arr_13 [i_4]) / (var_9 * 490637108)));
        arr_18 [i_4] = (~(((((arr_11 [8] [i_4] [i_4] [i_4] [i_4] [i_4]) + 2147483647)) >> (1471656580 - 1471656557))));
    }
    #pragma endscop
}
