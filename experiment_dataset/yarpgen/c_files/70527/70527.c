/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = -var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = ((((((arr_8 [i_2] [i_3 - 1] [i_2] [i_2]) ? (arr_8 [i_0] [i_3 + 1] [i_2] [i_3]) : (arr_8 [5] [i_3 + 2] [i_3 + 2] [5])))) ? ((max((arr_8 [i_0] [i_3 - 1] [i_0] [7]), (arr_8 [i_0] [i_3 - 1] [2] [i_3])))) : ((-(arr_8 [i_0] [i_3 + 2] [i_2] [i_3])))));
                                arr_11 [i_1] = ((((-(arr_7 [i_3 + 3]))) / (arr_7 [i_3 + 3])));
                                arr_12 [i_0] [i_1] = ((((((((arr_4 [i_1]) & var_7))) ? (arr_8 [i_4] [i_4] [i_3 + 3] [i_3 + 2]) : (var_9 < var_15))) > (131071 || 19)));
                                arr_13 [24] [i_3 + 3] [i_2] [i_1] [24] = ((((!((max(var_14, (arr_2 [i_2]))))))));
                                arr_14 [i_0] [i_4] &= (((-(arr_6 [i_3 - 1] [i_3] [i_3 + 2] [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_5] = ((((min(var_4, ((max((arr_18 [i_5] [i_5]), (arr_1 [i_5]))))))) ? ((((arr_15 [i_6]) >= (min(2687618278, (arr_2 [i_5])))))) : (-37 + -36)));
                var_22 = (((arr_6 [i_5] [i_6 - 3] [i_5] [i_6 - 3]) ? (!var_15) : (max(var_12, (((arr_5 [i_5] [i_6] [i_6] [i_6 - 1]) / var_2))))));

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, 1));
                                var_24 = ((2147483647 ? (arr_22 [4]) : ((((arr_2 [i_6 - 1]) != (max((arr_20 [i_5] [i_5] [i_5]), var_1)))))));
                                arr_27 [i_5] [i_6 - 1] [i_7] [i_7] [i_5] &= var_15;
                                var_25 = ((!((((((arr_2 [i_5]) == 17572280368251166641)) ? (~3126853857) : ((77 ? 874463705458384983 : 39)))))));
                                var_26 = (min(var_26, ((max((arr_2 [i_7]), -var_6)))));
                            }
                        }
                    }
                    arr_28 [i_7] [i_6] [i_7] = -6;
                    var_27 &= max((arr_5 [i_6 + 1] [i_6 - 3] [i_5] [i_6]), ((~(arr_5 [i_6 + 1] [i_6] [22] [i_6 + 1]))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_28 = (0 ? var_8 : ((max(-36, (arr_25 [i_11] [i_7])))));
                                var_29 = ((-((~(((arr_30 [i_5] [i_6] [i_6] [i_11]) ? var_4 : (arr_16 [i_5])))))));
                            }
                        }
                    }
                    var_30 = (max((var_8 + var_16), ((var_8 ? (arr_30 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 3]) : (arr_29 [i_7] [1] [i_6 - 3] [i_7] [i_7] [17])))));
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    var_31 = (max(var_31, ((-(((((-(arr_37 [i_12 + 3] [i_12 + 3] [0])))) ? ((var_17 + (arr_21 [i_5] [i_5] [i_12]))) : (arr_35 [i_5])))))));
                    var_32 = (((!((max(var_2, var_10))))) ? ((((max(31, 16))) ? 2356643927 : 255)) : var_6);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 15;i_15 += 1)
            {
                {
                    var_33 = (max((max(((max((arr_42 [i_13] [i_14] [i_15]), var_17))), (max(var_5, (arr_42 [i_13] [i_13] [i_15]))))), (((!(((63 ? (arr_8 [22] [i_14] [i_15 + 3] [i_15 + 3]) : (arr_41 [i_13] [i_14] [i_13])))))))));
                    var_34 &= ((((((arr_38 [i_14]) ? (arr_3 [i_13] [i_13] [i_13]) : (!var_17)))) ? 1810304076 : (((arr_8 [i_15] [i_15 - 1] [i_15] [i_15 + 4]) ? (arr_8 [i_15 + 4] [i_15 - 1] [2] [i_15 - 1]) : (arr_8 [i_15 + 2] [i_15 - 1] [i_15] [i_15])))));
                    var_35 = (!((((arr_1 [i_15 + 4]) ? (arr_1 [i_15 + 1]) : (arr_1 [i_15 + 3])))));
                    var_36 = (min(var_36, (arr_3 [i_15 + 4] [i_15] [i_15 + 3])));
                }
            }
        }
    }
    #pragma endscop
}
