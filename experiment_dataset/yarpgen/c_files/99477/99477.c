/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? var_1 : ((((max(var_14, var_15))) ? (max(1773674939089651587, 2725948484847568330)) : (((46973 ? 35131 : 33809)))))));
    var_21 -= (min(var_14, (max(var_16, (min(1773674939089651587, 31726))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_22 = (((arr_7 [i_2] [i_2]) ? -var_1 : (arr_0 [i_0])));
                    var_23 = ((((((arr_8 [i_0 - 1] [i_1] [i_2]) ? var_2 : (arr_1 [i_2])))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_24 = var_3;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [i_0] = var_17;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_25 = (((arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 2]) ? (arr_3 [i_0 + 1] [i_0 + 4] [i_0 + 1]) : var_16));
                            var_26 = (((!-39) ? var_9 : ((4294967292 ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_1]) : 1))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_20 [2] [i_0] [11] [i_0] [i_0] = ((var_11 ? (arr_6 [i_0]) : (arr_6 [i_0])));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_5] = (((arr_12 [i_0]) == var_4));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_27 = (!var_14);
                            var_28 = ((var_15 ? -98 : (arr_11 [i_0] [i_0 + 4] [i_0] [i_0 + 3])));
                            var_29 = ((var_4 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_3] = var_7;
                            arr_29 [i_0] = (((arr_5 [i_0]) || (arr_5 [i_0])));
                        }

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_30 = var_2;
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = (((arr_19 [i_3] [i_0 + 3] [i_0 + 2] [12] [i_0 + 3]) | (arr_19 [i_2] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 4])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = (((arr_26 [i_0] [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0]) ? (arr_26 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_26 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0])));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_32 = (((arr_9 [i_0] [i_1] [14] [i_9] [i_10]) ? ((var_7 ? var_10 : var_17)) : (var_12 >= var_6)));
                            var_33 -= ((!(arr_7 [i_1] [i_2])));
                            var_34 = ((((((arr_30 [i_0] [8] [8] [i_2] [i_9] [i_10]) ? 0 : (arr_36 [8] [i_10] [i_9] [4] [i_1] [i_0])))) ? (arr_1 [i_0]) : (arr_38 [i_0] [i_10])));
                            var_35 = (arr_34 [i_0] [i_0] [i_0] [i_9]);
                        }
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_36 = ((3346379804 ? ((113 ? 64079 : (arr_4 [i_0] [i_0]))) : ((((arr_35 [i_0] [i_1] [i_2] [i_9] [0] [i_1]) ? var_3 : (arr_17 [i_0]))))));
                            arr_42 [i_9] [i_9] [i_0] [4] [4] = (((arr_14 [i_0 + 1] [i_0] [i_11] [i_11 + 3] [i_11 + 3] [i_11] [i_11]) < (arr_24 [i_0] [i_1] [i_0 + 1] [i_9] [i_11 + 2] [i_1])));
                            var_37 = (arr_16 [i_11]);
                            var_38 = ((~(arr_2 [i_0])));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_39 = ((45 ? (46758 - 4095) : 45));
                            var_40 = ((-3372600142897194165 ? ((206 ? -22 : 125)) : -104));
                            arr_45 [i_0] [i_1] [i_2] [i_9] [i_0] = ((!(arr_38 [i_12] [i_12])));
                            var_41 = (!var_19);
                        }
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_42 = (((arr_38 [i_2] [i_13]) ? (((var_3 ? var_9 : var_7))) : ((0 ? 8388607 : var_9))));
                        var_43 = 72;
                    }
                }
                arr_48 [i_0] [i_1] [i_0] = ((((max(115, (arr_26 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1])))) ? (((arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1]) ? (arr_5 [i_0]) : ((var_11 ? var_18 : (arr_27 [i_0] [i_1]))))) : ((max((arr_35 [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 4]), (arr_35 [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 4]))))));
            }
        }
    }
    var_44 = ((var_0 ? var_1 : ((var_5 ? (max(178, (-9223372036854775807 - 1))) : var_8))));
    #pragma endscop
}
