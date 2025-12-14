/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((~((~(arr_1 [i_1] [i_0 - 1])))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = max(32, (((((max((arr_3 [i_0] [i_1] [i_0]), (arr_4 [i_0] [7])))) < (arr_8 [i_0 - 1] [i_0 - 1] [14] [14] [i_0] [i_0])))));
                        var_15 = ((-((((max((arr_7 [i_3]), (arr_3 [i_0 - 1] [i_1] [i_2])))) * var_7))));
                    }
                    var_16 = arr_4 [5] [i_2];
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_17 = var_8;
                        var_18 = ((((max(-45, (arr_9 [i_0]))))));
                        var_19 = (max(var_19, ((min(((((max((arr_10 [i_5] [i_0] [i_0]), var_12))) ? var_2 : (arr_12 [i_0] [i_0] [10] [i_0] [i_0 - 1] [i_0]))), var_3)))));
                    }
                    arr_14 [i_4] = (arr_6 [i_0 - 1] [i_0 - 1] [3]);
                }
                var_20 *= (max((arr_13 [i_0]), (~var_2)));
                var_21 = (arr_2 [1] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    var_22 = -var_7;
                    var_23 = ((+(((arr_18 [i_6]) * var_6))));
                    var_24 = (max(var_24, (((~(((arr_19 [i_8]) ? (arr_23 [0] [i_7] [i_6] [i_6]) : var_2)))))));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_26 [i_6] [i_6] [i_6] [15] = (((((!(arr_17 [i_9]))) ? var_9 : (arr_24 [i_6] [i_6]))));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_25 = (((((arr_18 [i_10]) ? (arr_28 [i_10] [i_9] [i_7] [i_6]) : var_9)) & -4654));
                        arr_29 [i_6] [i_7] [i_9] [i_9] = var_6;
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_36 [i_12] [i_7] [i_11] = ((((min(var_2, 23468)) << ((((var_10 ? var_2 : -56)) - 3339784038)))));
                            var_26 = ((((~(arr_33 [i_6] [i_6] [i_6]))) <= ((max((arr_33 [i_7] [i_11] [i_12]), (arr_33 [i_11] [i_6] [i_6]))))));
                            arr_37 [i_12] [i_12] [i_6] [i_7] [i_7] [i_12] [i_6] = (arr_21 [i_6] [i_11]);
                        }
                        var_27 *= ((((var_1 * (arr_35 [i_6] [i_6] [i_6] [i_6] [i_6]))) <= (min((max((arr_28 [i_7] [i_9] [i_7] [i_6]), var_2)), (arr_28 [3] [6] [i_9] [i_11])))));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_28 = (max(var_28, (((((!(arr_23 [i_7] [i_7] [i_7] [i_13]))) && var_7)))));
                            arr_40 [i_6] [i_6] [i_6] [i_6] [16] [i_6] = ((-var_10 & ((var_8 ? var_2 : (-9223372036854775807 - 1)))));
                            var_29 = var_3;
                            var_30 = (((arr_27 [3]) ? (arr_27 [i_13]) : var_0));
                        }
                    }
                    var_31 = (((((~(arr_35 [i_9] [i_6] [i_7] [i_7] [i_6])))) ? ((((arr_35 [i_6] [i_6] [i_9] [i_6] [10]) < var_2))) : ((~(arr_35 [i_9] [i_7] [1] [i_6] [i_6])))));
                    var_32 = (~var_9);
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_33 = (max(var_33, ((((((arr_38 [i_14] [i_14] [i_7] [i_6] [i_6]) < var_7))) >= (((arr_35 [i_6] [i_14] [i_14] [1] [i_14]) ? (arr_38 [i_6] [i_6] [i_6] [i_7] [i_7]) : (arr_38 [8] [i_7] [i_7] [i_6] [i_6])))))));
                    var_34 = max(var_7, (max((arr_22 [i_6]), (((var_0 >= (arr_28 [i_6] [i_6] [i_7] [i_14])))))));
                    var_35 = ((((var_6 ? (arr_33 [i_6] [i_6] [i_6]) : var_6))));
                }
                arr_43 [i_6] [i_6] = (min((max((((arr_39 [i_6] [9] [i_6] [4] [i_7] [i_6]) ? var_0 : var_0)), (!var_1))), (((!(arr_15 [i_7]))))));
                var_36 |= ((var_4 && ((((arr_38 [i_6] [i_6] [i_6] [i_7] [i_7]) - 36)))));
            }
        }
    }
    var_37 = (((var_6 ? var_11 : var_12)));
    var_38 = var_12;
    #pragma endscop
}
