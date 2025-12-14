/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(60562, (min(var_3, (-127 - 1)))));
    var_14 = ((var_8 ? (max(var_11, 1985545395)) : ((((!(((var_9 ? var_6 : var_1)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(6073229390783142407, -32758));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, ((1379521480 ? var_4 : (arr_8 [i_0] [i_2])))));
                        arr_11 [i_3] = (~var_12);
                        var_17 = ((((((arr_8 [i_3 + 2] [i_3 + 1]) ? var_4 : (arr_0 [i_3 + 1])))) ? (((arr_9 [i_3] [i_3 - 1]) ? (arr_9 [i_3] [i_3 - 1]) : (arr_8 [i_3 + 1] [i_3 + 1]))) : (arr_9 [i_3] [i_3 - 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_18 = (((arr_6 [i_4] [i_4 - 1] [i_4 - 1]) != (arr_2 [i_4] [i_4])));
        arr_14 [i_4] = arr_5 [i_4 - 2];
        arr_15 [8] = ((1668909559 ? 13575087099897105876 : (arr_1 [i_4 + 2])));
        var_19 = (((((arr_13 [i_4]) || (arr_13 [1]))) ? (((arr_9 [i_4] [i_4 + 3]) ? var_10 : 511)) : (((57344 ? 1 : var_8)))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_20 [12] |= (max((arr_16 [4] [i_5 + 1]), ((var_6 ? ((((arr_18 [i_5]) != (arr_19 [i_5])))) : (arr_17 [6])))));
        arr_21 [i_5] = (arr_17 [i_5]);
        arr_22 [i_5] = (((((arr_16 [i_5] [i_5 - 1]) ? 5 : (arr_16 [i_5] [i_5 + 1]))) | (((arr_16 [i_5] [i_5 + 1]) ? var_8 : (min(var_9, (arr_16 [i_5] [i_5])))))));
        var_20 = (((arr_16 [i_5] [i_5]) ? ((((arr_18 [6]) ? var_3 : (arr_16 [i_5] [i_5])))) : (arr_18 [i_5])));
    }
    var_21 = ((((((min(12423, 1861850968))) || ((min(var_0, var_2))))) ? (((1011655516 ? var_10 : var_10))) : (((-7394873624478208098 ? 25085 : 0)))));
    #pragma endscop
}
