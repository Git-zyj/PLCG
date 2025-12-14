/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (-9 >= 7680);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_3] = (((((-(arr_10 [i_3] [i_2] [i_1] [i_0] [i_0])))) ? (arr_2 [i_0]) : (arr_9 [i_1 - 2])));
                        arr_15 [i_2] [i_0] = (2058 ? -772000950 : var_1);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_10 = arr_8 [i_2] [i_2 - 2] [i_0] [i_2];
                            var_11 = (arr_10 [i_1] [i_0] [i_2] [i_4] [i_1 + 1]);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_0] = var_7;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_12 &= (max((arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_6]), 8));
                            arr_26 [i_0] [i_1] [i_6] [i_4] [i_0] = 511;
                            var_13 -= (max((((60404011 && (arr_3 [i_1])))), 536866816));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_14 = 2043;
                            var_15 = (((arr_29 [i_2 - 3] [i_7] [i_7] [i_7] [i_0]) >= (arr_29 [i_2 + 2] [i_7] [i_7] [i_7] [i_0])));
                        }
                        var_16 = ((((!(((-840063255 ? var_6 : 1792))))) ? ((~(arr_27 [i_0] [i_1 - 1]))) : (--1792)));
                        var_17 = ((~(min(127, (!1769)))));
                    }
                    var_18 = (max(var_9, (((~63475) % 1))));
                }
            }
        }
        var_19 = ((arr_17 [i_0] [i_0] [i_0] [i_0]) || (((63 && var_7) < (~-1809))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 = ((((((arr_19 [i_0]) ? -23445 : (var_9 - 1)))) ? (((127 * (max(var_0, -5103))))) : (min((arr_8 [i_9] [i_8 + 1] [i_0] [i_9 - 1]), (arr_30 [i_0] [i_8] [i_9])))));
                    var_21 = (max(var_1, (arr_29 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_0])));
                    var_22 ^= ((((1 << (85 - 61)) & (var_2 <= var_6))));
                    var_23 ^= -9;

                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        var_24 ^= ((((arr_32 [i_10] [i_8] [i_9] [i_8]) >> (-1818 <= 2083))));

                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_25 |= -962217175;
                            arr_44 [i_11] [i_0] [i_0] = ((~(max(-1, (min(12757416496388324294, 13002877841318974856))))));
                        }
                    }
                }
            }
        }
        var_26 = 1;
    }
    var_27 = ((+((((31 >= 1) != var_6)))));
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                var_28 -= (~(arr_17 [i_12] [i_12] [i_12] [i_13]));
                var_29 ^= (min(-var_4, (max((arr_30 [i_13 - 1] [i_12 - 2] [i_12]), 524287))));
            }
        }
    }
    var_30 = var_7;
    #pragma endscop
}
