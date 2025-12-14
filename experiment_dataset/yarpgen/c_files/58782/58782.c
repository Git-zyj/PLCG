/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_14 ? (((var_13 ? 780406146 : var_2)) : var_10))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 += ((+((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((~(arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((arr_4 [i_1]) << (((arr_4 [i_1]) - 4002496073528294546)))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = (780406148 - var_14);
            var_18 += var_7;
            var_19 = (min(var_19, 1));
            var_20 |= var_0;
            var_21 = (min(var_21, ((((((13893189571697606804 ? var_7 : (arr_6 [i_1])))) ? (arr_0 [i_2] [i_2]) : ((4553554502011944811 ? var_2 : (arr_5 [i_1] [4] [i_1]))))))));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_22 = (((arr_19 [i_4 - 1] [i_3] [i_4 - 1] [i_3 - 2]) | (0 ^ -5)));
                            var_23 = var_13;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] = 13870342622458545166;
                            arr_25 [i_3 - 3] [i_3 - 3] [i_5] = var_14;
                            var_24 = ((arr_22 [i_4 + 1] [i_4] [i_4 + 1] [16] [i_4] [i_4 - 1] [i_4 + 2]) ? (arr_11 [i_3 - 3]) : (arr_14 [i_3 - 1] [i_4 + 1] [i_4 + 2] [i_5]));
                            arr_26 [1] [i_5] [7] [i_4] [i_3 - 3] [i_1] = (arr_20 [0] [i_4]);
                            var_25 = (min(var_25, (arr_10 [i_5])));
                        }
                        arr_27 [i_5] [i_4] [i_3] [i_4] [i_3] [i_1] = 13893189571697606822;
                        arr_28 [i_1] [i_3] [i_4] [i_1] = 18;
                        var_26 ^= arr_15 [i_1] [i_3] [i_1] [i_5];
                        var_27 -= (((((48 ? 4294967295 : -42))) ? ((~(arr_16 [i_1] [i_5]))) : ((((arr_20 [6] [4]) ? var_2 : -81)))));
                    }
                }
            }
            arr_29 [i_3] = var_13;
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            arr_32 [i_8] = (arr_31 [i_8]);
            var_28 = (max(var_28, var_13));
        }
        var_29 = (arr_0 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_41 [i_1] [i_9] [i_10] [i_11 - 2] = ((9223372036854775807 / (arr_12 [i_1] [i_1])));
                        var_30 = ((+(((arr_17 [i_1] [i_1] [i_10] [i_11 - 3]) ? var_8 : 3907241729881629062))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            arr_49 [14] [i_13 + 1] = 81;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_31 = 37;
                            var_32 -= ((var_10 | (arr_12 [i_15 + 3] [i_15])));
                        }
                    }
                }
            }
            var_33 = var_7;
            var_34 -= max(((var_7 ? ((var_4 ? var_12 : var_14)) : 4294967295)), ((((((var_0 ? (arr_37 [1] [i_13] [i_13]) : (arr_53 [i_12] [i_13])))) ? (arr_52 [i_13 - 2] [i_13 + 1]) : (((!(arr_55 [i_12] [14] [i_12] [i_12] [1]))))))));
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_35 = (max(var_35, (((+(max((arr_39 [i_12] [i_12] [i_12] [i_17] [2] [12]), (((0 ? var_14 : var_14))))))))));
            var_36 = var_2;
            arr_62 [4] [i_17] = (arr_17 [i_12] [i_17] [i_12] [i_12]);
        }
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            arr_65 [i_18] = (((arr_64 [i_18]) ? var_9 : (((arr_38 [i_12] [i_12] [i_12] [i_18] [i_18]) ? (~780406147) : (max(var_1, 100))))));
            var_37 -= ((((max(14951125480527501762, ((min(-5205951977438747866, (arr_47 [i_12] [8] [7]))))))) ? -2324452933076132140 : ((max((max(var_2, (arr_16 [i_12] [i_18]))), (((92 || (arr_4 [i_12])))))))));
        }
        arr_66 [1] |= ((+(((arr_38 [11] [i_12] [4] [i_12] [16]) ? (arr_38 [17] [9] [i_12] [i_12] [i_12]) : (arr_38 [4] [i_12] [i_12] [i_12] [i_12])))));
    }
    #pragma endscop
}
