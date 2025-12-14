/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [16] = (((arr_2 [i_0]) ? var_3 : 1));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0]) * (arr_0 [i_0]))) >> 6487853372684652393));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = (1099511627775 ^ (255 & var_6));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_17 [i_4] [10] [12] [i_4] = -13;
                        arr_18 [i_1] [i_2] [i_2] [i_4] [i_4] = (2067160761263065066 ? (arr_10 [i_1]) : (240 - var_1));
                    }
                }
            }
        }
        arr_19 [i_1] = (((-9096680006787478291 + 9223372036854775807) << (var_3 && var_2)));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_13 = (((((((arr_1 [i_5]) / var_6)))) - ((((var_1 < -30504) || 231)))));
        arr_22 [14] = 240;
        var_14 = 113;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            {
                arr_28 [i_7] = (((237 > var_7) * (237 != var_7)));
                var_15 += (((((~(min((arr_26 [i_6] [i_7] [i_7]), var_9))))) ? 1568267148750457716 : (arr_27 [i_7] [i_7] [i_7 + 2])));
                var_16 = ((((((arr_26 [i_7 + 1] [i_7 - 1] [i_7 + 1]) || var_3))) < var_2));
                arr_29 [i_6] [i_7] [11] = (max(((-23678 ? var_8 : (arr_27 [i_7 - 1] [i_7 - 1] [i_7 + 1]))), 114));
            }
        }
    }
    var_17 = -9096680006787478280;

    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_18 ^= 10274860362878843693;
        var_19 = var_8;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        var_20 = (max(var_20, 8675014652185796563));

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_21 = (-var_6 * 19);
            var_22 = (max(var_22, (var_8 || 116)));
        }
        var_23 = ((var_2 > (arr_33 [i_9 - 1] [i_9 - 1])));
        var_24 = var_9;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_25 = (((arr_34 [i_9 - 1]) ? 19607 : (arr_40 [i_9 - 1] [i_9] [i_9] [i_9])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_47 [i_11] [i_13 - 2] [3] [11] [i_11] = var_5;
                                var_26 = (arr_26 [i_13] [i_12] [16]);
                                var_27 ^= (arr_34 [i_9 + 1]);
                                var_28 = 2199156340742852280;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
