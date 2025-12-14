/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((min(var_1, ((var_12 ? var_7 : var_16))))) ? (min(var_3, -var_14)) : (((~var_0) ? -var_3 : var_4))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_10;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_21 = (((((arr_4 [i_0] [i_0]) * (arr_2 [i_0] [i_1])))) ? ((~(!var_1))) : (arr_5 [i_1]));
                var_22 *= ((!(((~(arr_0 [i_1]))))));
                var_23 = ((arr_7 [i_0] [i_0] [i_2]) / (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : var_12)));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_12 [0] = (~var_10);
                arr_13 [i_0] [1] [i_3] [i_3] = var_2;
                var_24 = var_11;
                var_25 = ((arr_1 [i_3]) ^ (((arr_4 [i_0] [i_1]) ? var_3 : (arr_1 [i_0]))));
                arr_14 [14] [i_1] = (~-var_3);
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                arr_17 [i_0] [1] = ((((!(arr_11 [i_0] [i_1] [i_4] [3])))));
                var_26 = (var_4 << (((arr_9 [i_1] [i_1]) - 3008446962)));
                arr_18 [i_0] = ((((var_0 | (arr_4 [i_0] [i_1]))) & var_0));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_27 -= -196616143;
                arr_21 [i_0] [12] [i_5] [i_0] = var_18;
            }
            arr_22 [i_0] = ((~((var_6 ? (arr_20 [i_0] [i_1]) : (arr_0 [i_1])))));
            arr_23 [i_0] = (max((((var_3 | var_8) | 592757912)), ((var_18 ? (~var_7) : -9223372036854775788))));
        }
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_29 [i_0] [6] [i_0] = (min((((((var_12 ? 592757932 : var_9))) ? 10 : ((var_10 ? var_3 : var_12)))), var_12));
                var_28 = arr_6 [i_0] [i_6] [13];
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_35 [i_6 - 2] [i_6] [i_8] [i_7] [16] [i_6] = (arr_11 [i_6] [i_8] [8] [i_8]);
                            var_29 = var_13;
                            arr_36 [i_0] [i_6 - 3] [i_7] [i_8] = (((~(arr_20 [i_0] [i_6 - 3]))));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                var_30 = ((-((((((arr_34 [i_10] [i_6] [i_10]) / var_13))) ? ((var_12 ? var_6 : 592757940)) : ((min(var_15, var_6)))))));
                arr_39 [i_0] [i_0] [i_0] [i_0] = ((var_1 % (29 % var_18)));
                arr_40 [1] [i_6] = ((!((min(2311514162, var_7)))));
            }
            var_31 = (min(var_10, (((~var_11) & (max((arr_6 [0] [i_6] [2]), var_14))))));
            arr_41 [i_6] = (((~var_10) ? (((((var_5 + (arr_15 [i_0] [i_0] [14]))) - (arr_26 [i_6 - 3] [0] [i_6])))) : (max(((var_8 ? var_14 : 60323)), (!var_4)))));
        }
    }
    #pragma endscop
}
