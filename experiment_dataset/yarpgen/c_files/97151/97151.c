/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (var_8 >= (((!((max(var_9, var_6)))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-939524096 ? var_7 : ((((((arr_1 [i_0]) >= (arr_1 [i_0])))) - (((!(arr_1 [i_0]))))))));
        var_12 = (var_4 ? var_4 : -254);
        var_13 = (((((var_9 ? ((2664964778 ? var_9 : (arr_1 [i_0]))) : (~234)))) ? (arr_2 [i_0]) : 21));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = var_9;
                    var_15 = (arr_4 [13]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0 + 2] [21] [i_2] [i_3] = 1;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_17 [i_1] = ((-((234 ? (arr_12 [i_0 - 1] [i_1] [i_1] [i_1]) : (arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])))));
                            var_16 = ((((((~(arr_2 [i_0])))) ? (~var_8) : (arr_8 [i_0] [1] [i_0 + 1] [i_3]))));
                        }

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_17 |= ((var_5 << (((min(159, var_3)) - 133))));
                            var_18 |= (((min((arr_2 [i_0 + 2]), var_8)) != (max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_2] [i_2] = -var_10;
                            var_19 *= ((((-1686774258 ? var_5 : 1)) <= (485895756 << 1)));
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_1] |= (arr_1 [i_1]);
                            var_20 = (!4294967295);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_21 = ((((9 && (arr_0 [i_0] [i_0 + 2]))) ? (max((arr_0 [i_3] [i_0 + 2]), var_0)) : ((((arr_0 [i_0] [i_0 + 2]) || var_10)))));
                            arr_27 [i_0] = (max(31226, (min((1686774257 | var_9), (arr_8 [10] [i_1] [10] [i_3])))));
                        }
                        var_22 = (min(var_22, (((((min(var_9, var_10))) ? (max(var_5, (max(-1, (arr_7 [i_3] [i_1] [i_3] [i_3]))))) : 2)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        var_23 = var_6;
                        arr_30 [i_1] [i_1] [i_0] = -15461083229013823475;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = (max(var_24, (((min(((6 ? var_9 : 1)), 6)) >= 0))));
                        var_25 |= ((32 / ((min(var_0, ((max(var_2, 1))))))));
                        var_26 = ((((((arr_32 [i_0 - 1] [5] [i_2] [i_1] [i_9]) << (var_5 - 403913664)))) ? (arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [1]) : (min(var_7, var_0))));
                        arr_34 [i_9] [i_2] [i_1] [i_0] = ((!(((~var_7) == (var_9 & var_7)))));
                    }
                }
            }
        }
        var_27 = (min(var_27, ((max(-28714, ((34310 ? (arr_2 [i_0 + 2]) : (arr_28 [14] [i_0] [i_0] [7]))))))));
    }
    #pragma endscop
}
