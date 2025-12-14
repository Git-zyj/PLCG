/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((var_2 ? var_10 : -21863)) ^ 32736)), var_4));
    var_17 = var_13;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_18 = ((((min(var_2, (arr_0 [i_0 - 2])))) ? ((((32736 % (arr_1 [i_0]))))) : var_8));
        var_19 = (min(var_19, ((max((max(((135 << (127 - 121))), (1 | 32736))), (min(32736, -1585043922)))))));
        arr_2 [i_0] [i_0] = -var_9;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 *= (min((arr_4 [i_1]), (!-var_10)));
        var_21 = (max(var_21, ((min((arr_3 [i_1 + 1] [i_1 + 2]), 102)))));
        var_22 = ((((((arr_5 [10]) * var_3))) / (((1585043941 ? var_10 : 6384442637963425124)))));
        arr_6 [i_1] [i_1 - 2] = (arr_5 [2]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_23 = ((var_14 ? (arr_9 [i_2 + 2]) : (arr_7 [i_2] [i_2])));
        var_24 += (arr_7 [i_2] [i_2 + 3]);
        var_25 *= (arr_8 [i_2 - 2]);
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_26 = (min(var_26, ((((~18982) * ((-(-32767 - 1))))))));
                    arr_17 [i_5] [i_4] [i_5] = var_8;
                    var_27 = (max(var_27, (max(-756779607, (arr_10 [i_4])))));
                }
            }
        }
        var_28 = (min((arr_9 [i_3 + 1]), (((~32800) ? ((var_4 & (arr_9 [i_3]))) : (((arr_15 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_10 [i_3])))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_7] = (min((min((arr_25 [i_6] [i_6 - 2]), (((arr_22 [9]) / -756779607)))), ((max((arr_8 [i_7]), (arr_8 [i_7]))))));
                var_29 ^= arr_7 [i_7] [i_6];
                var_30 = -var_11;
            }
        }
    }
    #pragma endscop
}
