/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_16 ^= 1739784676;
        var_17 *= var_11;
        arr_8 [i_1] = ((+(min((arr_7 [i_1]), var_9))));
        arr_9 [i_1] = ((((((arr_7 [i_1]) ? var_10 : var_8))) ? ((var_2 ? (arr_7 [i_1]) : var_2)) : (arr_7 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_21 [i_5] = var_4;
                        var_18 -= 13;
                        arr_22 [i_2] [i_5] [i_2] [i_2] [3] = (((var_7 != var_1) ? ((((arr_5 [i_2]) ? -929646139349610159 : var_11))) : var_14));

                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (var_4 | (((var_15 ? 505152833 : 0))));
                            arr_26 [i_2] [9] [i_2] [i_5] [i_6] = ((var_13 ? var_4 : (arr_14 [22] [i_3])));
                            var_20 = ((var_4 ? var_3 : (arr_23 [i_6 - 1] [i_5 + 2] [i_5] [i_5 - 1] [i_5])));
                            var_21 = (min(var_21, var_5));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_29 [i_5] = (((arr_10 [i_7 + 4]) && var_6));
                            arr_30 [i_5] [i_3] [i_5] = (((((var_13 ? (arr_28 [i_5] [5]) : var_13))) ? (arr_15 [i_5 - 1]) : (((var_7 ? 511 : var_6)))));
                            var_22 &= ((65513 ? (arr_13 [i_2] [i_5 - 1] [i_5 - 1]) : 67108856));
                        }
                    }
                }
            }
            var_23 = (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_2]) ? var_9 : (arr_6 [i_3])));
        }
        var_24 &= 214;
        var_25 = (min(var_25, ((((var_7 >> (var_7 - 2877108299)))))));
    }
    var_26 = (min(var_26, 214));
    #pragma endscop
}
