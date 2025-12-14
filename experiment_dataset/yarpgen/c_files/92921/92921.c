/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((min((max((min(2093333177, -6839581787082282338)), (((2287552963 ? 1616548239 : 1811089518))))), (((max(var_2, var_13)))))))));
                var_19 = (arr_0 [13]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_20 -= var_2;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_2 - 2] [i_4] = var_1;
                        var_21 = var_4;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (~79)));
                        var_23 = (((arr_16 [i_2] [i_2] [i_2 - 1] [i_2]) ? (((arr_21 [i_2] [i_3]) - (arr_9 [i_4]))) : (var_5 + 2287552963)));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_24 = (((arr_11 [i_3]) ? (arr_24 [i_2] [i_2] [7] [13]) : (arr_14 [i_2 - 4] [i_2 - 4] [2] [i_2 - 4])));
                        var_25 -= 6839581787082282337;
                        arr_25 [i_2] [i_3] [i_4] [i_7] = -93;
                        var_26 = 2287552963;
                        var_27 = ((var_11 == ((var_12 ? 1 : -96))));
                    }
                    arr_26 [i_2] [0] [i_4] [i_2] = ((~(arr_19 [i_2 - 1] [i_2] [i_2 - 3] [i_2] [i_2 + 2] [i_2 - 1])));
                    arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1] = (((((var_17 ? var_9 : 43294))) ? 43297 : ((((arr_13 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_3]) && var_12)))));
                    arr_28 [i_2] [i_3] [i_2] = ((((((15466 ? -2147483626 : -6839581787082282342)) + 9223372036854775807)) >> (-52 + 87)));
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_28 = ((!(arr_5 [i_2 - 3] [i_2 - 3])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_42 [i_2] [i_2] [i_2] [5] [11] [i_11] = -var_13;
                            var_29 = (arr_32 [i_2] [i_2 - 1] [i_2 + 2]);
                            arr_43 [i_9] = (((arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 + 1]) ? (arr_9 [i_2 - 1]) : (arr_23 [i_11] [i_8] [i_2 - 2] [i_2 + 1])));
                        }
                    }
                }
            }
            arr_44 [i_8] = var_6;
        }
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 15;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    arr_54 [i_12] [i_12] [9] = (arr_11 [i_12 + 1]);
                    arr_55 [7] [i_13] [7] = ((140737488355327 || var_5) ? ((var_12 ? var_8 : (arr_36 [i_12] [i_13] [i_14]))) : -66);
                    var_30 |= (arr_15 [i_12 + 1] [i_13] [i_13 - 1] [i_13]);
                }
            }
        }
        var_31 = ((!(arr_47 [i_12 + 1])));
        var_32 = ((~(arr_13 [i_12] [i_12] [i_12 - 4] [i_12])));
        arr_56 [i_12] |= (((arr_31 [i_12 - 1]) ? (arr_31 [i_12 + 1]) : var_16));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            {

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    arr_66 [i_15] [i_16] [i_17] = ((~(~var_10)));
                    var_33 *= var_0;
                    arr_67 [i_16] [i_17] = ((((((((arr_58 [i_15]) ? var_3 : var_1))) && (!65513))) ? (((!(arr_63 [i_17])))) : ((max((arr_63 [i_15]), (arr_58 [i_17]))))));
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            var_34 = 2007414330;
                            arr_76 [i_16] [i_15] = ((((15469 | (arr_68 [i_15] [i_16] [i_18]))) ^ ((((arr_68 [i_15] [i_15] [i_19]) || (arr_68 [23] [i_15] [i_15]))))));
                            var_35 = var_8;
                            var_36 = ((+((var_14 ? (arr_60 [i_15] [i_16]) : var_10))));
                        }
                    }
                }
                var_37 = (max(var_37, (((((((var_12 & 6337) ? 26 : -2147483626))) ? ((max((arr_63 [i_16]), (arr_63 [i_15])))) : (((arr_68 [i_15] [i_15] [i_15]) + var_9)))))));
            }
        }
    }
    #pragma endscop
}
