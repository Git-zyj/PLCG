/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -24;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = (max((~var_1), var_11));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = ((+(min(-var_6, (((arr_0 [i_0]) - 86))))));
                        var_15 = ((max((arr_1 [i_0] [i_3]), -36)));
                        var_16 *= (arr_6 [8] [4] [8]);
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_17 = (min(((((arr_5 [i_4]) ? (arr_5 [i_4]) : (arr_5 [i_4])))), (max(3722186132, (arr_5 [i_4])))));

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_18 = (min(var_18, (!var_9)));
            var_19 = (min(139, 100));
            var_20 = (~-1);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_21 = (max(var_21, var_11));
            var_22 = (min(var_22, ((((arr_5 [i_4]) > (arr_2 [i_4] [i_6]))))));
            var_23 = (max(var_23, (arr_16 [i_6] [i_4 - 1])));

            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_24 = var_9;
                            var_25 ^= (var_7 | var_4);
                        }
                    }
                }
                var_26 += 32165;

                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    var_27 = (max(var_27, (((-(arr_4 [i_4]))))));

                    for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_28 *= var_3;
                        var_29 = (~-24);
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        var_30 &= (119 > -1);
                        var_31 = (var_4 < var_4);
                        var_32 -= ((-(arr_1 [i_4] [i_4])));
                    }

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_33 ^= (((~var_9) ? (arr_22 [i_4] [i_7 - 2] [i_7 - 2] [i_4]) : (arr_13 [i_4] [i_4])));
                        var_34 += ((~(~var_10)));
                        var_35 = ((15730 && (arr_36 [i_7] [i_7] [i_7] [i_4] [i_7])));
                        var_36 |= (var_7 ? (((arr_31 [i_13] [i_4] [i_7] [i_4] [i_4]) ? var_5 : (arr_1 [i_4] [i_4]))) : var_1);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_37 &= (~0);
                        var_38 = (max(var_38, (((!(arr_14 [i_4]))))));
                    }

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_39 = (max(var_39, (arr_42 [i_15] [i_4] [i_4 - 1] [i_4] [i_4 - 1])));
                        var_40 = ((~(arr_36 [i_4] [i_4] [9] [i_4] [i_7])));
                        var_41 = (((var_4 != var_4) * var_4));
                    }
                    for (int i_16 = 1; i_16 < 11;i_16 += 1)
                    {
                        var_42 = (arr_26 [i_7] [i_10] [i_7] [i_7] [i_4 + 1] [i_4 + 1]);
                        var_43 += (arr_16 [i_7] [i_6]);
                        var_44 = (32165 | 4294967273);
                        var_45 = ((var_9 != (arr_10 [i_4] [i_7 - 4])));
                        var_46 = (max(var_46, (2147483644 <= 1)));
                    }
                    var_47 = 128;
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 10;i_17 += 1)
    {
        var_48 = (min(99, 3612705317));
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                    {
                        var_49 = ((arr_9 [i_17]) | var_4);
                        var_50 -= (((!(arr_45 [i_18] [i_18 - 2]))) ? var_7 : (arr_48 [i_17] [i_18]));
                        var_51 |= ((((min(((var_3 ? var_7 : (arr_50 [i_18]))), ((((arr_48 [i_18] [i_18]) ? var_3 : var_9)))))) ? var_5 : (min(65535, 3014149184))));
                        var_52 = (min(var_52, ((((125 ? (arr_1 [i_18] [i_17 + 3]) : (arr_1 [i_18] [i_17 + 3])))))));
                        var_53 = (min(var_53, 7));
                    }
                    for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                    {
                        var_54 = ((((max(var_2, var_6))) ? (((min((arr_55 [i_18 - 1] [i_17] [i_18 - 1] [i_18]), (max(var_9, var_0)))))) : (((arr_0 [i_17]) ? (!var_7) : -23))));
                        var_55 &= ((var_3 ? (((-9223372036854775807 - 1) ? ((var_3 ^ (arr_54 [i_17] [i_18] [i_17] [i_18] [i_18] [i_21]))) : (~var_0))) : (max((arr_6 [i_18] [10] [20]), (~-1)))));
                        var_56 += ((~((-48 - (arr_9 [i_18])))));
                        var_57 = (min(var_57, (((-65529 - (((arr_7 [i_18 - 1] [i_21] [i_18] [i_21] [i_18] [i_17 - 1]) ? (min(var_7, (arr_46 [i_18] [i_18]))) : ((var_11 ? var_7 : var_9)))))))));
                    }
                    var_58 = (~144);
                    var_59 &= ((~(((arr_48 [i_17 + 2] [i_18]) >> (((arr_48 [i_18] [i_18]) - 13552))))));
                }
            }
        }
        var_60 = var_8;
    }
    #pragma endscop
}
