/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_1] &= (((((~(arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_2])))) ? ((((~(arr_2 [i_0] [i_1]))) >> ((((var_10 ^ (arr_8 [3] [2] [i_2] [i_2 - 4] [3]))) - 45728)))) : ((~((var_12 ? var_3 : (arr_7 [i_0] [i_1] [i_2] [i_3])))))));
                        var_19 -= ((var_12 - ((((17 ? 25174 : (arr_3 [10] [i_1] [i_0 + 1])))))));
                        arr_10 [i_3] = ((!(~-13047)));
                        var_20 = ((((((-(arr_5 [i_1] [i_3]))))) ? (((0 ? (arr_1 [i_0]) : var_0))) : var_12));
                        var_21 = (((!1) || (((min(0, var_9))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_22 = (arr_6 [i_0] [i_0] [i_1 - 2] [i_4] [i_5] [i_5 - 1]);
                            var_23 = (((-8 / (arr_6 [i_0 - 1] [i_1 - 2] [i_2 + 1] [i_4] [i_5 + 1] [i_5 - 1]))));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_2 - 3] [i_4] [i_2 - 3] [12] [i_0 + 1] = ((((((var_0 ? 2244483875450891321 : var_13)) >> (((arr_16 [i_0 - 2] [1] [i_2] [1] [i_0 - 2]) - 24453)))) < (arr_13 [i_0 - 2] [i_1] [i_2 - 3] [i_4] [i_0 - 2] [i_6])));
                            var_24 = (max(var_24, (((((arr_16 [i_6] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 1]) || (arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) ? ((min((arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]), (arr_5 [i_1 + 1] [i_2 - 3])))) : (((29850 && (arr_5 [i_1 - 1] [i_2 - 4]))))))));
                            var_25 = ((min(((min(-13, var_10))), (~var_0))) | ((76 | ((var_0 ? (arr_1 [i_6]) : 65534)))));
                            var_26 -= var_18;
                        }
                        arr_19 [i_0] [15] [i_2] [i_4] = ((-((8629 ^ (arr_15 [i_0 + 1] [i_1 - 2] [i_2 - 3] [i_2 + 1])))));
                        arr_20 [i_4] [3] [3] [i_0] = var_3;
                        arr_21 [i_0] [i_1] = ((+(min((arr_1 [i_4]), ((var_1 / (arr_4 [i_4] [i_2] [i_1] [i_0])))))));
                    }
                    var_27 = (max((max((min(37628, (arr_14 [i_0] [16] [i_0 - 2] [i_0] [i_1 + 1] [i_1 + 1]))), (((arr_2 [i_0 - 1] [i_0 - 1]) ? 10624 : var_6)))), (((~(~17983))))));
                    var_28 -= (~37628);
                    arr_22 [i_0] [i_0] [i_0] &= min(((min((arr_2 [i_1 - 1] [i_0 - 2]), 35698))), 37628);
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_29 = var_10;
                    arr_26 [13] = ((var_12 ? (arr_14 [i_0] [i_0 - 3] [i_0 - 3] [7] [0] [i_0]) : (arr_14 [i_0 - 2] [i_0 - 3] [i_1] [i_7] [i_0 - 2] [i_7])));
                }
                for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_30 = (max((((!(arr_27 [i_0 + 1] [i_0 - 1] [i_1 - 1])))), (arr_24 [i_0] [i_0] [i_0 - 3])));
                    arr_30 [i_1] [16] = (((11 >> 20) ? ((var_12 ? (arr_3 [i_8 + 1] [i_0 + 1] [i_0]) : var_7)) : ((min(var_8, (arr_3 [i_0 - 1] [i_0 - 1] [i_0]))))));
                    arr_31 [i_1] [i_8] = ((!(((38 ? var_6 : (arr_6 [i_1 - 1] [i_8] [i_1 - 1] [i_1] [i_0] [i_0]))))));
                }
                arr_32 [i_0] = var_11;
            }
        }
    }
    var_31 = (max(var_31, ((((((var_4 ? var_12 : var_13) / var_5)))))));
    #pragma endscop
}
