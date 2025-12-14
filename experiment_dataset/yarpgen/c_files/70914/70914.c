/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = ((!(arr_3 [i_0])));
        var_20 = ((var_16 * (max(((min(0, 0))), ((1 ? (arr_2 [7]) : 42))))));
        var_21 = (max(var_21, (((+(((arr_2 [i_0]) ? 23507 : (arr_2 [i_0]))))))));
        var_22 *= ((~(max((arr_1 [i_0]), var_4))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_23 = 21;
                        arr_10 [i_0] [i_1] = -1955357171;
                        var_24 = (arr_7 [i_3]);
                        var_25 = 1;
                        var_26 = 60;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_27 |= (min(((((max(124, 1))) ? 13174157712164602834 : var_10)), (arr_11 [i_4] [i_4])));
        arr_13 [i_4] = ((((min((arr_12 [i_4]), -2112221182))) ? (max((arr_12 [i_4]), (arr_12 [i_4]))) : (arr_12 [i_4])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_28 = (min(var_28, var_11));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_29 = (arr_6 [0] [i_6 + 1] [i_7] [12]);
                                var_30 = (max(var_30, (((max(35491, (arr_14 [13] [13])))))));
                                var_31 = 1;
                                arr_28 [i_9] [i_6] [i_7] [i_6] [i_5] = (arr_19 [i_5] [i_5] [i_7]);
                            }
                        }
                    }
                    var_32 = (max(var_32, 0));
                }
            }
        }
        arr_29 [i_5] = ((-((max((arr_11 [i_5] [i_5]), 1)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_33 = (min(var_33, ((((arr_30 [i_10]) / (arr_31 [19] [i_10]))))));
        arr_32 [19] [i_10] = (((arr_30 [i_10]) ? var_13 : (-119 / 1166045100)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_34 = (((arr_38 [i_13] [i_12] [4] [i_10]) ? 1955357171 : (-16579 - 3)));
                        var_35 -= ((1 ? 8182 : -1054077777));
                    }
                }
            }
        }
        var_36 = (((arr_30 [i_10]) ? (arr_30 [i_10]) : (arr_35 [i_10] [i_10])));
    }
    var_37 = 1;
    #pragma endscop
}
