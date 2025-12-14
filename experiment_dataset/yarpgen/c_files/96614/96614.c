/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = var_3;
            var_15 = var_7;

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_16 = var_11;

                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_17 = ((-(arr_1 [i_0])));
                    var_18 = var_0;
                }
                var_19 = (~var_4);
            }
            var_20 = (arr_9 [i_0] [16] [9] [i_0]);
            arr_10 [i_0] [i_0] [17] = var_5;
        }
        var_21 -= (!56765);
    }
    var_22 = var_12;

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_13 [15] [i_4] = var_0;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = (min(var_23, (arr_2 [4] [i_4] [20])));
            var_24 = (min(var_24, var_4));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_25 ^= (arr_8 [18] [i_8] [1] [18]);
                            var_26 = (min(var_26, (((!(arr_24 [i_6] [i_7] [i_6] [i_9]))))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_27 = ((~(((~(arr_0 [i_7] [i_10]))))));
                    var_28 *= (~var_8);
                    arr_30 [i_6] [19] [21] = (arr_23 [i_4] [i_4] [i_4] [i_4]);
                }
                arr_31 [i_4] [i_7] = (~var_5);
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_29 = (min(var_29, (~var_1)));
                var_30 = (min(var_30, var_10));

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_31 = var_1;
                    arr_39 [i_4] [i_4] [i_4] [i_4] = var_0;
                }
            }
            var_32 = (min(var_32, (!var_11)));
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {
            arr_43 [1] [1] [1] = var_10;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            arr_50 [i_4] [i_4] [16] [i_14] [i_4] = ((~(arr_15 [16] [i_13])));
                            var_33 = var_12;
                            var_34 = (max(var_34, var_2));
                        }
                    }
                }
            }
            var_35 = var_7;
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
        {
            var_36 |= var_4;
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    {
                        var_37 = (min(var_37, (((!(arr_27 [i_4] [i_17] [i_4] [i_18] [i_19]))))));
                        var_38 = ((~(arr_11 [i_19] [i_17])));
                    }
                }
            }

            /* vectorizable */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                var_39 *= (!var_4);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        {
                            var_40 = (!var_12);
                            var_41 = var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
