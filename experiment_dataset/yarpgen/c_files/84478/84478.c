/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((((var_3 ? 12708 : var_11)) & var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (~-5177849174674431081);
        arr_2 [i_0] = ((-9223372036854775807 - 1) ? 2511500012 : -117);
        arr_3 [i_0] = 2511500003;
        arr_4 [i_0] [i_0] &= (((arr_0 [i_0]) / var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((((((arr_6 [18]) - (-9223372036854775807 - 1)))) ? 116 : (arr_6 [16]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_22 = -5177849174674431059;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_13 [i_3] [i_1] [i_1] [i_1] = -117;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_1] [i_3] [i_1] [18] = ((var_11 ? (arr_19 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_1]) : (arr_10 [i_1] [i_1] [i_3])));
                            var_23 ^= ((-5177849174674431086 ? (arr_19 [i_1] [i_5 - 2] [i_5 - 2] [i_4] [i_5]) : (arr_19 [i_1] [i_5 - 2] [0] [i_1] [i_1])));
                            var_24 = ((((var_10 ? (arr_17 [4] [i_2] [i_2] [i_2]) : -5177849174674431106)) ^ ((((arr_5 [i_1]) ^ var_13)))));
                        }
                    }
                }
                arr_21 [i_1] [8] [8] &= 12708;
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_25 = (arr_27 [i_6] [i_7 - 2] [i_7 + 1]);
                        var_26 = 14869902157180564819;
                    }
                }
            }
            var_27 = (min(var_27, ((((arr_10 [i_1] [i_6] [i_6]) ? (-9223372036854775807 - 1) : (arr_10 [20] [i_6] [i_6]))))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_28 = ((~(((arr_5 [i_1]) ? (arr_1 [i_9]) : (arr_14 [i_1] [i_9])))));
            var_29 = (((var_9 + var_0) + -9223372036854775805));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_30 &= (~(arr_7 [i_11 - 2]));
                            arr_43 [i_1] [i_1] [i_1] [i_10] [i_11 - 2] [i_11 - 1] [i_12] = (1567626579891490188 + 2553);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
