/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((var_6 ? var_8 : var_3)) & ((var_5 ? 62 : var_1)))) < ((-(var_8 < 1)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = ((((var_6 ? ((((arr_0 [i_0]) < 128))) : var_7)) > ((((~var_9) && 18446744073709551606)))));
        var_14 = (((arr_2 [i_0] [i_0]) / (min((arr_1 [i_0]), 1))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_15 = var_6;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((var_4 * (arr_9 [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_4] [i_3] &= ((-(arr_6 [i_1 + 1] [i_1 - 3])));
                        var_16 = var_7;
                        var_17 = (((~var_9) ? 738747751 : (((arr_16 [i_4] [i_2] [i_2] [i_1] [i_1]) ^ (arr_12 [i_1] [i_1] [i_1] [i_1])))));
                        var_18 = ((var_1 + (arr_13 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 2])));
                        var_19 = (min(var_19, (arr_11 [i_4] [i_3] [i_1] [i_1])));
                    }
                }
            }
            var_20 = (((-6566176750015439674 ? 9223372036854775807 : -1)));
            arr_20 [i_1] [i_1] [i_2] = (var_1 - var_0);
            var_21 = (min(var_21, (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_22 = var_7;
            var_23 = var_9;
            var_24 |= var_3;
            var_25 = (((((arr_14 [i_1] [i_1] [i_1] [i_1]) ? var_0 : (arr_12 [i_1] [i_1] [i_1] [i_1]))) ^ (arr_4 [i_5])));
            arr_25 [i_1] [i_1] [i_5] = 1;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_26 = ((var_1 || (((117 || var_2) || var_6))));
            var_27 = ((var_8 | ((var_6 ? ((var_1 ? var_0 : var_8)) : 114))));
        }
        arr_28 [i_1] = -869717318;
        arr_29 [i_1] [i_1] = min((min(-9223372036854775807, (!var_4))), (((((!(arr_13 [i_1] [i_1] [i_1] [i_1]))) && (arr_5 [i_1])))));
    }
    #pragma endscop
}
