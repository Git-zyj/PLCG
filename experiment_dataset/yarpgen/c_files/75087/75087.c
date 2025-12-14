/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = ((-(arr_4 [i_0] [i_1] [i_2])));
                    var_18 *= (arr_4 [i_2 + 3] [i_2] [i_2 + 3]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_9 [i_0] = (((arr_7 [i_0] [i_3]) * (arr_5 [i_0] [i_3] [i_3])));
            var_19 |= 1773027823;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_20 = (((arr_4 [i_3] [i_4] [i_6]) >> (1773027822 - 1773027808)));
                            arr_18 [i_0] [i_3] [i_0] [i_5] [i_6] = var_9;
                        }
                    }
                }
            }
            var_21 -= ((-(arr_4 [i_0] [i_3] [i_3])));
        }
        var_22 = (min(var_22, ((((((var_15 - (arr_17 [i_0] [i_0])))) || ((((((arr_2 [1]) + 2147483647)) >> (((arr_17 [i_0] [i_0]) - 14155641865333918287))))))))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_23 [i_7] = (min(((((max(-1773027823, (arr_2 [14])))) ? var_16 : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7]))), (arr_1 [8])));
        arr_24 [i_7] = ((((((arr_19 [i_7]) | 226))) ? 0 : (((0 * 9) % (max((arr_11 [10] [i_7]), var_10))))));
        arr_25 [i_7] [i_7] = (min((arr_19 [i_7]), var_14));
        var_23 = (((15674034903038104532 >> (((max(-25269, var_7) - 18446744073709526330))))));
        arr_26 [i_7] = ((var_13 ? (arr_10 [i_7]) : ((((37 > (arr_17 [i_7] [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_24 = ((!((((arr_5 [i_9] [i_10 - 1] [i_9]) | 25269)))));
                        var_25 = (min(var_4, (--9223372036854775807)));
                    }
                }
            }
        }
        arr_37 [i_8] [i_8] = (min(0, 238));
    }
    #pragma endscop
}
