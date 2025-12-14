/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= min(var_1, var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (((arr_4 [i_0] [i_1]) ? var_8 : var_8));
                        var_16 ^= ((var_11 ? ((((-9223372036854775807 - 1) ? 950807779 : (arr_6 [i_1] [i_2] [i_3])))) : (((arr_4 [i_0] [i_0]) ? -9002 : var_2))));
                        var_17 *= (arr_5 [i_0] [i_1] [i_2]);
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((~(arr_8 [i_3] [i_2] [i_1] [i_1] [i_0])));
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_18 = ((((var_1 ? (arr_3 [i_0]) : var_3)) * ((((!(arr_8 [i_2] [i_1] [i_2] [i_4 + 1] [i_2])))))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] = (min(((~(-2361 & -950807780))), (arr_0 [i_0] [i_0])));
                        var_19 = ((~(min(((7750 ? 950807769 : 6760191169772445177)), (arr_9 [i_0] [i_1] [i_4 + 2] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_5] [i_2] [i_1] [i_0] = (min((arr_13 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ -950807766))));
                            arr_21 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] = ((!((((arr_18 [i_0] [i_1] [i_2] [i_5] [i_6]) ? 950807796 : (arr_1 [i_0]))))));
                            arr_22 [i_1] [i_2] [i_5] [i_6] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_20 -= ((((arr_17 [i_1] [i_1] [i_2] [i_5]) == (arr_17 [i_0] [i_2] [i_5] [i_6]))));
                            arr_23 [i_5] [i_1] [i_5] [i_5] [i_6] = (max(((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 4095 : -4576))), ((var_13 ? var_7 : (arr_8 [i_0] [i_1] [i_2] [i_5] [i_6])))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_21 = ((15383 ? (625279972 > 255) : (arr_19 [i_0] [i_1] [i_2] [i_5] [i_7])));
                            arr_27 [i_0] [i_2] = ((var_2 / (arr_15 [i_2] [i_1] [i_2] [i_1])));
                            arr_28 [i_0] [i_1] [i_2] [i_5] [i_7] = (((((arr_6 [i_5] [i_2] [i_1]) >> (((arr_3 [i_5]) + 2619538571352361829)))) & (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_29 [i_7] [i_5] [i_2] [i_1] [i_0] = var_7;
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_0] = 9001;
                        var_22 = (((-(!var_7))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_23 &= (-((-(((arr_31 [i_0] [i_1] [i_2] [i_8]) ? var_7 : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_8]))))));
                        arr_33 [i_8] [i_0] [i_2] [i_8] [i_0] [i_8] = 15368;
                        arr_34 [i_2] = -8988;
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_2]) || var_0))) * (!-1)));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_24 = ((-26713 < ((min((var_12 || var_4), (arr_5 [i_0] [i_0] [i_0]))))));
                            var_25 = -15383;
                            arr_38 [i_1] [i_2] [i_8] = var_3;
                            var_26 = (min(var_26, (((~((max((arr_7 [i_0] [i_1] [i_8] [i_9]), (arr_7 [i_0] [i_1] [i_2] [i_9])))))))));
                        }
                    }
                    var_27 += (~950807769);
                }
            }
        }
    }
    var_28 = var_12;
    var_29 = (((((~var_13) ? var_5 : var_0))) ? -var_10 : (min((22478 % var_4), (var_4 == var_8))));
    #pragma endscop
}
