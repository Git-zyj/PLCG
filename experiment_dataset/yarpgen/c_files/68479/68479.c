/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (((arr_3 [i_1] [i_0]) < (arr_2 [i_1] [i_1])));
            var_22 &= var_15;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 = ((~(((arr_4 [i_2]) ? 442466913029227000 : var_14))));
            var_24 = (!var_13);
            var_25 = 1;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_26 = (!var_11);
                var_27 = -1;
                var_28 = (arr_4 [i_0]);
            }
            for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_29 = (((arr_0 [i_0]) ? 1 : 1));
                var_30 = (((arr_6 [i_0] [i_2] [6]) * (((arr_2 [i_0] [4]) ? (arr_2 [1] [i_4]) : -6173952163317560998))));
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_31 = (arr_2 [i_0] [i_5 - 1]);
                var_32 = (arr_0 [i_5 + 1]);
                var_33 = arr_0 [i_0];
            }
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            var_34 = ((2031616 ? 59 : (arr_9 [i_6 + 1] [i_0] [i_6 - 2])));
            var_35 = ((var_12 ? -18755 : (arr_6 [i_6 - 1] [i_6 - 2] [i_6 - 1])));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_36 -= var_18;
            var_37 = (1 ^ 1);
            var_38 = ((var_19 ? (arr_18 [7] [i_0] [i_0]) : 1));
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_39 = -1;
        var_40 = ((189 ? 196 : 1));
        var_41 = (max(var_41, ((((+-1) ? -var_16 : (arr_4 [i_8]))))));
    }
    var_42 = (min((((var_3 ? var_13 : (~var_2)))), var_9));
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_43 = (arr_26 [i_9 - 2] [i_9]);
                var_44 = -61;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                var_45 = (arr_30 [i_11] [i_12] [i_11]);
                var_46 = ((((43 && (arr_22 [i_11] [i_12]))) ? ((min((arr_22 [i_11] [i_11]), (arr_22 [i_11] [i_12])))) : (arr_22 [i_11] [i_11])));
                var_47 = var_5;
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_48 = (~212);
                                var_49 = ((((((arr_31 [i_14 - 1] [i_14 + 2] [i_14 - 3] [i_14]) == var_2))) | var_7));
                                var_50 = (max(var_50, 7));
                            }
                        }
                    }
                }
            }
        }
    }
    var_51 = var_16;
    #pragma endscop
}
