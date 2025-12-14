/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 ^= (((!(((var_0 ? var_10 : (arr_7 [i_0] [19] [i_0] [i_0])))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = ((-(((1983521788145083936 & 157) ? var_2 : (arr_2 [i_0])))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_22 = (arr_6 [i_1] [i_0]);
                            var_23 = ((-52 != (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0])));
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_24 = ((~((~(~1142285407)))));
                            var_25 = (arr_17 [i_5] [i_3] [i_0] [i_1] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_26 = ((((!(((16463222285564467703 ? (arr_2 [i_0 + 1]) : 16463222285564467681))))) ? (arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 1]) : (arr_8 [1])));
                            var_27 *= (((-(var_0 + var_10))) - -var_13);
                            var_28 = (!-8911800336951188867);
                            var_29 ^= (arr_16 [i_0 - 2] [i_0]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_30 = ((((max((arr_21 [i_0] [i_0 - 2] [i_0 + 2] [i_0 - 1]), (arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2])))) ? (!var_7) : (((!(arr_2 [i_0 + 2]))))));
                        var_31 = ((var_17 * (!var_7)));
                    }
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_32 = 150;
        var_33 = (min(var_33, var_9));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                {
                    var_34 = var_5;
                    var_35 = (16463222285564467690 >> (1983521788145083925 - 1983521788145083920));

                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        var_36 = (!244);
                        var_37 = (12 ? 1996502979807255166 : 3499564763);
                        var_38 &= var_12;
                        var_39 = ((((!14) && 10408)));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_40 = var_3;
                        var_41 = (min(var_41, (!var_1)));

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_42 = ((!(!42478)));
                            var_43 = (min(var_43, 4824104080986397507));
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_44 = 1;
                            var_45 = -4010551681056127144;
                        }
                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            var_46 = (min(var_46, var_13));
                            var_47 = (max(var_47, var_10));
                            var_48 = ((1537866452 ? (arr_43 [i_8 + 3] [i_9] [i_8 + 3] [i_8 + 3] [i_15 + 4]) : var_4));
                        }
                    }
                    var_49 = ((var_14 ? -1965146200 : (max((arr_33 [i_8 + 1] [i_8 + 3] [i_8 - 1]), var_13))));
                }
            }
        }
        var_50 ^= (((!(arr_23 [i_8 - 2] [i_8 - 2]))));
        var_51 = (max(90, (arr_28 [i_8] [i_8] [i_8] [i_8 + 2])));
    }
    for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
    {
        var_52 = (max(((((((arr_36 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16] [i_16]) % (arr_29 [i_16] [i_16] [i_16] [i_16])))) ? var_10 : (((var_10 ? -1 : (arr_42 [i_16] [i_16] [i_16 - 1] [i_16 + 3])))))), ((min(1, 244)))));
        var_53 |= (min((((!(((var_12 ? (arr_28 [i_16] [i_16] [i_16] [i_16]) : var_3)))))), (arr_41 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 - 2] [i_16])));
    }

    for (int i_17 = 1; i_17 < 22;i_17 += 1)
    {
        var_54 ^= (((-6 != var_19) ? var_0 : ((~(arr_41 [23] [i_17 + 2] [i_17] [18] [i_17 + 2] [i_17 + 2])))));
        var_55 *= (~72);
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        var_56 = (min(var_56, var_12));
        var_57 = (min(var_57, 22));
        var_58 = (((arr_35 [16] [i_18] [i_18] [i_18]) ? (162 || 90) : (!var_11)));
    }
    for (int i_19 = 0; i_19 < 10;i_19 += 1)
    {
        var_59 = ((1945097615 ? 2147483647 : (30 > 157)));
        var_60 &= ((1 && (~-var_0)));
    }
    #pragma endscop
}
