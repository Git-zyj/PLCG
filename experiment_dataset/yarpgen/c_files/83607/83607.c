/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((max(var_12, -32762))) / (arr_0 [i_0] [i_0]));
                var_20 = 32766;
                var_21 -= ((min(1065353216, (arr_1 [i_1]))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((10 ? ((-531994052 ? var_10 : 32761)) : var_17));
                                arr_15 [i_0] [2] [0] [8] [i_0] [2] [i_0] = (max(var_10, ((((min(var_13, var_0))) ? ((1514958039 / (arr_1 [i_0]))) : ((~(arr_9 [i_0] [1] [i_1] [i_0])))))));
                                arr_16 [i_4] [i_0] [3] [i_2 - 1] [i_1] [i_0] [i_0] = (min((min(var_10, (arr_8 [i_2] [i_0] [i_0] [i_2 - 2]))), var_12));
                                arr_17 [i_0] [i_0] = ((((max((~var_12), -17531))) && (((-((max(4, var_1))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, (((((!16) && var_7))))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_23 = (((!(var_10 || var_16))) || ((min((arr_23 [4] [i_7] [8] [i_5]), (((var_10 && (arr_28 [i_7] [i_6]))))))));
                        var_24 = -17531;
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_33 [i_9] [i_7] [i_6] [i_5] &= ((-(arr_22 [i_7])));
                        arr_34 [i_9] [i_7] [i_6] [i_5] = (((arr_27 [i_5] [i_5] [i_5]) ? var_4 : var_11));
                    }
                    arr_35 [1] [i_6] [i_5] = (max(((0 ? (min(var_11, var_8)) : (var_5 && 1))), (((((max(var_10, var_12))) / (arr_22 [i_6]))))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_25 = (((var_11 < 7984351189260463226) ? (min((((arr_26 [i_5]) + var_17)), (((var_13 + 9223372036854775807) << (((arr_38 [i_5]) - 2590371184)))))) : (((~((max((arr_27 [i_10] [i_10] [i_5]), -32764))))))));
            arr_39 [i_5] [i_5] [i_5] = ((((max((-1683098539 * 7984351189260463226), (var_11 * -11)))) && -var_15));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_26 &= (arr_21 [i_11]);
        arr_42 [i_11] [i_11] = ((~((-17250 ? -106 : -17531))));
        var_27 &= (((arr_40 [2] [2]) * 185));
    }
    #pragma endscop
}
