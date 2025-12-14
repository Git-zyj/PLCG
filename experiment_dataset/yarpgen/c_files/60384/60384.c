/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (~8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [5] [i_1] = var_1;
                            var_17 &= (min(1950242130, 18021));
                            var_18 = (arr_0 [i_0] [i_0 + 1]);
                            var_19 = (max(var_19, (((var_1 ? (arr_8 [i_0 - 1] [i_0 - 1]) : 23)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] = 233;
                            arr_18 [i_1] [i_1] [i_4] [i_5 + 1] = max(((((arr_15 [i_0] [i_4 + 2] [i_5 + 1] [i_1] [i_4]) - (arr_10 [i_0 + 1])))), ((var_11 ? 47514 : 1882578123)));
                            var_20 = (~1882578122);
                        }
                    }
                }
                var_21 &= (max(47515, (~61653)));
            }
        }
    }
    var_22 = (min(var_22, var_2));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_32 [i_6] [i_7] [i_6] [i_6] &= 3893;
                            arr_33 [i_6] [i_6] [i_8] [i_9] [i_8] = (((arr_20 [i_6] [i_7]) ? (((var_12 * (arr_31 [i_6] [i_8 + 2])))) : 4313669094252109070));
                        }
                    }
                }
                var_23 = (min(var_23, var_14));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_42 [i_11] [i_7] [i_10] [i_11] [i_11] [i_6] [i_10] = ((var_11 + ((var_13 ? ((min(var_5, 0))) : ((16669 ? var_1 : (arr_40 [11] [i_6] [i_11] [i_10] [i_11] [i_11])))))));
                                arr_43 [i_6] [i_7] [i_11] [i_7] [i_7] [i_7] = -2147483635;
                                var_24 = (((((min((max(var_10, var_13)), (arr_40 [i_6] [i_6] [i_11] [10] [i_6] [i_12]))))) - ((-(max(1882578113, 1))))));
                            }
                        }
                    }
                }
                arr_44 [i_7] = (((((~(arr_30 [i_6] [i_6] [i_6] [i_7] [i_7])))) ? 3893 : (((~(arr_30 [i_6] [i_6] [i_6] [i_6] [8]))))));
            }
        }
    }
    #pragma endscop
}
