/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_1;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = var_5;
            arr_8 [i_0] [i_0 + 1] [i_1] = -6612;
            var_14 = (max(var_14, (arr_6 [i_1] [1])));
            var_15 = var_12;

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = (min(var_16, 3092391038));
                    arr_16 [i_0] [i_0] [i_3] [i_3] = var_8;
                    arr_17 [i_0] [i_0] [i_3] [i_0] &= (arr_15 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]);
                }
                var_17 = (arr_3 [i_0] [i_1] [i_2]);
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_20 [5] [2] [i_0] = (arr_1 [i_1]);
                var_18 = 17523051972684523713;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 = 14096;
                            var_20 ^= -6626;
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_6] = -2600168195478288859;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_28 [i_0] [i_0] = var_10;

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_21 = (arr_19 [i_7] [i_0] [i_9]);
                        arr_35 [i_8] [i_0] = (arr_15 [i_0] [i_8] [i_7] [i_1] [i_0] [i_0]);
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_22 = (arr_26 [i_1]);
                        var_23 = (arr_37 [i_0] [i_0] [i_0] [i_0]);
                        var_24 -= var_2;
                        var_25 = 6634;
                    }
                    for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_26 = (arr_32 [i_0] [i_0] [i_1] [i_7] [12] [i_11] [i_11]);
                        arr_43 [i_0] [i_7] = var_12;
                    }
                    var_27 = (arr_42 [i_0] [1] [i_0] [i_0] [i_1] [i_7] [i_8]);
                }
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    var_28 = (max(var_28, 351677050));
                    var_29 = 1918586061;
                    var_30 = (arr_0 [i_0]);
                }
                for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_0] [i_0] [i_0] = var_5;
                    arr_52 [i_0] [i_1] [12] = (arr_3 [i_0] [i_1] [i_13]);
                }
                for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_31 = 17523051972684523709;
                    var_32 = (arr_9 [i_0] [i_1] [i_7]);
                    var_33 *= (arr_3 [17] [i_1] [i_1]);
                    arr_57 [i_0] [i_1] [11] [i_0] [i_14] = (arr_18 [i_0] [i_0] [16] [i_0]);

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_34 = (min(var_34, var_2));
                        var_35 = (min(var_35, 18));
                    }
                }

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_63 [i_16] |= (arr_1 [i_0]);
                    var_36 &= 255;
                }
                var_37 = (arr_15 [i_0] [i_0] [i_0] [i_1] [9] [i_0]);
            }
        }
        var_38 &= var_7;
    }
    var_39 = var_2;
    #pragma endscop
}
