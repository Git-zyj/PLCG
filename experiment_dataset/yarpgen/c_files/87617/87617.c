/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((min((~var_6), ((((arr_2 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : var_3))))))));
        arr_3 [i_0] &= (((((var_2 % (arr_0 [i_0 - 2])))) ? (!var_10) : (((arr_0 [i_0 - 2]) / (arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] &= arr_7 [i_1 - 1];

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] = ((var_9 ? (arr_10 [i_1 + 1]) : var_12));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_16 = ((~(arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 3] [i_3 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 2])));
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] = (~549739036672);
                        }
                    }
                }
            }
            var_17 = (arr_9 [i_1 - 1] [i_2]);
            var_18 = ((-38 / ((((arr_2 [i_1]) < 64)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_19 = (arr_14 [i_1] [i_7]);
                var_20 = (min(var_20, (((arr_27 [i_1] [i_7]) * ((var_13 ? 0 : -32760))))));
            }
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                arr_30 [i_1] [i_1] [i_8 + 1] [i_8 + 1] |= ((var_6 * ((4294967287 ? (arr_4 [14] [i_1]) : 4294967294))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_35 [i_6] = (arr_25 [i_9 - 3] [i_9 - 3]);
                            var_21 = (~(arr_17 [i_1] [i_6] [i_8] [i_9]));
                            arr_36 [i_6] [i_10] = ((var_14 != (arr_0 [i_1 + 2])));
                            arr_37 [i_10] [i_9] [i_1] [i_1 - 2] [i_1 - 2] &= ((var_1 >> (((((arr_5 [i_9]) ? var_10 : (arr_15 [i_1] [i_6] [i_8 - 1] [i_9]))) + 4633))));
                            var_22 = ((~(arr_12 [i_1] [i_1] [i_1 + 1] [i_9 - 2])));
                        }
                    }
                }
                var_23 = var_10;
            }
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                arr_40 [i_6] = (((arr_0 [i_1 + 2]) ? ((((arr_29 [i_1] [i_1] [i_1] [i_1]) & var_10))) : (arr_12 [i_11 - 1] [19] [12] [i_1])));
                arr_41 [i_11] [i_6] [i_6] [i_1] = ((!(arr_21 [i_6] [i_6] [3])));
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                arr_45 [i_6] [i_6] [i_6] = ((var_0 ? 63 : (((!(arr_34 [i_1] [i_1] [i_1] [i_1] [11]))))));
                var_24 = (((arr_7 [i_6]) == var_14));
            }
            arr_46 [i_1] [i_6] [i_1] &= (arr_34 [14] [i_1 - 1] [i_6] [i_1] [i_1 - 2]);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    arr_53 [i_1] [i_13] = (((arr_9 [i_1 + 1] [i_13]) ? (arr_47 [i_1 + 2] [i_1 + 1]) : -var_11));
                    arr_54 [2] [10] [i_13] [i_1] = (((var_3 ? 5736439627218118955 : var_11)));
                    var_25 &= (arr_21 [i_1 + 1] [i_1] [i_1 - 1]);

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_26 *= (var_4 + var_6);
                        arr_57 [i_1] [i_13] [8] [i_13] [3] = ((~(arr_22 [i_1] [i_13] [i_15])));
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_27 = (((arr_10 [i_1 - 2]) - (arr_10 [i_1 - 1])));
                        var_28 = -125;
                        var_29 ^= (arr_27 [i_1 - 2] [i_14]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 3; i_17 < 10;i_17 += 1)
    {
        arr_64 [i_17] = (((~var_1) * (arr_52 [i_17 - 2] [i_17 + 2] [i_17 + 1])));
        arr_65 [i_17 + 2] &= var_12;
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            {
                var_30 += ((~((min((arr_13 [i_18] [i_18] [i_18] [i_19]), (arr_13 [i_18] [i_18] [i_18] [i_18]))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            arr_78 [i_18] [i_19] [i_20] [i_21] = ((~((~(min((arr_10 [i_18]), (arr_16 [i_18] [i_20] [i_18] [i_18])))))));
                            arr_79 [i_20] [i_19] [i_20] [i_21] [i_20] = ((var_1 < ((((arr_34 [i_18] [1] [i_19] [i_20] [i_21]) << (((arr_34 [i_18] [i_18] [i_20] [i_21] [i_18]) - 4098022026463897327)))))));
                            arr_80 [i_18] [i_21] [i_20] [i_21] = (min((((106 - var_1) ? (min((arr_18 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), var_5)) : (min((arr_17 [i_21] [i_18] [i_18] [i_18]), var_12)))), (arr_34 [i_18] [i_18] [i_18] [i_18] [i_18])));
                            var_31 = ((((min(var_11, (arr_25 [i_18] [i_18])))) ? (((((min(var_5, var_10)))) + (min((arr_42 [i_21]), (arr_12 [i_21] [i_20] [i_19] [i_18]))))) : (arr_76 [i_18] [i_19] [i_19] [i_20] [i_21])));
                            arr_81 [i_20] [i_20] [i_20] [i_20] [i_20] = (min((min(var_4, var_9)), ((((arr_70 [i_21]) || (arr_70 [i_18]))))));
                        }
                    }
                }
                arr_82 [i_19] [i_19] = (min((((((arr_9 [i_18] [i_19]) >= (arr_31 [i_18] [i_18] [i_18]))) ? var_2 : (var_6 | var_5))), ((((arr_70 [i_19]) != (arr_44 [i_18] [i_19] [i_19] [i_19]))))));
                var_32 = (((arr_1 [i_19]) > ((((((arr_44 [i_18] [i_19] [i_19] [i_18]) * var_8))) ? (~243) : (var_6 < var_14)))));
                arr_83 [1] = ((!((min((arr_75 [i_19] [i_19] [i_18]), (min((arr_77 [i_18] [i_18]), (arr_10 [i_18]))))))));
            }
        }
    }
    var_33 = var_2;
    #pragma endscop
}
