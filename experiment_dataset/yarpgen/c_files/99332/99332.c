/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_10 = (((max((arr_0 [i_0]), 47))) ? (max((min(256, (arr_1 [8]))), 47)) : 825373341);
        var_11 = (max((min((~91), (~var_1))), ((~((min(159, 63)))))));
        var_12 = (min(90, var_2));
        arr_2 [i_0] = (min((min(-105, (~-79))), ((max((min(-79, var_7)), var_6)))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_13 *= (min(((((arr_4 [6]) ? ((var_0 ? 36446 : var_2)) : ((183 ? var_2 : 29))))), var_5));

        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] = -192;
            arr_9 [i_1] = var_0;
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_14 = (((arr_6 [i_1] [i_3 + 2]) - (((!26288) * (-54 - var_2)))));
            var_15 += -39;
            var_16 = (max(var_16, var_3));
        }
        var_17 = (max(var_17, (((~(arr_10 [i_1 - 2] [16]))))));
    }

    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] [i_5] [i_4] [i_4] = (~var_2);
                                arr_26 [i_4] [i_4] [i_4 + 1] = (((~(~78))));
                            }
                        }
                    }
                    arr_27 [i_4] = (((~var_9) ? ((~(arr_16 [i_4] [i_5 - 2] [i_4 - 1]))) : ((~(~var_0)))));
                    var_18 = (((~62728) ^ (max((911478840 & var_5), (-75 & 122)))));
                }
            }
        }
        var_19 ^= 46919;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_20 = (arr_30 [i_4] [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_21 = (((((-(arr_18 [i_12] [i_11] [i_10] [i_4 - 2])))) ? ((-(arr_18 [i_4] [i_11] [20] [i_4 + 2]))) : 21937));
                                arr_38 [i_4] [i_12] [i_4] [i_4] [i_4] = (min(((4251697700 ? var_2 : (arr_15 [i_4] [i_4 + 2]))), ((((arr_15 [i_4] [i_4 - 1]) || (arr_15 [i_12] [i_4 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, 3));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 20;i_14 += 1)
        {
            {
                arr_44 [i_14 - 3] &= 603916893;
                arr_45 [i_13] [i_14] = (((!var_8) ? (((-90 || (arr_33 [i_14 - 2] [i_13] [i_14] [i_14 - 3] [i_14 - 1])))) : var_4));
            }
        }
    }
    #pragma endscop
}
