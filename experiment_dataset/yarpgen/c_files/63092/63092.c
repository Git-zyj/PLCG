/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? var_5 : -24549))) ? var_8 : (((arr_1 [i_0]) * var_19))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] = (arr_1 [i_0]);
            var_22 = (((-9223372036854775807 - 1) / var_13));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_23 = (((((var_13 ? (arr_6 [i_0] [i_2] [i_2]) : (arr_7 [i_2] [i_2] [i_2])))) ? (arr_9 [i_0] [i_2]) : (((arr_9 [i_0] [i_2]) - var_5))));
            arr_10 [i_2] = arr_1 [i_2];
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_24 = 49;

            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                var_25 = var_0;

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_26 += var_11;
                    var_27 -= var_1;
                    arr_19 [i_3] [i_4] = var_19;
                    var_28 ^= (arr_13 [i_0] [i_3]);
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_29 = ((((((arr_6 [i_0] [i_4] [i_0]) / var_19))) / (arr_8 [i_6 - 1] [i_0])));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_1 * var_17);
                }
                var_30 = (max(var_30, 55));
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_31 = ((arr_16 [i_7] [i_3] [i_0] [i_0]) + (arr_14 [i_7 - 3] [i_7 - 3]));
                var_32 = ((!(arr_7 [i_7] [i_7] [i_7 - 3])));
                var_33 = ((var_16 & (var_15 | var_13)));
            }
            for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_34 = (((arr_20 [i_8 - 3] [i_8 - 2] [i_8] [i_8] [i_3]) + (arr_20 [i_8 - 3] [i_8 - 2] [i_8 - 3] [i_8] [i_0])));
                var_35 = (((arr_1 [i_8 - 2]) && (arr_27 [i_0] [i_3] [i_8 - 2])));
                arr_30 [i_8] [i_3] = ((!(((191 ? 1448272406 : -1)))));
                var_36 += (((arr_15 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3]) ? (arr_26 [i_8 - 1] [i_8] [9]) : (arr_15 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 3] [i_8 + 1])));
            }
        }
    }
    #pragma endscop
}
