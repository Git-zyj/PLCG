/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_17 = ((~var_9) ? 112 : var_14);
        var_18 = (arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= ((1 ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 - 1])));
                    arr_8 [i_0 - 1] [i_1] [i_1] = 235;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] |= (((868573244 / var_5) <= 18379751040449539706));
                                var_20 = (max(var_20, (((((247 ? 8 : (arr_14 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_1 + 1] [i_4]))) % var_14)))));
                                arr_16 [i_1] [i_1] = (arr_4 [i_2 - 1] [i_2 - 1]);
                                var_21 = (min(var_21, (((arr_5 [i_0 - 2] [i_2] [i_2 - 1]) * (arr_11 [i_0 - 2])))));
                                var_22 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_20 [i_5] = ((((arr_0 [i_5]) && (arr_10 [4] [i_5] [20] [i_5]))));
        var_23 = (max(var_23, (~242)));
        var_24 = (max(var_24, (((5961 ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5]))))));
        arr_21 [i_5] [1] = (arr_10 [i_5] [i_5] [i_5] [i_5]);
        var_25 = (arr_0 [i_5]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_26 = (max(var_26, ((min(((((max((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), -86))) ? ((max(1, 34676))) : 9)), (((247 >= (((16042 < (arr_23 [i_6]))))))))))));
        arr_26 [i_6] = ((((max((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (max(-1479847895, (arr_24 [i_6])))))) ? ((var_9 - (arr_18 [i_6]))) : (((244 >> (32763 - 32749))))));
        arr_27 [i_6] = -3964899043275436895;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_27 ^= (((arr_29 [i_7 + 2]) ? (~-27) : -61));
                var_28 = ((((min(-2924513426302130731, -5661751742121539973))) ? (((!-7008530611193654120) ? (arr_5 [i_7] [2] [i_8]) : (((arr_19 [i_7] [i_8]) + (arr_30 [i_8] [i_8]))))) : (107 * 18)));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_43 [i_11] [i_9] [i_9] [i_7 + 1] [i_8] [i_9] [i_7 + 1] = ((((((arr_31 [i_7 + 4]) ? (arr_31 [i_7 + 2]) : (arr_31 [i_7 + 2])))) ? (arr_7 [i_7] [i_7] [i_9] [i_7]) : (min((arr_30 [i_8] [i_11]), 8))));
                                var_29 ^= arr_18 [i_10];
                                var_30 = (min(var_30, (min(((var_5 ? (arr_32 [i_7 + 2] [i_10]) : (~1))), var_0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (-(!5086560196441720503));
    #pragma endscop
}
