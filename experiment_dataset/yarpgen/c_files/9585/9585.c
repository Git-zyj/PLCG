/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = var_4;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = arr_3 [i_0];
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 = 946074657;
                            var_22 = (((arr_1 [i_0] [i_1 - 1]) ? (arr_4 [1] [i_1 - 1] [i_2]) : var_9));
                            var_23 = (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [9] [i_1 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_24 = (max(var_24, (arr_14 [1])));
            var_25 = (min(var_25, 946074657));
            var_26 = arr_10 [i_0 - 1] [i_0 - 1] [1] [i_0] [i_0 - 1] [i_0 - 1] [i_0];
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_27 = arr_14 [i_0];
            var_28 = var_5;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_29 ^= (1 * 0);
                            var_30 = (arr_3 [i_7 + 1]);
                            var_31 &= (arr_9 [i_6] [i_7 + 1] [i_8] [i_8] [i_9]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_32 = 1;

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_33 = (((arr_30 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ (arr_30 [1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    var_34 = (arr_25 [i_0] [i_0 - 1] [1] [i_12] [1] [1]);
                    var_35 = ((arr_18 [i_0 - 1] [1] [i_0 - 1]) ? (arr_29 [i_0 - 1] [i_10]) : (arr_21 [9] [i_10] [i_11] [i_0 - 1]));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_36 = (arr_7 [i_0] [0] [i_11] [i_10]);
                    var_37 = 3348892638;
                    var_38 |= (arr_18 [i_0] [i_0] [i_11]);
                    var_39 -= (arr_26 [i_0 - 1] [i_0 - 1]);
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_40 &= arr_34 [i_0 - 1] [0] [0] [i_14];
                    var_41 = 946074657;
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_42 -= 3348892638;
                            var_43 = (max(var_43, (arr_16 [i_0] [i_16])));
                            var_44 = (~3348892638);
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_45 = (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                var_46 = arr_21 [i_17] [i_17] [i_10] [i_0 - 1];
            }
            var_47 = (!var_8);
        }
        var_48 *= ((~(arr_41 [i_0] [1] [0] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_49 = (min(var_49, 3348892641));
        var_50 = 1;
    }
    #pragma endscop
}
