/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 *= var_6;
                        var_18 = 204;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_19 -= ((!(((-(((arr_0 [i_0] [i_1]) & 24)))))));
                        arr_16 [i_1] [i_1] [i_2 + 1] = ((((max((arr_3 [i_1 - 2] [i_2 + 1]), (arr_3 [i_1 + 1] [i_2 + 1])))) ? (arr_7 [i_0] [i_1] [i_1] [i_4]) : (((max(213, (arr_14 [i_0] [i_1] [i_0] [i_4])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_20 = 231;
                                var_21 = (min(var_21, (min(12, (!65)))));
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_1] = min(245, 134);
                                var_22 = (min(var_22, (((((max((!250), (arr_18 [2] [i_1] [i_6] [i_6] [i_5] [i_1])))) ? (arr_10 [i_0] [4] [i_0] [i_0]) : (((((arr_17 [i_0]) ? var_9 : (arr_5 [i_2]))))))))));
                                var_23 *= min(((min((arr_17 [i_0]), 24))), ((((arr_22 [i_0] [i_1 - 1] [i_2] [i_5 - 1] [2]) ? 24 : 255))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_1] = (((arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) | ((((arr_26 [i_0] [i_1] [i_2]) != 7)))));
                        arr_29 [i_1] [i_1 + 1] = 0;
                    }
                }
            }
        }
        var_24 ^= min((arr_19 [i_0] [i_0] [i_0] [12] [i_0] [12]), (var_14 * 0));
    }
    var_25 = ((((min(65, 0))) ? var_9 : (min(var_0, ((74 ? var_13 : 18))))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_26 = (var_5 * var_3);
                                arr_43 [i_12] = (min((((arr_37 [i_8] [i_10] [i_11]) ? (arr_42 [i_8] [i_9] [i_8] [i_11] [i_9]) : (arr_34 [i_8] [i_8]))), ((min((arr_30 [i_8]), (arr_39 [i_8]))))));
                                var_27 ^= (122 * 0);
                            }
                        }
                    }
                    var_28 += ((!(((((190 ? (arr_42 [i_10] [i_8] [i_8] [i_8] [i_8]) : var_5))) || ((min(var_5, var_5)))))));
                    var_29 = (min(var_29, (((min(-var_5, var_14))))));
                    var_30 = (((arr_30 [i_9]) ? (((!(arr_33 [i_10])))) : (max((((arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_40 [i_8]) : (arr_31 [i_10] [i_8]))), (~4)))));
                    arr_44 [i_8] [i_8] [i_8] [i_8] = ((((0 && (arr_36 [i_8]))) ? ((249 ? 106 : 81)) : ((max(142, var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
