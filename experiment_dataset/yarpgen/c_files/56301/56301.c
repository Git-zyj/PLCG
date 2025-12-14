/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 ^= (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 ^= ((~((~((~(arr_8 [i_0] [i_0] [6] [6] [i_0] [i_0])))))));
                                var_18 = -1;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = (((((((var_7 ? 318867064 : (arr_13 [i_5]))) > (arr_12 [i_5])))) >> ((((-((38 << (var_12 - 3892589274066272232))))) + 79691781))));
        var_19 = -44;
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((-49 ? (((((arr_13 [i_6]) - (arr_12 [i_6]))) - (((arr_13 [i_6]) ? (arr_13 [i_6]) : var_5)))) : var_4)))));
        arr_17 [i_6] &= ((!(((~((~(arr_12 [i_6]))))))));
        var_21 += (~1);
        arr_18 [i_6] = arr_13 [i_6];
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, 1));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_23 ^= (arr_25 [i_9] [i_7] [i_7] [i_6]);
                        arr_28 [i_6] [i_6] [i_8] [i_8] = 1;
                        var_24 = (min(var_24, var_8));
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
    {
        var_25 = var_14;
        arr_31 [i_10] = 1817652660228399878;
    }
    for (int i_11 = 4; i_11 < 16;i_11 += 1)
    {
        arr_35 [i_11] = ((var_3 & (((((-8112456772119187537 ? (arr_33 [i_11]) : -41)) ^ (((arr_34 [i_11]) & (arr_32 [i_11]))))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {
                    arr_41 [i_11] [i_11] [i_11] [i_11] = (((((arr_36 [i_11] [i_12] [i_11]) || (((-(arr_38 [i_11] [i_11] [i_11] [i_11])))))) ? var_0 : ((-((~(arr_34 [i_11])))))));
                    var_26 &= (arr_37 [6]);
                }
            }
        }
    }
    #pragma endscop
}
