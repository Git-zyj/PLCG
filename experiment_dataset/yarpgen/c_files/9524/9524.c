/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [i_1] [i_1]);
                    var_15 = ((((!(arr_6 [i_1]))) || (arr_8 [i_2] [i_1] [i_0])));
                    var_16 = (max(var_16, (((~(!var_12))))));
                    arr_10 [i_0] [i_1] [i_2] = (arr_7 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_17 += ((9223372036854775807 > (arr_7 [i_0] [i_0] [i_0] [i_0])));
            arr_14 [i_0] [i_0] = var_6;
            var_18 += (arr_1 [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [1] = var_1;
            var_19 = -var_7;
        }
        arr_19 [i_0] [i_0] = var_11;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_20 = (max(var_20, (arr_21 [0])));
        arr_23 [i_5] = ((!(arr_22 [i_5] [i_5])));
    }

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_26 [i_6] [i_6] [i_6])));
                    var_22 = (arr_20 [i_6] [i_7]);
                    arr_30 [i_8] [i_7] [i_6] = 0;
                    var_23 = (min(var_23, (arr_26 [i_8] [i_7] [i_6])));
                    arr_31 [i_6] [i_7] [i_8] = (arr_25 [i_6]);
                }
            }
        }
        arr_32 [i_6] = (((((((arr_27 [i_6]) && var_10)))) <= -9223372036854775801));
        arr_33 [i_6] = ((-(arr_28 [i_6] [i_6] [i_6])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_37 [i_10] [i_9] [i_10])));
                    var_25 *= ((var_5 | (((~(arr_36 [i_6] [i_9]))))));

                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        var_26 += var_10;
                        arr_41 [i_6] [i_9] [i_9] [i_11] [i_9] [i_9] = 1;
                        var_27 = (max(var_27, (arr_39 [i_10] [i_11 - 3] [i_11 - 1] [i_11 - 2] [i_11])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
