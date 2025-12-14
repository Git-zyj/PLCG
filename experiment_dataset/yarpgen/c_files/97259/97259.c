/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 -= ((var_3 ? var_16 : var_13));
        var_20 = var_17;
        var_21 += var_9;
        arr_4 [i_0] = -var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 += (var_1 && var_3);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [i_2] |= ((28878 ? var_11 : (-127 - 1)));
                    arr_12 [i_2] [i_1] = var_5;
                    arr_13 [i_1] [i_1] [i_1] = (((~var_9) ? ((5423017977339010950 >> (193 - 177))) : var_17));
                    var_23 = (104 - 193);
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_24 = var_10;
        var_25 ^= var_8;
    }
    var_26 |= 0;
    var_27 = (((((((28 ? var_8 : 4266))) ? 96 : var_0))) ? (!var_4) : var_11);
    #pragma endscop
}
