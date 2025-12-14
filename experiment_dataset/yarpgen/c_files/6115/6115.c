/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_9 - (((var_6 - var_4) ? (((var_4 ? 31325 : var_11))) : (var_14 - var_3)))));
    var_17 = (max(var_17, (!var_10)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] &= (arr_0 [i_1] [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((arr_2 [i_0 + 1]) % 34210)))));
                                var_19 = (min(var_19, var_11));
                                var_20 = (min(var_20, ((((((-(arr_8 [i_0] [i_1] [i_2] [i_3])))) ? var_14 : var_15)))));
                                var_21 = (min(var_21, ((((((var_15 ? (arr_5 [i_2] [i_3] [i_4]) : 34210))) ? (arr_13 [i_2] [i_3]) : var_8)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 |= (!(arr_3 [i_1] [i_5 + 1]));
                                var_23 += 1;
                                var_24 = (min(var_24, (arr_17 [i_5] [i_2] [i_0])));
                                var_25 ^= var_12;
                                var_26 *= (arr_1 [i_0 - 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_1] [i_2] [i_2] [i_7] [i_7] [i_8] &= (arr_26 [i_0] [i_1] [i_2] [i_7] [i_8]);
                                arr_29 [i_0] [i_1] [i_1] [i_7] |= (((arr_2 [i_0]) ? (arr_24 [i_0] [i_1]) : var_5));
                            }
                        }
                    }
                }
                for (int i_9 = 4; i_9 < 14;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((max((max((arr_27 [i_11] [i_11] [i_9 - 2] [i_9 - 1] [i_9] [i_0 - 2]), 34210)), ((max(1, var_0))))))));
                                var_28 -= (min(((+(((arr_1 [i_9]) ? 1 : 1)))), (arr_22 [i_11] [i_11])));
                            }
                        }
                    }
                    var_29 = (max(var_29, (~31325)));
                }
                for (int i_12 = 4; i_12 < 16;i_12 += 1)
                {
                    var_30 -= ((!(((63 ? 34210 : 2509)))));
                    var_31 = (min(var_31, (((-1252205980 + (arr_35 [i_0] [i_1] [i_12] [i_12]))))));
                    var_32 |= (arr_16 [i_0] [i_0] [i_1]);
                    var_33 *= (((((((((arr_25 [i_0]) ? 2497 : (arr_25 [i_12])))) ? (arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_30 [i_0] [i_1] [i_12] [i_0])))) && 241042826));

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        var_34 ^= (arr_24 [i_0 - 2] [i_12 - 1]);
                        var_35 *= var_4;
                        var_36 = (max(var_36, (((~(arr_18 [i_13] [i_13 - 2] [i_12 - 4] [i_0 + 3] [i_0]))))));
                    }
                }
            }
        }
    }
    var_37 = (max(var_37, ((((((var_4 ? var_9 : var_5))) <= (min((var_2 - var_14), var_12)))))));
    #pragma endscop
}
