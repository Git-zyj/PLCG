/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (((~((min(-94, (arr_5 [0] [i_1] [i_2])))))));
                        arr_8 [i_0] [i_3 - 1] [1] [i_3 - 1] [i_1] [i_3 - 1] = (((((min(45, (arr_3 [i_0] [i_0 + 1]))))) & (var_16 ^ var_1)));
                        var_21 = (min(var_21, ((((min(var_9, 52628)) & ((min(1, (arr_7 [i_0] [i_0] [9] [i_3 - 1])))))))));
                    }
                }
            }
        }
        var_22 = (min(var_22, var_6));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_23 -= ((+(((arr_10 [i_4] [i_4]) & (arr_10 [i_4] [i_4])))));
        var_24 -= (((arr_10 [i_4] [i_4]) ? var_4 : ((~(arr_9 [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_25 += (((((((arr_11 [i_6 + 1] [9] [9]) ^ var_9)) | var_4)) == 18));
                                var_26 = (((max(((-632 ? var_1 : var_12)), 36)) & (((((((arr_16 [12] [i_5] [1] [i_7]) ^ (arr_15 [i_5] [i_5] [i_6] [i_5])))) ? ((var_3 | (arr_19 [12] [i_4] [8] [i_4]))) : ((var_9 ? (arr_11 [i_4] [i_5] [6]) : var_4)))))));
                            }
                        }
                    }
                    arr_22 [i_4] [i_4] [i_5] [i_6 - 1] = max(10, ((127 >> (64 - 34))));
                    var_27 = ((((arr_18 [10]) * (!var_4))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_26 [i_9] = (45 ? 224 : (arr_14 [i_9]));
        arr_27 [i_9] [i_9] |= (((arr_24 [i_9]) ? ((157 ? var_18 : (arr_12 [5] [i_9]))) : -var_0));
    }
    var_28 = (min(var_28, ((min((((!((min(var_16, var_14)))))), (var_14 & var_5))))));
    var_29 -= (min((min(var_17, var_16)), (((((var_5 ? 255 : -13)) == ((max(var_4, var_2))))))));
    #pragma endscop
}
