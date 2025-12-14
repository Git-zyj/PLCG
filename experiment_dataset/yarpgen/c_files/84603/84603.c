/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(~var_1)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 = var_7;
        arr_2 [i_0] [i_0] = ((15 ? 1490445149845516680 : (((127 - (!-8526948371920789307))))));
        var_16 -= (min(149, 3545620835811002449));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_17 *= var_11;
                            var_18 = (max(var_18, (!var_6)));
                            var_19 = (max(var_19, ((!(arr_8 [i_4 - 1] [0] [i_2] [i_4 - 1] [i_3 + 1])))));
                        }
                    }
                }
                var_20 = (max(var_20, var_12));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_21 = (max(var_21, (~128)));
                var_22 = var_9;
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_7 + 1] = ((-(arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])));
                        var_23 ^= (arr_9 [18]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            arr_21 [i_0] [0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_8]);
            arr_22 [i_0] [6] &= var_12;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    {
                        var_24 = (min(var_24, (arr_25 [i_11 + 3])));
                        var_25 = (min(var_25, var_3));
                        arr_30 [i_0] [i_0] [i_10] [i_9] = ((var_11 ? (arr_15 [i_11 + 3] [i_9] [i_0]) : (arr_6 [i_11 + 3] [i_11 - 1] [i_11 - 2] [i_11 - 1])));
                    }
                }
            }
            var_26 -= (!(arr_16 [i_0] [4]));
            var_27 += ((var_5 ? var_5 : var_5));
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 24;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                var_28 = (var_12 ? (arr_34 [i_0] [i_13 + 1]) : (arr_37 [i_13 + 1] [23] [i_13 + 1] [i_13 + 1]));
                arr_38 [i_12] [i_12 + 1] [i_12] |= (!var_2);
            }
            var_29 ^= var_11;
            var_30 = ((var_8 ? (arr_7 [i_12 - 1] [i_0]) : var_12));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        arr_41 [7] [i_14] = (var_4 ? var_5 : var_6);
        var_31 += var_0;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        arr_44 [3] = arr_24 [i_15];
        var_32 ^= ((var_2 ? (arr_39 [i_15]) : (arr_39 [i_15])));
        var_33 = ((-(!var_2)));
    }
    var_34 = (var_5 == var_13);
    #pragma endscop
}
