/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = var_5;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_13 = 15751;
            var_14 = ((max(18446744073709551615, (arr_1 [i_0 - 1]))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_15 = (((arr_5 [i_0 + 3]) / 1));
            arr_7 [i_0] = 7;
            arr_8 [i_0] [i_0] |= (((2512515202 ? 1 : (arr_4 [i_0] [i_0] [i_0]))));
        }

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_11 [i_0] [i_3] = (arr_3 [i_0] [i_3]);
            var_16 += (!1948224934330376253);
            var_17 += 255;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_0] [i_4] [i_4] = (((arr_3 [i_0] [i_0 + 2]) && (((arr_3 [i_0 + 1] [i_0 + 3]) || -5000))));
            arr_16 [i_0 + 2] [i_4] [i_4] = ((((!(!0))) ? (-127 - 1) : (arr_14 [i_0] [i_4])));
            var_18 = (max(var_18, (((1 && (-9223372036854775807 - 1))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_19 = (min(var_19, var_8));
                            arr_31 [i_5] [i_5] [i_6] [i_6] = ((18195 && (!0)));
                        }
                    }
                }
            }
            arr_32 [i_5] [i_0] [i_5] = ((-((((arr_23 [i_0] [i_0 + 1] [i_0 + 2] [i_5] [i_0 + 1]) != var_2)))));
            arr_33 [i_0] [i_5] [i_5] = (arr_29 [i_5] [i_5] [i_5]);
            arr_34 [i_5] = (arr_27 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 *= (max((max(9223372036854775807, ((((arr_35 [2]) - (arr_38 [14] [i_9])))))), (((1 ? ((max((arr_36 [8]), (arr_38 [10] [i_9])))) : (arr_36 [12]))))));
        var_21 = 241;
        arr_39 [i_9] = (arr_37 [i_9]);
    }
    #pragma endscop
}
