/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = ((~(~2482123149)));
                        arr_9 [i_3] [i_1] [i_2] [i_3] |= 1;
                    }
                }
            }
        }
        var_16 = ((~(((arr_3 [i_0 + 4] [i_0] [i_0]) ? (arr_8 [1] [i_0 - 1] [1] [i_0] [i_0]) : ((var_13 ? var_12 : 29652))))));
        var_17 = (arr_7 [i_0] [15] [i_0]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (min(var_6, (arr_10 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_4] [i_6] [i_6] = (((min(((145 * (arr_0 [i_6]))), (((-(arr_3 [i_4] [i_5 + 2] [0]))))))) ? ((((!((max(var_5, 63))))))) : (max((arr_0 [i_6]), ((min(var_9, (arr_16 [i_4] [i_4] [1] [i_6])))))));
                    arr_19 [1] = arr_2 [i_4] [16] [i_6];
                    var_18 -= ((!((max(var_14, -63)))));
                }
            }
        }
        var_19 = ((((((((var_10 ? -7348540984753012423 : 1))) ? ((max(63, 31))) : ((~(arr_14 [0])))))) ? ((~(~var_0))) : (~-64)));
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_20 = ((18446744073709551615 ? 122 : 63));
        var_21 = ((26891 != (((-453213199 >= (arr_21 [i_7 + 3]))))));
        var_22 = 62;
        var_23 = 3235270280;
    }
    var_24 = (~var_8);

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_25 *= (((arr_24 [i_9] [i_11] [19]) ? 0 : var_5));
                            var_26 = (((arr_30 [i_9]) ? (((arr_30 [i_9]) ? 0 : 18446744073709551615)) : (arr_27 [14] [i_9] [i_10 - 1] [i_10 + 1])));
                            var_27 = (((arr_23 [i_10 - 3]) ? (arr_23 [i_10 - 1]) : 806407905564396169));
                            var_28 = (((arr_26 [i_10 - 1]) > var_12));
                        }
                    }
                }
            }
            arr_32 [i_8] [i_9] = (((arr_31 [i_8] [i_9] [i_9] [i_9] [i_9] [i_8]) ? -var_14 : ((1 ? var_10 : (arr_28 [1] [i_8] [i_8] [i_9] [i_9] [i_9])))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    {
                        var_29 = (arr_34 [i_8] [i_9] [i_8]);
                        var_30 = ((~((var_7 ? var_3 : (arr_34 [16] [i_9] [12])))));
                    }
                }
            }
            var_31 = (((((arr_30 [i_9]) / (arr_23 [i_8])))) ? 1152921504602652672 : (arr_24 [i_8] [i_8] [i_8]));
        }
        var_32 &= ((-453213199 ? (arr_27 [i_8] [i_8] [i_8] [i_8]) : (((((0 ? 0 : var_12))) ? (((-(arr_28 [i_8] [i_8] [i_8] [i_8] [21] [i_8])))) : -var_0))));
    }
    var_33 = var_8;
    var_34 = ((!((((((var_8 ? var_3 : 111))) ? -4843206978629412643 : var_5)))));
    #pragma endscop
}
