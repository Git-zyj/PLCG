/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 |= (((~var_6) % 58515));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (min(var_17, (((~(~-9269))))));
            var_18 ^= (arr_3 [i_0 + 1] [i_0 - 2]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 ^= (((~var_1) % ((var_5 & (arr_4 [i_0 + 1] [i_0 + 1])))));
                        arr_10 [i_1] &= var_10;
                        arr_11 [11] [i_1] [i_1] [i_0] [i_3 + 2] = ((-var_7 % (~-4033975111454031655)));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_0] = (((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -4033975111454031655 : (arr_9 [i_0 + 2] [i_0] [i_4] [i_0] [i_4] [i_0 + 2]))) + 9223372036854775807)) >> (((arr_4 [i_4] [i_4]) - 9019268689145110988))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_20 = 53285;
                        arr_21 [i_0] [i_0] = (--9283);
                        var_21 = var_11;

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_26 [i_0] [5] [i_0] [8] [i_7] = var_8;
                            var_22 = (((arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [5] [5]) ? var_5 : (arr_12 [i_0] [i_0 - 2] [i_0])));
                        }
                    }
                }
            }
            arr_27 [i_0] [i_4] [i_4] |= var_12;
        }
        var_23 = (((var_13 * 18831) || (arr_4 [i_0] [6])));
        var_24 = (((!-1211694781) ? (var_11 * 17) : var_6));
    }
    #pragma endscop
}
