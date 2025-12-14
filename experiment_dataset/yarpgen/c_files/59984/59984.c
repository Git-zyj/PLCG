/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = -19540;

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] |= (max((((max(-19540, (arr_1 [i_1 + 1]))))), (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                    var_16 = (((-127 - 1) / 251));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (arr_1 [i_1 - 1]);
                                var_18 -= (((((((max(var_12, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 1 : (!-19540)))) ? (min((arr_9 [i_1] [i_2] [i_3] [i_4]), (((arr_9 [i_0] [i_1] [i_2] [3]) ? (arr_7 [i_0] [i_0] [i_0]) : -19551)))) : ((+((min((arr_12 [i_0] [i_3]), -16741)))))));
                                var_19 = (arr_2 [i_0] [i_2]);
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((((max(-2122521431, var_11))) ? ((min((arr_0 [i_0]), -21189))) : (max(-1, var_10))));
                                var_20 += ((84 ? -3677 : -13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((max(((max((arr_12 [i_0] [i_0]), (arr_12 [i_6] [i_2 - 3])))), (max((arr_22 [i_0] [5] [i_2] [i_5] [i_6]), (arr_22 [i_0] [i_1] [i_2 - 2] [i_5] [i_6]))))))));
                                arr_23 [i_0] [i_1 + 2] [i_6] [i_5] [i_6] [i_6] = var_13;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_7] [i_0] [i_7] |= ((((((var_4 ? (arr_1 [i_0]) : 113)) | ((~(arr_22 [11] [i_1 + 2] [i_7] [i_7] [1]))))) > (arr_30 [i_1 - 1] [i_1 + 2] [i_7] [i_7] [i_8])));
                        arr_32 [i_0] [i_0] [i_7] [i_8] |= (min(((((max(var_12, (arr_19 [i_0] [16] [i_1] [i_8] [i_7] [i_1])))) ? -22599 : (241 != 17001))), ((max((arr_14 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8]), (arr_14 [i_0] [i_0] [i_7] [i_8] [i_7] [i_7]))))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_22 = (((arr_4 [i_0] [i_0] [i_0]) ^ ((max((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_9]), var_4)))));
                        var_23 *= ((253 ? 166 : -14));
                        var_24 = ((((-((max(-21189, 75))))) ^ var_1));
                    }

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_37 [i_0] [i_1 + 1] [21] [i_7] [i_10] |= (max((((arr_20 [i_1 - 1] [i_10]) ? (arr_20 [i_1 - 1] [i_10]) : var_8)), (arr_20 [i_1 - 1] [i_7])));
                        var_25 += max((((arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_10]) ? var_9 : (arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_10]))), (((arr_13 [i_1] [i_1 + 1] [i_1 - 1] [0] [i_1]) ? var_4 : (arr_13 [6] [i_1 + 1] [i_1 + 2] [11] [11]))));
                        var_26 = ((((~(1051 || -32767))) ^ (8955 + 6)));
                        var_27 = (((arr_10 [i_10] [i_7] [i_1] [i_0] [i_0]) ? var_10 : -86));
                        var_28 = arr_33 [i_10] [i_7] [i_1] [i_0];
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_29 -= (((~(min(0, var_5)))));
                        var_30 = (max(var_30, (((((max((min(32756, (arr_34 [i_0] [i_0] [i_0] [i_0]))), (arr_6 [i_0] [i_1 + 1])))) ? ((192 ? (min(82, var_13)) : ((max(27501, -1))))) : (max(var_7, (((arr_35 [i_11] [i_7] [i_1] [i_0]) ? -37 : var_5)))))))));
                        arr_40 [i_0] [i_1] [i_1] [i_11] [i_11] = ((!(((((arr_34 [i_0] [i_0] [i_0] [15]) ? (arr_0 [i_7]) : (arr_38 [i_0] [i_1 - 1] [i_7] [i_11] [i_11] [i_7])))))));
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_31 += ((min(84, 22569)));
                    arr_44 [7] [i_1] [i_0] [i_1 - 1] = min((arr_21 [i_0] [i_0] [i_1] [i_12] [i_12]), (((arr_21 [i_0] [i_0] [i_0] [i_12] [i_0]) | (arr_21 [i_0] [i_0] [i_1] [i_12] [i_12]))));
                }
            }
        }
    }
    var_32 = (min(var_14, (min(((max(var_9, 255))), var_10))));
    var_33 *= 248;
    #pragma endscop
}
