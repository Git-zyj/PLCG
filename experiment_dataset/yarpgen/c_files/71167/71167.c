/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_3, (-3351344636298537463 != var_11)))) / var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = ((var_0 >> (((((arr_3 [i_0] [i_1 + 2] [i_2]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_2] [i_1 - 1] [i_0]))) - 7980500867772773080))));
                    var_14 *= (max((arr_8 [i_2]), ((~((3351344636298537434 ^ (arr_3 [i_0] [i_0] [i_1])))))));
                    var_15 = (max(var_15, ((((((((max((arr_0 [i_1]), (arr_2 [i_1 + 2])))) ? (-524 + var_11) : var_7))) ? 3351344636298537462 : (3351344636298537462 > var_4))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((var_5 ^ (arr_3 [i_1] [i_1 - 3] [i_1 + 3])));
                        var_17 = (arr_6 [i_0] [i_1 + 3] [i_1 - 1]);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (~16248169952914472888);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_18 = (1596167887 ? (arr_14 [i_0] [i_1 + 3] [i_2] [i_0] [i_1] [i_2]) : (arr_14 [i_4] [i_1 - 3] [i_2] [i_4] [i_0] [i_0]));
                        var_19 = var_9;
                        var_20 = 3155198268;
                    }

                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_21 = (arr_8 [i_1]);
                        arr_19 [i_5] [i_0] [i_0] [i_0] &= ((((arr_16 [i_0] [i_1 + 3] [i_1 + 1] [i_5 + 2]) + var_6)));
                        arr_20 [i_0] [i_1 + 2] [i_2] [i_5 - 1] = (((!((min(16776192, 5412931028059985487))))));
                        var_22 -= (min((((arr_5 [i_1 + 2]) << (arr_5 [i_1 + 1]))), var_5));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_1 + 2] [i_6] = 3473998470496901055;
                        arr_25 [i_6] = ((((-926 ? -4550568497331086411 : 32606)) >= 2883358462));
                        var_23 = (min(var_23, ((((1118410790 / (arr_18 [i_0] [i_2] [i_2] [i_2] [i_6])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
