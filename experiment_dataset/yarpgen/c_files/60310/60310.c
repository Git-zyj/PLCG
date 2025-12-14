/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((min(((var_15 ? var_10 : var_10)), (((var_15 ? var_1 : var_13))))), ((((~var_6) - var_13))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((((+(((arr_0 [i_0]) - var_9))))) / 1792);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = 2143999730;
                        arr_12 [i_0] [i_1] [i_3] = (arr_3 [i_0] [i_1]);
                        var_20 *= ((+(((arr_2 [i_2 + 1] [i_2 + 2]) ? (arr_2 [i_2 - 1] [i_2 + 1]) : (arr_2 [i_2 - 1] [i_2 - 1])))));
                    }
                }
            }
        }
        var_21 += (((arr_9 [i_0] [i_0] [i_0] [i_0]) * (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 18446744073709551614 : var_2))));
        var_22 = ((~(((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        var_23 -= 9932043494259496387;
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_24 = ((((arr_0 [i_4 + 1]) ? ((min((arr_5 [i_4] [i_4 - 1]), 46))) : ((18446744073709551614 % (arr_2 [i_4 + 1] [i_4 + 1]))))) - ((((arr_2 [i_4 - 1] [i_4 - 1]) ? 1622727574 : (arr_5 [i_4 - 1] [i_4 - 1])))));
        var_25 += 9223372036854775807;
        arr_15 [i_4 - 1] = ((((((((var_17 ? var_12 : var_1))) | (min((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), var_10))))) ? (arr_5 [i_4 + 1] [i_4 + 1]) : (((arr_6 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) ^ (arr_14 [i_4 + 1] [i_4 - 1])))));
        var_26 = ((!((!(arr_4 [i_4 - 1] [i_4 + 1])))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, (((arr_7 [i_5 + 1] [i_5] [i_5 + 1] [i_5]) ? (arr_18 [i_5 - 1]) : (arr_5 [i_7 + 1] [i_7 + 1])))));
                            var_28 = 18446744073709551615;
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_29 = ((-(var_15 / 9223372036854775796)));
                            var_30 = ((arr_16 [i_5 + 2]) ? (arr_23 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_8]) : var_15);
                            arr_30 [i_5 - 1] [i_8] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8 - 1] [i_7 + 1] = var_4;
                            var_31 = (arr_27 [i_5 + 2] [i_7 - 1] [i_7 + 1] [i_8 + 1]);
                            var_32 += ((var_15 ? 18446744073709551610 : (arr_23 [i_7] [i_7] [i_7 - 1] [2])));
                        }
                        var_33 = (max(var_33, ((!(arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 1])))));
                    }
                    var_34 += min(-var_9, (arr_29 [i_7 + 1] [10] [10] [i_5]));
                    arr_31 [i_5 + 2] [i_6] [i_5 + 2] [i_7 - 1] = (min((min(var_12, ((23 ? 1 : 13835058055282163712)))), (((~(((arr_8 [i_7 + 1] [i_7 + 1] [i_6] [i_5 - 1] [i_5 + 2] [i_5 - 1]) & (arr_23 [i_5] [i_5] [i_6] [1]))))))));
                }
            }
        }
    }
    var_35 = var_17;
    #pragma endscop
}
