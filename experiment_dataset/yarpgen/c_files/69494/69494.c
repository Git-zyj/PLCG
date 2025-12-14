/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_7 != ((min(var_8, 22)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, var_1));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_14 -= ((max(1, (arr_2 [i_0] [i_0]))));
                        var_15 -= (max(((((((15461 ? (arr_3 [i_0] [i_0] [i_2]) : (arr_2 [i_1] [i_1])))) - (arr_10 [i_0])))), (min((((-87 ? 26299 : var_0))), (((arr_0 [i_1]) / 118))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_16 += (arr_4 [i_4]);
                            var_17 ^= ((1 & (arr_15 [i_0] [i_1] [13] [i_0])));
                            var_18 |= (((arr_17 [i_0] [i_1] [i_1] [15] [i_5]) != (arr_17 [i_0] [i_5] [i_5] [i_4] [i_5])));
                        }
                        var_19 = (max(var_19, ((min(((((arr_4 [i_4]) > ((2349 ^ (arr_3 [i_4] [i_4] [i_4])))))), -220719771)))));
                        var_20 -= 161;
                        var_21 += (((!(arr_6 [i_4] [i_4]))));
                    }
                    var_22 ^= ((~(min(-28, (arr_8 [2] [i_1] [2])))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6] &= 6241049274251084879;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_23 = (min(var_23, (((var_0 ? 6241049274251084891 : var_8)))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_24 = (max(var_24, (arr_7 [i_10] [i_10] [i_10] [i_7])));
                            var_25 = (min(var_25, (((var_9 ? (~-4265287572026462305) : (arr_3 [i_10] [i_7] [i_7]))))));
                        }
                    }
                }
            }
            var_26 ^= var_7;
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_27 *= ((!((max(-22389, 4634193892372654022)))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_40 [i_13] [i_12] [i_6] [i_6] |= 7168;

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_28 = (min(var_28, 3512811919));
                            var_29 = (min(var_29, (((var_1 & (arr_12 [i_6] [i_6] [i_6] [i_12]))))));
                        }
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            arr_47 [i_15] [i_13] [i_6] [i_6] [i_6] [3] [i_6] &= 288230375077969920;
                            var_30 ^= var_3;
                        }
                    }
                }
            }
            var_31 *= ((var_7 / (arr_8 [i_11] [i_6] [i_6])));
            var_32 ^= ((~(arr_36 [i_6] [i_11] [i_11] [i_11])));
            var_33 = (max(var_33, ((((!2013638014392316085) ? 782155404 : (((arr_7 [i_6] [i_11] [i_11] [i_6]) ? (arr_7 [i_11] [i_11] [i_11] [i_6]) : 16248970423406865999)))))));
        }
        var_34 += (arr_1 [i_6] [i_6]);
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
    {
        var_35 ^= var_1;
        var_36 = (min(var_36, (((6840819618342316076 ? 2013638014392316076 : 9223372036854775794)))));
        var_37 = (min(var_37, (max((arr_48 [6]), (!var_7)))));
        var_38 += ((2360 % (((-(arr_50 [i_16]))))));
        var_39 &= var_6;
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        var_40 = (min(var_40, (((-1 ? (11 & var_2) : (max(var_9, (arr_51 [i_17]))))))));
        var_41 ^= (min(-60062684, -558108916));
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        var_42 += var_5;
        var_43 = (max(var_43, (max(((0 ? (arr_53 [i_18]) : (arr_55 [i_18]))), (arr_53 [i_18])))));
    }
    var_44 |= (max(var_4, (((var_6 ? 1 : var_11)))));
    #pragma endscop
}
