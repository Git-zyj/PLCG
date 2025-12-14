/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_10 + 2147483647) >> ((((var_5 - var_11) >= var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [15] = (((75 ? 6824257021918083470 : 268435455)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (arr_6 [i_2 - 1] [i_2 + 1]);
                    arr_7 [i_0] [i_1] [i_2] = ((((!(arr_0 [i_0]))) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) : ((var_0 ? var_2 : (arr_4 [i_0] [18] [i_2])))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 -= (((arr_5 [i_3] [10] [8] [i_0]) ? (var_0 & var_12) : (arr_4 [i_3] [i_0] [i_0])));
                        var_17 = ((-134217728 ? var_9 : 0));

                        for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_18 = (((!(arr_8 [i_0] [i_0] [i_4] [i_3]))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] |= (((arr_11 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) <= var_7));
                            var_19 -= (((arr_9 [i_4 + 1] [i_4] [i_4] [i_4] [i_4]) ^ (arr_5 [i_2 - 1] [i_4 - 1] [i_4 + 1] [i_4])));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_20 = (((var_1 ? (arr_13 [i_0] [1] [1] [i_3] [1]) : var_5)));
                            var_21 *= ((var_0 ? 6824257021918083470 : (((var_9 ? 2040 : (arr_11 [i_0] [i_0] [i_2] [14] [i_5]))))));
                            var_22 = (((arr_13 [i_0] [0] [i_0] [i_0] [i_0]) - ((-(arr_14 [17] [17] [i_5 + 1] [i_3] [i_1] [16])))));
                        }
                        var_23 = (arr_13 [i_0] [i_0] [i_2] [i_0] [i_2]);
                        var_24 = ((var_6 > (arr_9 [i_0] [i_1] [14] [i_3] [i_3])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        var_25 = ((((-(arr_22 [i_8] [i_6] [7] [i_0] [i_6] [i_0]))) ^ (~2)));
                        var_26 = (((~var_0) ? (arr_4 [i_0] [i_0] [i_0]) : (var_7 < var_12)));
                        arr_23 [6] [i_6] [i_7 + 2] [i_0] [i_8] |= var_6;
                        var_27 = ((-(arr_16 [i_7 - 1])));
                    }
                }
            }
        }
        var_28 *= (arr_11 [i_0] [8] [1] [i_0] [i_0]);
    }
    #pragma endscop
}
