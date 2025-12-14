/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_14 & 0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 -= (~var_3);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = ((39601 + ((((1 % var_15) != -7264461281126060632)))));
                            var_21 = (arr_7 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] = (25935 / 4839);
                            var_22 = (((11406 * 8) >= (((((arr_6 [i_0] [i_0]) + 2147483647)) << (((46 && var_0) - 1))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            var_23 = var_11;
            var_24 = (min(var_24, (arr_5 [i_7 + 1] [i_7] [i_6])));
            var_25 = 4;
            arr_23 [i_7] [i_7] [i_7] = var_2;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                {
                    var_26 |= 26860;
                    arr_30 [i_9] [i_9] [i_9] [i_9] = ((((((55 > (((arr_17 [i_6] [i_6]) & (arr_12 [i_8] [i_8] [i_6]))))))) + (((1 / 2) ? -1 : (49103 + 2440231812)))));
                }
            }
        }
        var_27 = ((~((((1 != (arr_27 [i_6])))))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_33 [i_10] = (((-1188841034 * 1) | -106));
        arr_34 [i_10] = var_6;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_28 = 26850;
                    var_29 = ((var_13 > (arr_1 [i_10])));
                }
            }
        }
        var_30 *= -10;
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_45 [i_13] = (arr_42 [i_13] [i_13]);

        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {
            var_31 = 1781098555;
            arr_48 [i_13] [i_13] = -7494502715053496000;
            var_32 = (((!var_16) && 24));
            var_33 = ((((38676 * 233) << 4095)));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_34 = (((-5363993501260161247 - 1) + (89 + 24)));
            arr_51 [i_13] = (255 % var_3);
            var_35 &= -var_7;
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_36 = -4;
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    {
                        arr_61 [i_18] [i_17] [i_17] [i_13] = 18;
                        var_37 = (((var_16 * 118) | (24 <= 55)));
                        var_38 = (var_17 + 69);
                    }
                }
            }
            var_39 = 0;
        }
        var_40 = (max(var_40, 224));
    }
    #pragma endscop
}
