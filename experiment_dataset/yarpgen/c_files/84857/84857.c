/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_2] = 6155;
                                arr_14 [8] [8] [i_2] [i_3] [3] = -32756;
                                var_17 = ((((max(13, (arr_10 [i_1] [i_3 - 2] [i_3 + 1] [i_3 - 2])))) ? (max((min(var_10, var_14)), (~var_14))) : (((arr_9 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) + (var_9 ^ 249)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = ((((((-27114 + 2147483647) >> (var_14 - 46507)))) ? (var_14 / var_13) : 35));
                                var_19 = 57920;
                                var_20 = (max(var_20, ((((((~(max(2147483632, var_16))))) ? (-6955538663087090152 < var_5) : ((~(var_11 - var_0))))))));
                                var_21 *= -6;
                                arr_22 [i_0] [i_1] [i_2] [i_5] [0] = 9223372036854775807;
                            }
                        }
                    }
                    var_22 = ((!(5313 < var_14)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_4));
                                var_24 = (max(var_24, (((1 ? 124 : ((((0 ? 19 : (arr_18 [i_0] [i_1] [i_2] [i_8]))) + -32753)))))));
                                arr_29 [i_0] [i_1] [9] [i_7] [i_8] = (max((arr_6 [i_0] [i_0] [i_0]), ((var_9 - (arr_27 [i_7] [i_1])))));
                                var_25 ^= 5842;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] [i_2] [i_10] = (min(var_8, (min((((arr_12 [i_0] [i_1] [7] [i_9] [i_10]) ? 35 : var_3)), (((-6955538663087090152 ? var_13 : -1907295601)))))));
                                var_26 = 15710330457200247989;
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (((!250) ? ((min(71, (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) : (((((min(var_10, var_5))) || ((min(71, (arr_6 [i_1] [i_9] [i_10])))))))));
                                arr_37 [i_0] [i_2] [i_0] = ((max(52354, (arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_27 -= ((((((arr_46 [i_13 + 2] [i_15]) >> (((var_12 - 4294967295) - 47948))))) ? 18446744073709551615 : (!var_14)));
                                arr_51 [i_11] [i_12] [3] [i_14] [1] [i_13 - 1] [i_15] = var_2;
                            }
                        }
                    }
                }
                arr_52 [i_11] [i_11 - 2] [i_11 + 2] = var_6;
                arr_53 [i_11] [i_11] [i_12] = -1;
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
