/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((max((arr_1 [i_0] [i_0 + 1]), var_5)) / var_7));
        var_11 = (min(var_11, (((((((var_7 ? var_5 : var_0))) ? (min((arr_2 [i_0]), 1)) : var_3))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_12 = var_8;
            var_13 *= var_4;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_14 ^= -var_4;
            var_15 = (max(var_15, (~65531)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_0] = (arr_5 [i_3] [i_0]);
            var_16 = (max(var_16, (((~(var_9 == var_6))))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_17 *= (((((arr_9 [i_0]) ? var_8 : var_10))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_18 = (((max((~1), var_6))) ? (arr_12 [i_7] [i_7] [i_7]) : (arr_17 [i_0] [i_4] [i_5] [i_7]));
                            var_19 = (max((arr_10 [i_5] [i_7]), ((((min(244, 0))) ? 1 : (~-9223372036854775805)))));
                            var_20 ^= ((~(((max((arr_18 [i_7] [i_5] [i_0]), 0))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_21 = var_8;
        var_22 = ((!(arr_7 [i_8 - 1] [i_8])));
    }
    var_23 = (!1);
    #pragma endscop
}
