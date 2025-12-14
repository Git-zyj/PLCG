/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 |= (((~(var_2 ^ -55))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_12 = (max(var_9, (((~35) ? (arr_5 [16] [i_0] [i_0]) : (arr_3 [6] [i_0 - 1])))));

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_2] = (arr_11 [i_0] [1] [9] [i_2] [9] [i_4]);
                            arr_14 [1] [i_3] [i_2] |= ((~((~(max((arr_8 [0]), -1))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_13 &= (arr_3 [i_2] [i_5]);
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_5] = (((arr_7 [i_0] [i_1] [i_2] [i_5]) || (!-66)));
                            arr_19 [i_0] [i_1] [11] [i_0] [11] [2] = ((var_3 <= (arr_3 [i_0 - 1] [i_0])));
                        }

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_14 = (((arr_11 [i_1 + 2] [i_1] [i_3 + 1] [i_6 + 2] [i_6] [0]) != (arr_4 [i_1 + 2] [i_1 + 2] [i_3 + 1])));
                            var_15 ^= ((15947199612939984253 + (~var_3)));
                            var_16 = -57;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_28 [1] [i_1] [i_2] [i_3] [2] &= ((arr_22 [i_0] [i_7 + 1] [i_2] [i_2] [i_0 + 1] [i_0]) - (arr_22 [i_7] [i_7 + 1] [i_2] [i_2] [i_0 + 1] [17]));
                            arr_29 [i_7] [i_3] [i_1] [i_1] [i_0] = (arr_4 [i_0] [0] [i_7]);
                            arr_30 [i_7] [i_3 + 1] [1] [i_2] [i_0] [i_0] = (((((~(arr_8 [i_2])))) ? -20 : ((~(arr_10 [5] [i_1] [i_2] [i_2] [i_3 - 1] [i_3] [i_7])))));
                            arr_31 [i_7 + 1] [i_3] [10] [i_1 - 1] [i_0] = ((var_8 ? (arr_1 [i_0 + 1]) : 1));
                            var_17 += (arr_3 [i_1] [i_1]);
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] &= 1;
                            var_18 = (max(var_7, (arr_11 [14] [i_1 + 1] [i_2] [i_3] [4] [i_1 + 1])));
                        }
                        var_19 = (arr_26 [i_3 + 1] [i_0 + 1] [i_2] [i_1 - 2] [i_3 + 2]);
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_20 = 42464;
                        var_21 = max(((max((((arr_32 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_9]) ? (arr_20 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_2]) : (arr_25 [i_1] [i_2]))), (((-3099131331651161168 <= (arr_15 [i_0] [i_0] [i_9]))))))), ((~(arr_9 [i_0] [i_9]))));
                        var_22 = (((((arr_25 [i_1 + 1] [i_0 + 1]) + 2147483647)) >> ((((45 >> (-21947 + 21949))) % ((~(arr_38 [i_9 - 1])))))));
                        var_23 = 0;
                    }
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
