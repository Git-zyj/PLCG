/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = -12257916757998911552;
        var_14 = var_2;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = ((((arr_5 [i_1 + 2]) ? (arr_5 [i_1 + 2]) : var_10)));
        var_15 = (((arr_5 [i_1 + 1]) ? var_3 : var_7));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_16 -= var_2;
        var_17 = ((!(arr_9 [i_2 + 1] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_18 = (arr_9 [i_3] [i_3]);
                            var_19 = ((~((((arr_9 [i_5] [i_3]) || 3)))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_5] [i_5] [11] [i_5] [0] [i_2] [i_4] = (((arr_20 [i_2] [i_2] [i_2] [i_5 - 1] [i_7]) ? var_1 : (!10)));
                            var_20 = var_12;
                            var_21 |= ((~((var_3 ? var_8 : (arr_20 [i_2] [i_5] [10] [i_5] [i_5])))));
                        }

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            arr_27 [i_8] [i_2] [i_2] [i_3] = var_6;
                            arr_28 [i_8] [i_2] [i_4] [i_3] [i_2] [i_2] = (2147483642 + -123);
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_22 ^= (!-1);
                            var_23 = (!2147483647);
                        }
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            var_24 = (!(arr_19 [i_3] [1] [i_3] [i_5 + 3] [i_10 - 1] [i_10 - 1] [i_10 - 1]));
                            var_25 ^= (arr_18 [i_2] [i_4] [0] [i_4] [i_5 - 2] [i_10 - 1]);
                            var_26 = (max(var_26, var_1));
                            var_27 -= -2147483643;
                        }
                        var_28 -= -var_6;

                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            var_29 ^= ((-(arr_22 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2])));
                            var_30 |= -2147483642;
                            arr_38 [19] [i_2] [i_5 + 2] = 1053685689;
                        }
                    }
                }
            }
        }
        var_31 = 2147483642;
    }
    var_32 = (min((((var_11 ? ((max(var_8, var_3))) : ((var_0 >> (var_9 - 805512278111013181)))))), 3677710189));
    var_33 *= var_0;
    #pragma endscop
}
