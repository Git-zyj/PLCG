/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_20 -= ((!((((arr_3 [i_0 + 3]) ? (arr_3 [i_0 + 1]) : -1124107427723736271)))));
                var_21 = 0;
                var_22 = (0 && 65535);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_23 &= (((((arr_10 [i_2]) % (arr_10 [i_2]))) >> ((((max(65535, 0))) - 65512))));
                var_24 = (arr_9 [i_3 - 2]);
            }
        }
    }
    var_25 &= ((-(((var_12 - -1399849967) + var_7))));

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 -= (((arr_13 [10] [10]) >= 1477700409));
        var_27 -= (((((arr_12 [4]) ? (arr_12 [12]) : (arr_12 [18]))) + 0));
        arr_14 [i_4] [i_4] = ((16864 != (((((((arr_13 [i_4] [i_4]) != var_1)))) - (min(var_4, var_13))))));
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        var_28 = (((((arr_4 [i_5] [i_5 + 1]) < (var_19 - var_0))) ? (~1399849944) : var_17));
        var_29 = ((~(arr_16 [i_5 + 2])));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        var_30 = (max(var_30, ((((arr_19 [i_6] [i_6 - 2]) && var_14)))));
        arr_21 [i_6] = (1399849930 - 1399849928);

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_9] = ((~(arr_12 [i_9])));
                        arr_30 [i_9] [i_9] [i_9] [i_6] = ((~(((arr_11 [i_9] [i_9]) ? var_4 : var_9))));
                        arr_31 [i_6] [i_6] [i_9] [i_6] = var_0;
                        arr_32 [i_7] [i_7] [i_7] [i_7] &= var_13;
                    }
                }
            }
            arr_33 [i_6] [i_6] [i_6] = (((arr_24 [i_6] [i_6 - 4] [i_6] [i_6]) == var_11));
            var_31 = ((-1399849930 ? 11 : (arr_20 [i_6 - 3])));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                arr_39 [i_6] [i_6] [i_11] [i_11] = var_18;
                var_32 -= var_6;
            }

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] = (((!2147483622) / 1));
                            var_33 -= (arr_34 [i_6 + 1] [i_10]);
                        }
                    }
                }
                arr_48 [i_12] = var_9;
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_34 = ((var_17 + (arr_11 [i_15] [i_15])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_35 = ((~(arr_34 [i_6] [i_17 + 1])));
                            var_36 -= ((2794544716464282513 || (arr_40 [i_17 - 2] [i_17 + 2] [i_17 - 2] [i_6 - 2])));
                        }
                    }
                }
            }
            var_37 = ((var_15 <= (arr_19 [i_6 - 1] [i_6 - 1])));
            var_38 = (((arr_28 [i_6] [i_6 - 3] [i_6 - 3] [i_6 - 4]) ? -4586963780588435151 : var_19));
        }
        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
        {
            var_39 = -13;
            var_40 = ((var_0 ? (arr_11 [i_6 - 1] [i_6 + 1]) : (arr_11 [i_6 - 1] [i_6 - 4])));
            var_41 = (min(var_41, ((((var_7 ? 334449296 : -12))))));
            arr_59 [i_6] [i_6] [i_18] = -1475729021;
            arr_60 [i_18] = 1056187753;
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 1; i_19 < 13;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 12;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            {
                                var_42 = ((arr_70 [i_19] [i_19] [i_19] [i_19]) > -var_8);
                                var_43 = (max(-1399849929, -124));
                                var_44 = (((max((arr_63 [i_19 + 1]), (arr_63 [i_19 - 1]))) & (~-1399849942)));
                            }
                        }
                    }
                    var_45 = 2794544716464282494;
                    var_46 = max(((((arr_72 [i_20] [i_21] [i_20] [i_21]) == 42))), var_8);
                }
            }
        }
    }
    #pragma endscop
}
