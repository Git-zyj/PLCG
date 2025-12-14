/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = ((((((!150) & -113))) ? (min(-949232804, (-1585921153 ^ var_11))) : (((!(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_16 *= (max(0, (((-(min(var_7, (arr_0 [i_0 - 1] [i_0]))))))));
        var_17 = ((max((max(var_6, var_9), 274))));
        var_18 = ((((((var_2 ? (arr_0 [i_0 - 2] [i_0 - 2]) : var_8))) ? var_4 : var_10)));
        var_19 = ((~((~(arr_1 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = 0;
        var_21 |= ((((var_2 ? 1 : var_8)) * ((var_13 ? 1 : 0))));
        var_22 = ((1 ? 11784492129244337759 : 1767705757));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 = (((((var_0 ? (arr_5 [i_3 + 2]) : 1602240056))) ? (!1) : var_8));
                    var_24 = (!var_12);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 += (651187941 % 4051535007);
                                var_26 += (((((arr_8 [i_3 + 2] [i_3]) + 9223372036854775807)) >> (((arr_16 [i_3 - 1] [i_3 - 2] [i_4] [10] [i_6]) - 1464570160))));
                                var_27 = (((arr_6 [i_2]) / ((var_13 ? var_12 : var_7))));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_28 = (max(var_28, ((-(arr_5 [i_7 - 1])))));
                        var_29 = (max(var_29, (arr_17 [i_7 - 1] [i_4] [i_4] [i_3 - 1] [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_30 = ((!(arr_11 [i_2] [i_4])));
                        var_31 |= 1;
                        var_32 = ((-(arr_9 [i_3 - 2])));
                        var_33 = -96;
                    }
                }
            }
        }
        var_34 = 4051534993;
        var_35 = ((var_0 ? (arr_6 [i_2]) : var_5));
    }
    var_36 = (max(var_36, ((min(8750, 243432273)))));
    #pragma endscop
}
