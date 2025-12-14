/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min((((var_4 / (var_7 / var_10)))), (var_1 * -4721748321978428413)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = 0;
                            var_14 = var_6;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_15 *= var_5;

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_16 ^= (arr_4 [8] [i_0 - 1]);
                        var_17 = (!var_9);
                    }
                }
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    var_18 = ((((((((~(arr_11 [i_6 - 3] [i_1])))) ? (arr_15 [i_0 - 1] [i_1] [i_6 - 3] [i_6]) : ((~(arr_5 [i_0] [2] [2])))))) ? ((var_9 ? (((min(0, 48576)))) : var_3)) : ((((((var_10 << (var_7 - 57820))) != (((arr_1 [i_0]) | var_5))))))));
                    var_19 = 1;
                }
                var_20 = var_0;
            }
        }
    }
    var_21 = (~((((((var_9 ? var_2 : var_2))) && (var_6 || var_6)))));

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_22 += 2592;
        var_23 = var_7;
        var_24 ^= (var_11 ? 1 : ((1334889816 ? -2592 : (arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    #pragma endscop
}
