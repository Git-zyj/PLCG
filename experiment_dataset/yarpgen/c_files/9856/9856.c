/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (12 % var_8);
        var_14 = ((var_8 * (arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    var_16 = ((~(((arr_10 [i_1] [i_2] [i_2]) ? var_4 : 253))));

                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        var_17 = ((~(arr_9 [i_4 - 2])));
                        var_18 = (((arr_11 [i_1] [i_3] [i_3 + 1]) / (arr_11 [i_1] [i_3] [i_3 + 1])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = (~3);
                            var_20 = (min(var_20, (arr_10 [i_3 + 1] [i_4 - 2] [i_3 + 1])));
                            var_21 += var_4;
                        }
                    }
                    var_22 = 127;
                }
            }
        }
        arr_16 [i_1] [i_1] = (((arr_9 [i_1]) == -1061014839703002028));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_23 = (-9223372036854775807 - 1);
                    var_24 = (min(var_24, (((~((((((-55 ? (arr_23 [i_6] [i_7] [i_8] [i_8]) : (arr_8 [i_6])))) > -6418804900575381854))))))));
                    arr_25 [i_6] [i_6] [i_6] [i_6] = (max(var_3, (arr_23 [i_6] [i_7] [i_8] [i_6])));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_30 [i_6] [i_6] [i_8] [i_9] [i_10 + 1] = (min((((2450780277 | (max((arr_9 [i_8]), (arr_14 [i_6] [i_10] [i_10] [i_9] [i_9])))))), ((max((arr_17 [i_7]), var_1)))));
                                var_25 = ((~(arr_27 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 - 1] [i_10])));
                                var_26 = (~((((arr_21 [i_6]) && (((~(arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (min(var_27, var_6));
    }
    var_28 = (-32767 - 1);
    var_29 = (((min(var_8, var_11))));
    #pragma endscop
}
