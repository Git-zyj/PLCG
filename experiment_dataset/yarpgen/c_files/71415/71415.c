/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((-703786110 ? ((~(arr_5 [i_1 - 1]))) : ((max(64518, -var_7)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 |= (arr_9 [i_0] [6]);
                    var_19 *= (max((((arr_6 [i_0]) % (arr_4 [i_0]))), (var_14 * var_8)));
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_4] [i_0] [i_0] [i_0] [i_5] &= (((min(((!(arr_12 [i_0] [i_1 + 1]))), ((var_15 || (arr_0 [i_3 + 1]))))) ? var_13 : (((((((arr_8 [i_4] [i_4]) < (arr_1 [7] [7])))) <= (arr_15 [i_0] [i_1 + 1] [i_1 + 1]))))));
                                var_20 = 64518;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_21 *= (((((((((65535 ^ (arr_15 [i_7] [7] [i_0]))) + 2147483647)) << ((((max((arr_19 [i_6] [i_6] [i_3 - 1] [i_1] [i_1] [i_6]), (arr_21 [i_0] [i_0] [i_6] [i_7])))) - 16467))))) ? ((((((arr_0 [1]) & (arr_24 [i_0] [i_6] [i_3])))) ? ((1010 ? 1023 : (arr_1 [i_0] [i_1]))) : 1027)) : ((-28 ? -1 : ((min((arr_24 [i_0] [i_7] [i_0]), -17)))))));
                                arr_25 [16] [i_0] [i_3] = 3;
                                arr_26 [i_0] = min(var_4, -1625285442);
                            }
                        }
                    }
                    var_22 = (arr_10 [i_3 - 1] [i_1 - 1] [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_23 = (max(var_23, (arr_23 [i_8] [i_8] [i_8] [i_8])));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_34 [i_0] [1] [i_0] [i_8] [i_0] = ((var_2 ? (((arr_33 [12] [12] [i_0] [5]) ? 1 : var_3)) : ((-(arr_14 [i_0] [i_0] [i_8] [i_9])))));
                        arr_35 [i_0] = (~64515);
                        var_24 = (min(var_24, (((!((((arr_29 [i_0] [i_1 + 3] [1] [i_9]) ? (arr_4 [i_0]) : (arr_27 [i_0] [i_1] [i_8] [i_8])))))))));
                        arr_36 [i_0] = ((-(~var_3)));
                        var_25 -= (((117 ? 1010 : 64526)));
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_26 ^= ((+(((arr_4 [i_10 + 3]) ? (arr_5 [i_8]) : 1))));
                        arr_39 [i_0] [1] [i_0] [i_8] [i_0] = (!var_16);
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_27 = (max(var_27, ((((arr_3 [i_0]) / ((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) && 14749749135533523550))))))));
                        var_28 = (arr_33 [i_8] [i_1] [1] [i_11]);
                        var_29 ^= (arr_5 [i_0]);
                    }
                }
                var_30 *= (((arr_2 [3]) <= ((((!((((arr_4 [i_1]) ? (arr_38 [10] [0] [10] [i_1 + 3] [i_1]) : var_6)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 2; i_12 < 9;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 8;i_14 += 1)
            {
                {
                    arr_51 [i_13] [i_13] [i_13] = (arr_10 [i_12] [i_13] [i_14]);
                    var_31 *= (arr_44 [i_12] [i_12]);
                    var_32 = ((+((((((arr_43 [1]) ? 1027 : (arr_41 [i_12])))) ? (4290772992 / var_9) : 1))));
                    var_33 = (-1 & var_3);
                }
            }
        }
    }
    #pragma endscop
}
