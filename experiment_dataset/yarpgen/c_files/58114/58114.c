/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_21 ^= ((1 ? var_4 : 600580496));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 3] = var_3;
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((-18252 ? var_13 : var_7));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_22 *= (min(((var_3 ? -9223372036854775805 : -600580497)), ((((-600580500 ? 28780 : 2658504792005123846)) + var_16))));
        var_23 = ((var_9 ? ((2564942802 ? 379046074 : 471562892)) : (~0)));
        var_24 = ((-(((var_2 ^ var_14) / 2658504792005123847))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_25 = (max(var_25, var_17));
        arr_17 [i_5] [i_5] = (!-2041046924);
    }
    var_26 = var_14;
    #pragma endscop
}
