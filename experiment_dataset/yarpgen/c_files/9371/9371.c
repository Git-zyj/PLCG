/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (--9155997955454458910);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 &= ((((((((var_3 ? (arr_3 [i_0] [0] [i_0]) : (arr_9 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((var_16 + 2147483647) >> (var_17 - 54)))))) && (((var_16 ? (arr_9 [1] [i_1 - 1]) : var_18)))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_21 = -9155997955454458915;
                                var_22 = (((arr_8 [i_2] [i_1] [i_2] [i_1 - 1]) != (arr_8 [i_0] [i_1] [i_2] [i_1 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_23 = (51982 + 22387);
                                var_24 = (((~var_14) ? 2 : (~32256)));
                                var_25 = (min(var_25, var_14));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [i_1] [i_1] [i_3] [i_6] = (max((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_5 [11] [i_3] [i_1] [i_0]))) ? 1458067720 : (!var_6))), (!0)));
                                var_26 = (min(((var_13 ? (arr_9 [i_1 - 1] [i_1 - 1]) : 9155997955454458909)), (arr_9 [i_1 + 1] [i_1 - 1])));
                                var_27 = -9155997955454458910;
                                var_28 -= -var_12;
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_1] = ((((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]) / ((var_13 ? -18111 : 22335)))));
                                arr_25 [i_7] [i_3] [i_2] [i_1 + 1] [i_0] [i_0] = (max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_15 [i_7] [i_2])));
                            }
                        }
                    }
                }
                var_29 = (min(var_29, (((((25 ? 9155997955454458910 : 0)) > (((-9155997955454458910 ? -32761 : -120))))))));
            }
        }
    }
    var_30 = (((var_10 ? var_12 : -71)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                arr_31 [i_8] = (max((arr_27 [i_8]), var_2));
                arr_32 [i_8] = (max(((((((32745 ? -95 : (arr_30 [i_8] [i_8] [i_8])))) ? ((min(var_3, var_15))) : (var_11 && var_3)))), ((-(max(var_7, (arr_29 [4] [i_9] [i_9])))))));
                var_31 = (arr_27 [i_8]);
                arr_33 [i_9] = max((max((arr_26 [i_8] [1]), var_4)), -105);
            }
        }
    }
    #pragma endscop
}
