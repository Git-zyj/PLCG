/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 1994435491360996798;
                var_18 = 2884565426;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = 15;
                                var_20 += -730876892;
                                var_21 = 730876883;
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_2] = -20;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 1;

    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 *= -105;
                    var_24 = 43;
                }
            }
        }
        var_25 = (max(var_25, 1));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_26 = (-9223372036854775807 - 1);
        var_27 *= 57855;
        arr_23 [i_8] = 1;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_28 = -805594191;
                    var_29 = 0;
                    var_30 = 4294967295;
                    arr_28 [i_8] [i_9] [i_9] [i_9] = 31073;
                }
            }
        }
    }
    var_31 = -32;
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 7;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_32 *= -78;
                                var_33 = (min(var_33, 1));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    arr_46 [i_11] [i_12 - 2] [i_11] = 2048657817012325887;
                    var_34 = -16581;
                    var_35 = 3713640766;
                }
            }
        }
    }
    #pragma endscop
}
