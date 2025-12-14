/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_12 = var_5;
                    arr_8 [i_0] = 234;
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_13 = ((((((var_7 & (arr_7 [i_0] [i_0] [i_1 + 2] [i_3 - 1])))) ? (((min((arr_6 [i_1 + 2] [i_1]), var_3)))) : ((var_7 % (arr_7 [i_0] [i_0] [i_3 + 1] [i_0]))))));
                    var_14 = (max(var_14, ((-(((((arr_2 [5] [i_1 - 1]) != (arr_1 [i_0]))) ? ((min(0, -6))) : var_9))))));
                    arr_12 [i_0] [i_0] [i_0] = (min((((~var_8) << ((((var_1 ? 13028390711988249297 : 2265580135)) - 2265580117)))), (((+((var_3 ? (arr_1 [i_3 - 1]) : (arr_5 [i_0] [i_0]))))))));
                    arr_13 [i_0] [i_0] [i_0] = (((((var_8 ? ((min((arr_5 [i_0] [i_0]), var_10))) : (min(22, 5418353361721302336))))) ? ((var_6 << (((arr_0 [i_3 + 1] [i_3 + 1]) - 4225385655706941436)))) : ((((max(7235540463128919166, 32))) ? 1925058673 : (arr_3 [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_0] [i_3 - 1] [16] [i_0] [i_0] = (((var_6 - var_6) < ((~(~var_3)))));
                                arr_20 [i_0] = (((((arr_15 [i_0] [i_0] [i_1 + 3] [i_4] [i_3 - 1] [3]) | (arr_15 [i_0] [i_0] [i_1 - 1] [i_4] [i_3 + 1] [i_4]))) ^ (~6787)));
                                var_15 &= (((~0) - 9223372036854775807));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_6 + 3] = ((var_6 << (arr_25 [i_6 - 1] [i_0] [i_1 + 3] [i_0] [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [i_0] = (~-75);
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? 2305843009213693951 : var_5));
                    }
                    var_16 = (min(var_16, ((((arr_18 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 3] [i_6]) ? ((var_8 ? 18051228818802295942 : 38)) : (arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]))))));
                }
                arr_30 [i_0] = ((((-6793 ? 3131426880 : 2029387149)) << (-7235540463128919159 - 110)));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_33 [i_8] [i_8] &= (((arr_21 [1] [i_8] [i_8]) - -78));

        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            var_17 ^= ((~((1 ? 0 : 0))));
            arr_37 [i_8] [3] = ((~(((arr_26 [i_8] [i_8] [i_9 + 1] [9]) * var_3))));
        }
        arr_38 [i_8] = ((arr_3 [i_8]) >= (!var_0));
        arr_39 [i_8] = (-6788 ? (arr_16 [i_8] [i_8]) : (arr_0 [4] [4]));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        var_18 -= ((((min((~3), var_7))) ? ((((-(arr_40 [i_10]))) << (((arr_42 [i_10] [i_10]) - 94)))) : (((7 ? (((min((arr_42 [i_10] [i_10]), (arr_42 [i_10] [13]))))) : var_4)))));
        var_19 = ((((((((arr_42 [1] [1]) ? -40 : var_9))) ? var_0 : (((arr_41 [i_10]) ? 231 : var_8)))) - (arr_40 [i_10])));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_40 [i_11]) ? (~-309582546760131087) : ((~(arr_40 [i_11]))))))));
        arr_46 [i_11] [i_11] |= ((((max(3241900492, -46))) <= (((max(var_3, (arr_45 [i_11]))) % (((var_3 ? var_7 : var_6)))))));
        var_21 = (min((arr_40 [i_11]), var_5));
        arr_47 [15] = (arr_42 [i_11] [i_11]);
    }
    #pragma endscop
}
