/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_10 ^= (-7000869259905228601 ? (arr_5 [6] [i_1]) : var_7);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 &= var_9;
                        arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = ((7000869259905228586 - (~-7000869259905228601)));
                        var_12 = (!(((7000869259905228586 ? -7000869259905228586 : var_0))));
                    }
                }
            }
            var_13 = var_3;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_14 ^= var_2;
                            var_15 -= ((255 ? var_9 : var_4));
                            var_16 = (max(var_16, var_0));
                            arr_23 [i_0] [i_4] [i_4] = (((arr_20 [i_7] [i_7 - 2] [i_0] [16] [i_7] [i_0]) ? (arr_12 [i_0]) : ((var_1 ? var_7 : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
            var_17 = var_0;
            var_18 = (arr_13 [i_0] [i_0] [i_0]);
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_26 [i_0] = -20;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {
                        var_19 = (max(var_19, (~var_3)));
                        var_20 -= var_1;
                    }
                }
            }
            arr_33 [i_0] [i_8] [i_8] = ((!((min(var_9, 7000869259905228611)))));
        }
        arr_34 [i_0] = -24635;
        arr_35 [i_0] = ((((var_6 + (~469333395)))) ? 7000869259905228611 : var_7);
    }
    var_21 ^= (min(((0 ? (max(7000869259905228585, var_4)) : -var_1)), ((((((3262430385594663757 ? var_0 : -7000869259905228586))) <= ((4 ? var_8 : var_7)))))));
    var_22 = ((!((((0 >= 29034) ? ((104 ? var_4 : var_8)) : (-469333400 || 4611686018427387904))))));
    #pragma endscop
}
