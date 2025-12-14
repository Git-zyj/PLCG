/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_8 ? var_2 : var_1))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = ((var_8 ? (arr_1 [i_0] [i_0]) : ((-((-(arr_0 [11])))))));
        var_16 = (max(var_16, (((-(!var_14))))));
        var_17 = arr_0 [i_0 - 1];
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = (arr_4 [i_1]);
                    var_19 = 764910743;

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_20 = ((-((-(arr_8 [i_1] [i_1 - 1] [i_1] [i_1])))));
                        var_21 = (arr_7 [i_1]);
                        var_22 = ((~(!var_14)));
                    }
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        var_23 = (((~var_1) ? (((!(arr_11 [i_1 + 1] [i_2] [6] [i_3] [10])))) : (((!(arr_7 [i_3]))))));
                        var_24 -= var_10;
                        var_25 -= ((-(arr_10 [i_1] [i_2] [i_3 + 1] [i_3] [i_5 - 2])));
                    }
                    var_26 = ((!(((var_14 ? var_5 : var_4)))));
                }
            }
        }
        var_27 = (~var_8);
        arr_15 [i_1] [i_1] = ((var_12 ? var_6 : (arr_9 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1])));
        arr_16 [i_1] [11] = (~var_0);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = ((~((-(arr_17 [i_6] [i_6])))));
        var_28 = (arr_17 [i_6] [i_6]);

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_23 [i_6] [i_7] [i_7] = (arr_17 [i_7] [i_7]);
            arr_24 [i_7] [i_7] = ((((!(((~(arr_18 [i_7]))))))));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_27 [i_6] [i_7] = ((~((((!(arr_17 [i_7] [i_7]))) ? ((((!(arr_25 [i_6] [i_7]))))) : ((var_7 ? (arr_21 [i_6] [i_7]) : var_1))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_33 [18] [i_7] [18] [i_7] [i_7] [i_9 - 1] [18] |= (((~((var_2 ? var_8 : (arr_25 [8] [8]))))));
                            var_29 |= var_13;
                            arr_34 [i_6] [i_6] [i_6] [24] |= ((~(~var_4)));
                        }
                    }
                }
                arr_35 [i_7] [i_6] = (arr_26 [i_6] [i_7] [i_6]);
                var_30 = ((+((+(((arr_32 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] [15]) ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_21 [i_6] [i_8])))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_31 = ((~((var_7 ? ((var_13 ? var_5 : (arr_36 [i_6] [i_7] [i_8] [i_12]))) : var_3))));
                            var_32 = ((900660248 ? 3042971842 : 169));
                            arr_40 [i_6] [i_7] [i_8] [i_11] [i_7] = (((arr_17 [i_7] [i_7]) ? ((~(arr_32 [i_6] [i_7] [i_8] [20] [i_11] [i_11] [i_12]))) : (!var_12)));
                        }
                    }
                }
            }
            var_33 = ((!((((!var_10) ? (arr_21 [i_6] [9]) : ((((!(arr_25 [i_6] [i_7]))))))))));
        }
        var_34 -= ((((var_1 ? (((arr_21 [i_6] [i_6]) ? var_4 : var_12)) : (arr_25 [i_6] [12])))) ? -var_3 : ((((~var_7) ? (~var_0) : (~91)))));
        var_35 = (!2680707619);
    }
    var_36 = (min(var_36, (~var_5)));
    #pragma endscop
}
