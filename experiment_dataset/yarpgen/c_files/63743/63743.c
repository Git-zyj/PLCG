/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) < var_5));
        arr_3 [i_0] [i_0] = (var_4 >= var_5);

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_10 ^= ((-var_3 && (arr_1 [i_0])));
            var_11 = ((((var_6 << (((arr_5 [i_0] [i_1]) + 1539505916351627611)))) >= var_4));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] = var_1;
            arr_9 [i_2] [i_2] [i_0] = (((~-2079144130) >= 1));
            arr_10 [i_2] [i_2] = 511;
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_12 *= ((((((arr_7 [i_3] [i_0]) ? var_9 : (arr_7 [i_3] [i_0])))) ? 58069 : var_6));
            var_13 = (((((arr_6 [i_3] [i_3]) + 2147483647)) >> (((((arr_4 [i_0] [i_0] [i_0]) ? var_6 : var_4)) - 28817))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_14 = (min(var_14, var_1));
            var_15 -= (((arr_6 [i_0] [i_4]) ? 251 : (!202)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_19 [i_5] [i_0] [i_5] [i_6] [i_4] [i_5] = -64;
                        var_16 = (max(var_16, (arr_7 [i_0] [i_5])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_17 = ((arr_15 [i_7] [i_7]) / 2079144151);
        var_18 = (((((-(arr_20 [i_7])))) || (arr_12 [i_7] [i_7])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    {
                        var_19 = (((79 & -1) ? -36 : 32754));
                        arr_34 [i_7] [i_7] [i_7] [i_10] [i_7] = var_9;
                        var_20 = (min(var_20, (var_3 % var_4)));
                        arr_35 [i_8] [i_10] [i_10] = (var_3 < var_4);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                {
                    var_21 = var_7;
                    var_22 = -1;
                }
            }
        }
    }
    var_23 = (min(var_23, ((((((~((var_9 << (var_9 - 17060)))))) ? ((((!671660801) >= var_0))) : ((232 ? -1 : 10)))))));
    var_24 *= (((var_5 ? 2147483647 : 7550)));
    var_25 = var_9;
    #pragma endscop
}
