/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = (arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = ((arr_5 [1] [i_1] [i_0]) ? 0 : var_3);
                                var_15 = (min((((arr_11 [i_0] [i_0] [i_3] [i_4 + 1]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_11 [i_0] [i_1] [i_0] [i_0]))), ((~(arr_11 [i_0] [i_0] [i_3] [i_4 - 2])))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_4] = ((1 ? 0 : 1));
                            }
                        }
                    }
                    var_16 = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 = ((-(max(var_7, var_3))));
                                arr_23 [i_1] = ((+(((arr_15 [i_6 + 3]) ? 0 : (arr_11 [i_0] [i_0] [0] [i_0])))));
                                arr_24 [i_0] [i_1] [i_2] [i_1] [0] = var_6;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = ((var_8 ? -var_4 : (max(1, (max(-2, var_2))))));
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_19 = ((((min(var_2, var_7))) ? ((((-32767 - 1) ? (arr_14 [i_7]) : (arr_1 [i_7])))) : (min(5763183718024796580, 0))));
        arr_29 [i_7] = (min(((18446744073709551605 ^ (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))), var_8));
        var_20 = (max((min(var_5, (arr_22 [i_7] [i_7] [i_7] [i_7]))), (((var_7 ? ((229 ? var_12 : 0)) : 24)))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_21 = 153;
            var_22 = 196;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_34 [i_7] = var_6;
            var_23 = (max((var_4 == 1), (arr_32 [i_7])));
            var_24 = (~-24007);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_25 = (!-1045553459219395753);
            var_26 = (!(((96 / (arr_33 [i_10] [i_7])))));
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_40 [i_7] [i_7] = var_7;
            var_27 = (!var_6);
        }
    }
    var_28 = ((var_8 ? ((~((4788097047467090182 ? var_13 : 4001111493)))) : 37));
    #pragma endscop
}
