/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = 0;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_12 |= ((((max((arr_6 [i_2 + 2]), (arr_5 [i_0 + 1] [i_1])))) >> (((((arr_5 [i_0 + 1] [i_4]) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 + 2]))) - 2767))));
                                var_13 = (max(((-(max((arr_0 [i_0] [i_0 + 1]), (arr_9 [i_0 + 1] [i_2 + 2] [i_2] [i_4]))))), (((-(((arr_7 [i_2] [i_1] [i_1]) ? var_5 : (arr_5 [i_0] [i_2]))))))));
                            }
                            arr_12 [i_1] [i_3] |= (arr_9 [i_1] [i_1] [i_1] [2]);

                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [14] |= 245;
                                var_14 = (min(var_14, ((((((-(((arr_10 [i_3]) | var_7))))) ? var_10 : ((-var_0 << (!107))))))));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_19 [i_2] [i_2 - 1] [i_6] = ((((min(2305843009213693950, var_10))) ? (!-96) : (max((32767 * 11), -12))));
                                var_15 += (10 > var_3);
                                arr_20 [i_0] [i_1] [i_0] |= (min((((arr_6 [i_0 - 1]) ? (arr_6 [i_0 - 1]) : -13)), (max((min((-127 - 1), (arr_17 [i_3] [i_3] [i_3] [0] [i_6] [i_0]))), (arr_7 [i_1] [i_3] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_23 [i_0] [i_2] [i_2] = (~var_6);
                                arr_24 [i_0] [i_1] [i_2 - 1] [i_2] [6] [i_7] = (-(arr_21 [i_7] [i_3] [i_2 + 2] [9] [i_0]));
                                var_16 = (min(var_16, (arr_18 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])));
                                var_17 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((var_4 / (max(7341850124688911993, 64)))) > (((var_9 ? var_3 : ((max(var_3, var_2))))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                arr_29 [i_8] [i_8] [i_9] |= (~(((174 | -64) ? (max(16140901064495857666, 96)) : ((max(3339855231, 0))))));
                var_19 = (((max(-var_2, (min((arr_27 [i_8] [i_8] [i_9]), 2305843009213693963)))) * 268435455));
                var_20 = ((~((~(~-107)))));
            }
        }
    }
    #pragma endscop
}
