/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_5 + var_7);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_18, var_9));
                                var_22 = var_16;
                                arr_11 [14] [i_1] = var_5;
                                var_23 = var_8;
                            }
                        }
                    }
                    var_24 = var_10;
                    var_25 = var_7;
                    var_26 = var_18;
                    var_27 = var_17;
                }
            }
        }
        var_28 = var_14;

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_29 = (min(var_29, var_8));
            var_30 = (min(var_15, (max(var_7, var_17))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_20 [i_0] [3] [3] [i_6] [i_7] [i_7] = var_13;
                        var_31 = (min(var_8, ((var_5 + (((min(var_7, var_1))))))));
                        var_32 = ((((min((min(var_2, var_7)), var_1))) * var_14));
                    }
                }
            }
            arr_21 [i_0] [i_5] = var_19;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_33 -= var_2;
            var_34 = var_4;
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_26 [i_0] [i_9] [13] = var_0;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    {
                        var_35 -= var_19;
                        arr_32 [i_9] [i_9] [i_11] = var_9;
                        var_36 = var_8;
                        var_37 = var_9;
                    }
                }
            }
        }
        arr_33 [i_0] = (var_0 ^ var_19);
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_38 = var_10;
                        var_39 = var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_40 = var_19;
                            var_41 = var_6;
                        }

                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            var_42 -= var_12;
                            arr_54 [i_12] [i_13] [i_16 + 1] [i_16] [i_17] [i_19] = var_9;
                            var_43 = var_15;
                            var_44 = var_19;
                        }
                        arr_55 [i_16] [i_16 + 1] [i_13] [i_13] [i_16] = ((var_14 << (var_0 - 565484446024777936)));
                        var_45 = var_2;
                        var_46 = var_11;
                    }
                }
            }
            var_47 = var_0;
        }
        arr_56 [i_12 + 1] [7] = (min(var_18, (var_18 * var_3)));
        arr_57 [3] = (min((min(var_6, var_2)), var_1));
    }
    var_48 = var_8;
    var_49 = var_3;
    #pragma endscop
}
