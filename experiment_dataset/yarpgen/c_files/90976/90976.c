/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((51736 ? (min(550899916015252981, 131071) : 31)));
    var_12 |= min(((var_4 ? var_6 : (~-3221961867137425458))), var_5);
    var_13 = var_5;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = ((~(max((var_8 & 1536), 95))));
        var_15 = -var_2;
        arr_3 [i_0] = (240 ^ -var_6);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [12] &= (min(((0 ? ((177 ? var_10 : (arr_1 [1]))) : (((var_9 ? var_4 : var_1))))), (min(-1308070793, var_10))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_16 = (((arr_2 [i_4 - 1]) * (min(var_2, (arr_2 [i_4 + 1])))));
                        var_17 = ((((((var_6 < 252806194) ? (((arr_15 [8] [9] [12] [i_4] [i_4]) / var_9)) : var_7))) ? -15127 : -28436));
                        var_18 = ((+(((arr_7 [i_3]) + var_1))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = (-1100977581 ? var_3 : var_7);
        arr_19 [12] [12] = 32704;
        var_20 = (!var_8);
    }
    #pragma endscop
}
