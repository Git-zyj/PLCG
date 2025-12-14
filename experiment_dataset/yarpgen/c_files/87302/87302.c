/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = 1;
        var_13 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (((arr_1 [i_0 + 2]) ^ ((((arr_4 [i_2] [i_1] [i_0]) & (!-3))))));
                    var_15 = (max(255, var_10));
                    arr_7 [i_0] [i_1 - 1] [i_2] [i_1 + 1] = (+-1);
                }
            }
        }
        var_16 = (arr_3 [i_0 + 1] [i_0 - 1]);
        arr_8 [i_0] &= (min(((min(var_10, (arr_3 [i_0 + 2] [i_0 + 2])))), (arr_0 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 = (((((arr_10 [i_3]) + 2147483647)) >> 1));
        var_18 ^= (((((1 ? 1 : 8388607))) ? -16 : (arr_10 [i_3])));
        var_19 = (arr_9 [i_3]);
    }
    var_20 = (((((~var_5) + 2147483647)) >> (var_2 - 50619)));
    var_21 *= (min((((((-8269867934281750118 ? -28816 : var_5)) > var_7))), (var_11 | 36)));
    #pragma endscop
}
