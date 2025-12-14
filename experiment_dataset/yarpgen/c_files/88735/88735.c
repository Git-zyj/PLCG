/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= -1477512286;
        var_18 = ((((~(arr_1 [i_0]))) == (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_1 + 1] [i_3] [i_3] [i_1] [i_3] = (~(var_15 & var_16));
                        arr_14 [i_1] [i_2] = (((((1477512286 ? 1477512294 : var_4))) ? var_10 : (arr_5 [i_4 + 1])));
                    }
                }
            }
        }
        arr_15 [16] [16] &= (((!var_8) <= (~var_6)));

        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_19 = (-((((arr_8 [i_5] [i_5] [i_5] [i_1]) && -1477512287))));
            var_20 = -var_16;
            var_21 = (arr_12 [i_1] [i_1] [21] [i_1] [i_1]);
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_22 = (arr_6 [i_1 + 3]);
                        arr_27 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_8] = (((arr_10 [i_1] [i_1] [i_7] [i_1]) >= 10825));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_31 [i_9] |= (((((min(54696, 1))) ? (min(135, (arr_30 [i_9] [i_9]))) : ((max(var_1, 95))))));
        arr_32 [i_9] = (((30186 <= 36) * (min((~var_10), ((max(var_8, var_12)))))));
        var_23 = (max(var_23, ((min((~17565939969720235443), (arr_10 [i_9] [3] [i_9] [i_9]))))));
        arr_33 [i_9] = ((+(((32767 * 45671) / 19871))));
    }
    var_24 = (var_12 ? ((((var_8 && var_14) <= (var_2 + var_5)))) : (max(var_13, (max(var_3, var_13)))));
    var_25 = var_0;
    #pragma endscop
}
