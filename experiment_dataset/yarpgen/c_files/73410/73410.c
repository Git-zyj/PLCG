/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 *= var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = var_6;
                            var_15 = var_1;
                        }
                    }
                }
                var_16 = var_6;
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [i_4] = var_8;

        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_17 = var_5;
            var_18 = var_2;
            var_19 = var_6;
            var_20 = var_1;

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_3));
                            var_22 = (max(var_22, var_8));
                            var_23 = var_2;
                            var_24 = var_8;
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_25 = var_5;
                    var_26 = var_9;
                    var_27 = var_7;
                    var_28 = var_4;
                }
                arr_33 [i_5] [i_5] [i_5] [i_5] = var_3;
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                var_29 = var_0;
                var_30 -= var_9;
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_43 [i_13] [i_13] [i_11] [i_11] [i_4] [i_4] = var_7;
                        var_31 = (max(var_31, var_9));
                        var_32 = var_6;
                    }
                }
            }
        }
        var_33 = var_7;
        var_34 = var_9;
    }
    #pragma endscop
}
