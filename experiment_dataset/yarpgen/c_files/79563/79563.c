/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~(arr_3 [i_0] [i_0 + 2] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = (max((~828811055663951363), var_9));
                            arr_8 [i_1] = (min(((((!96) && (((var_6 ? var_1 : var_16)))))), (min(var_10, var_2))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_3));

                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_1] |= (min(((((((arr_10 [i_0] [i_0] [i_4]) & var_12))) | ((var_9 ? 3315042790776881667 : var_4)))), (max(var_8, (~var_11)))));
                                arr_16 [i_0 - 3] [i_5] [i_0 - 3] [i_5] [i_0 - 3] = (max((((arr_12 [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [i_0]) + (((arr_6 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_5] [i_4] [i_4] [i_5 - 2] [i_6]) : var_0)))), ((((arr_10 [i_4] [i_4 - 1] [i_4 + 1]) ? (arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2]) : (arr_10 [i_4] [i_4 - 1] [i_4 + 1]))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_20 += 54;
                                arr_19 [i_5] = (((arr_7 [i_7] [i_7] [i_7]) - (arr_13 [i_5] [i_1] [i_4 - 2] [i_1] [i_5])));
                            }
                            for (int i_8 = 1; i_8 < 15;i_8 += 1)
                            {
                                var_21 = (((arr_3 [i_1] [i_1 + 3] [i_1 + 1]) ? (arr_3 [i_1] [i_1 - 1] [i_1 + 4]) : var_1));
                                var_22 = (!-2);
                                arr_22 [i_0] [i_1] [i_0] [i_4] [i_5] [i_8 + 1] = (((((max((-2147483647 - 1), var_4)) == (((!(arr_7 [i_1] [i_4] [i_5])))))) ? (((-((~(arr_9 [i_1 + 3] [i_4 + 1] [i_1 + 3])))))) : ((var_10 ? ((2147483647 ? 15131701282932669949 : var_0)) : -83))));
                            }
                            arr_23 [i_5] = (max(1, (((~var_7) | (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_5]) ^ var_2))))));
                            var_23 += ((max(((var_14 ? var_7 : var_5)), (arr_20 [i_4] [i_4] [i_0 - 3] [i_0] [i_5 - 3] [i_4 + 1] [i_4]))));
                        }
                    }
                }
                arr_24 [i_1] [i_1] [i_1 + 3] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_24 = (max(var_24, var_12));
    var_25 += (min((((!((max(1540918156, var_0)))))), ((~(min(var_6, var_14))))));

    for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_26 = var_11;
        var_27 &= (((((~((min(var_13, var_4)))))) ? (((~var_5) ? ((var_1 ? (arr_12 [i_9 - 3] [16] [i_9] [i_9] [i_9] [i_9 + 1]) : var_6)) : (~var_1))) : (((~(((!(arr_1 [i_9])))))))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((((((var_8 ? var_4 : (arr_4 [i_10 - 1] [i_10] [i_10 - 2])))) ? ((var_7 ^ (arr_4 [i_10] [i_10] [i_10 + 1]))) : (arr_7 [i_10 + 2] [i_10 - 3] [i_10 + 1]))))));
        var_29 = 82;
        var_30 += var_16;
    }
    #pragma endscop
}
