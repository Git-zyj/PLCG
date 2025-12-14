/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_2 != var_5) / var_16));
    var_18 = ((-1 ? var_14 : (((var_16 + var_7) ? var_15 : var_11))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = (max(var_7, (((!var_3) != (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 - 1] [i_3] = var_13;
                                var_19 = ((3736382331 ? var_1 : 11270));
                                arr_17 [16] [i_0] [i_1] [i_2] [i_3] [i_4 - 3] = max((((arr_0 [i_1 + 1]) >> (((arr_11 [i_4 - 3] [i_1 + 1] [i_0]) - 47)))), ((~((var_4 ? -39 : (arr_11 [15] [15] [15]))))));
                            }
                        }
                    }
                    var_20 = ((((arr_11 [i_0] [i_1 + 1] [i_2]) ? (arr_11 [i_0] [i_0] [i_2]) : 255)));
                }
            }
        }
        var_21 -= (arr_2 [i_0]);

        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_22 = ((var_14 ? var_11 : (arr_14 [i_0] [i_5 + 3] [14] [i_7] [i_8] [i_0])));
                            arr_29 [i_6] = (((min((arr_21 [1] [i_5] [i_5]), (max(var_16, (arr_9 [i_0] [i_5] [i_6]))))) != (arr_3 [i_0] [i_0])));
                        }
                    }
                }
            }
            var_23 = var_1;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_36 [12] [i_5] [12] [i_5] [i_5 + 1] = (max((((533632999 ? (((!(-9223372036854775807 - 1)))) : (arr_10 [12] [12] [12])))), (max(var_15, (-32767 - 1)))));
                            var_24 = ((((((max(var_14, 32767)) != (arr_20 [i_11])))) / var_4));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_25 = (((arr_12 [i_0] [i_0] [i_12] [i_0] [i_0] [i_12]) > var_8));
            var_26 = (max((min(var_6, (9223372036854775807 ^ 23761))), (((!((min(91, 15600125250196657968))))))));
            arr_41 [i_0] [i_12] [i_0] = ((-var_11 ? var_0 : (((arr_12 [i_0] [i_0] [i_0] [i_12] [i_0] [10]) ? (arr_12 [i_12] [i_12] [i_0] [i_0] [i_0] [i_0]) : var_12))));
            arr_42 [i_12] [13] = ((max((arr_37 [4] [i_12]), var_15)));
            var_27 = ((!((max(8342311571636091212, 0)))));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_28 *= 1140662378;
            arr_45 [i_13] [i_13] = ((+(((!(((-75 ? (arr_35 [i_0] [i_0] [i_0] [i_0] [8] [i_0] [i_0]) : (arr_39 [i_13])))))))));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_49 [i_0] [8] [i_14] = ((((95 / (-9223372036854775807 - 1)))) << (((arr_15 [i_0] [4] [i_0] [i_0] [i_14] [i_0] [i_0]) - 1040314486)));
            var_29 = var_1;
            arr_50 [i_14] = ((((var_1 ? (((var_10 ? 38 : var_7))) : ((var_3 ? var_3 : (-32767 - 1))))) % -32767));
        }
    }
    #pragma endscop
}
