/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_4, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((-(arr_3 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 28157));
                    var_19 = ((!(arr_2 [i_0])));
                }
            }
        }
        arr_11 [i_0] = (9223372036854775806 << (((((-9223372036854775806 - -9223372036854775796) + 65)) - 55)));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_20 = (arr_2 [i_3 - 2]);
                        arr_19 [i_0] = ((8920347095109826598 ? 1541212990 : 9223372036854775806));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((~((var_14 ? -9223372036854775806 : (arr_5 [i_6] [i_0] [i_0]))))))));
                            var_22 = (((((-9223372036854775806 / (arr_21 [i_0] [i_3])))) ? 9223372036854775805 : (~1)));
                            var_23 -= ((((((arr_12 [i_0] [i_0] [i_4]) ? (arr_12 [i_3 + 3] [i_3] [i_3]) : var_2))) ? (arr_0 [i_4] [i_4]) : (arr_2 [i_3])));
                            var_24 = (min(var_24, (32759 != -9223372036854775806)));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_25 = var_15;
                            var_26 = (min(var_26, var_12));
                        }
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_27 = (min(var_27, ((var_13 ? var_13 : (!398388610)))));
                            var_28 = ((var_4 ? (arr_15 [i_0] [i_0]) : -2018922242));
                            var_29 = ((~(arr_13 [i_0])));
                            var_30 = var_1;
                        }
                    }
                }
            }
        }
    }
    var_31 += -var_1;
    #pragma endscop
}
