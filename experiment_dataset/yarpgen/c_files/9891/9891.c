/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_1, var_16);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 = ((-(+-2983889541)));
                            var_22 -= (((-(arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
                            var_23 = (max(var_9, (((1311077755 ? 31951 : 1)))));
                        }
                    }
                }
                var_24 = ((((4987869226426315969 ? ((var_12 + (arr_6 [i_0 + 1] [i_0]))) : ((-(arr_6 [i_0] [i_0]))))) >= (arr_6 [i_1] [i_0])));
                arr_11 [i_0 - 1] [i_0 - 1] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_25 *= (((((((((arr_3 [i_0]) ? (arr_4 [i_0 - 1] [i_0] [i_0]) : 0))) ? (((2048 ? (arr_3 [i_1]) : 9081))) : (arr_6 [i_4] [i_1])))) ? ((max(2983889541, ((max((arr_12 [i_0 - 1] [i_1]), var_17)))))) : (((arr_5 [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_5 [i_4] [i_4 + 1] [i_4 + 1]) : var_14))));
                            var_26 *= ((var_5 < (max((arr_16 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1]), (max(19864, -9143775748641764964))))));
                            var_27 *= ((-(arr_0 [i_0 + 1] [i_0 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_28 *= 1;
                            var_29 = (!1031257952);
                            var_30 ^= ((((max((((arr_1 [i_7]) - (arr_17 [i_0] [i_0] [i_0]))), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? (((((~-1031257953) == var_12)))) : (max(((-(arr_4 [i_7] [i_6] [i_0]))), (var_9 & -1031257953)))));
                            var_31 = arr_2 [i_0] [i_0];
                            var_32 = 32767;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                arr_26 [i_9] [i_9] [i_9] = var_2;
                var_33 ^= ((-(arr_9 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            {
                arr_31 [i_10] [i_10] = ((((((((arr_0 [i_10] [i_10]) ? var_17 : (arr_1 [i_11 + 2])))) > ((18446744073709551615 + (arr_18 [i_10]))))) ? var_13 : ((((((arr_30 [i_10] [i_10] [i_10]) ? (arr_4 [i_11] [i_11] [i_11]) : (arr_5 [i_10] [i_10] [i_11]))) << (((-32767 - 1) + 32776)))))));
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_34 = (max(var_34, ((((var_15 ? var_6 : (arr_10 [i_11 - 3] [i_12] [i_12 + 2] [i_12 + 2])))))));
                                var_35 = max(var_3, 15753);
                                arr_42 [i_14] [i_11] [i_10] [i_10] [i_11] [i_10] = -1;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_36 = (max(var_36, 1311077754));
                                var_37 = (min(var_37, ((max((((((var_18 ? (arr_19 [i_10] [i_10] [i_10] [i_16]) : (arr_30 [i_10] [i_10] [i_10])))) + (arr_17 [i_10] [i_11 + 3] [i_15]))), (((var_11 ^ (9558 & 2983889541)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
