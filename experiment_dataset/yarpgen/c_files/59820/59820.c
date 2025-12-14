/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((max(203, (arr_4 [i_1] [i_0]))));
                var_20 ^= (arr_6 [i_0] [i_0] [i_1]);
                var_21 -= ((var_4 >> ((((min((arr_2 [i_0]), var_3))) - 12386))));
                arr_7 [i_0] [i_1] [i_1] = (min((33474 % 195), (((!((min(-2096932768, -2096932754))))))));
            }
        }
    }
    var_22 = var_14;
    var_23 = var_17;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 -= ((((((arr_22 [i_4] [i_3] [i_4] [i_5] [i_6]) ? 0 : var_6))) <= ((~(arr_1 [i_4])))));
                                arr_23 [10] [10] [i_4] [10] [i_4] [i_4] &= (((((~2096932781) + 2147483647)) << (((((arr_1 [i_6]) ? (arr_4 [i_2 - 1] [i_2 - 1]) : (arr_15 [1] [i_4]))) - 22))));
                                var_25 = (max(var_25, (((0 ? 24 : -6210584152254830953)))));
                            }
                        }
                    }
                    var_26 = (max(var_26, (((-(arr_1 [i_2 + 1]))))));
                }
                var_27 = 0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_28 [10] [i_3] = (arr_26 [i_8] [i_2 + 1] [i_2 + 1] [i_2 + 1]);

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                arr_33 [i_2] [i_2] [i_2] = (arr_6 [i_2] [i_2] [i_2]);
                                var_28 = (max(var_28, (arr_0 [i_2 - 1])));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] = -2697635270125440350;
                                var_29 = ((~(arr_13 [i_2] [i_2 - 1] [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((~(max((max(var_9, var_11)), (min(var_13, var_16))))));
    #pragma endscop
}
