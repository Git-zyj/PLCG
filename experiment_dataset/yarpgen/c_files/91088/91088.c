/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(1, 218));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = var_0;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 += ((((min(37, ((16 ? 218 : (arr_2 [i_0] [i_1] [i_1])))))) ? ((max((arr_0 [i_1]), (arr_0 [i_1])))) : (arr_1 [i_1])));
            var_14 = (max(var_14, ((max((max(var_5, ((max((arr_0 [i_1]), var_3))))), (((var_6 ? (arr_0 [i_1]) : var_8))))))));
            arr_4 [i_0 - 1] [i_1] [16] &= (max((((!((max(232, 2180213511)))))), ((232 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [i_0] = (arr_3 [i_0]);
            var_15 *= ((~(arr_1 [12])));
        }
        var_16 += (max((max(-883217154, ((min((arr_2 [i_0] [i_0] [i_0 - 1]), 215))))), ((((((arr_3 [18]) ? var_6 : var_0)) == (arr_3 [0]))))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_4] [i_5] = var_6;
                    var_17 = (min(var_17, var_9));
                    var_18 *= ((~(~var_3)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 += (arr_10 [i_3 + 2] [i_3 + 1]);
                                var_20 -= ((max(-8710007352712275142, 185)));
                                var_21 &= min(((var_1 ? (arr_8 [i_3 + 3] [i_4]) : (arr_8 [i_3 + 2] [i_3]))), (((!(max(1, var_4))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 += ((((min((arr_5 [i_3] [i_3 + 3] [i_3 - 1]), 1))) ? var_7 : (max((arr_13 [i_3 + 1] [i_3] [i_3] [i_3]), var_5))));
        var_23 = (max(0, (arr_15 [i_3] [i_3] [8] [i_3 + 3])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    arr_28 [i_3] [i_3 + 1] [i_8] = (max((max((arr_14 [i_8]), (arr_25 [i_3] [i_3] [i_8]))), (max(0, (arr_25 [i_3] [i_3] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_24 = ((max(232, 218)));
                                var_25 = (min((~16), 91));
                            }
                        }
                    }
                    var_26 -= var_4;
                    var_27 = ((((~(arr_0 [i_8])))) ? ((~(arr_0 [i_8]))) : (min((arr_0 [i_8]), (arr_0 [i_8]))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_28 &= var_3;
        var_29 = var_1;
    }
    var_30 = var_10;
    var_31 = 166;
    var_32 |= ((-((-1086359399 ? 0 : 1))));
    #pragma endscop
}
