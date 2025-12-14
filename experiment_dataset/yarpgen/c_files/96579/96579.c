/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (-127 - 1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = 2372352261;
                    arr_8 [i_0] [i_1] [5] = -127;
                    var_21 = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [11] [i_1 - 1] [i_0] = (-115 ^ 10316219395691499018);
                                var_22 = (-127 - 1);
                                arr_18 [i_0] [12] [i_4] = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }
                    var_23 = 127;
                }
            }
        }
        arr_19 [i_0] = (--0);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = (-127 - 1);
        var_25 = ((-(((arr_7 [i_5] [i_5] [i_5]) & 16))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                {
                    var_26 = 3394662328;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_27 = 53700;
                                var_28 -= ((-((-(arr_20 [i_5])))));
                            }
                        }
                    }

                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        arr_36 [9] [i_7] = 3366923496;
                        arr_37 [i_5] [i_6] [5] [i_10] = (arr_27 [6] [6]);
                        var_29 ^= (arr_28 [6] [i_6] [i_7] [i_10]);
                        var_30 += (arr_1 [i_5]);
                    }
                }
            }
        }
    }
    var_31 = 3366923496;
    #pragma endscop
}
