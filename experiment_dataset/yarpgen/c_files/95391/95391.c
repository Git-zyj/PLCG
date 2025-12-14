/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 += 66;
        var_11 = min((arr_0 [i_0]), (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((min((arr_3 [i_1] [i_1]), var_5)));
        var_12 ^= (min(((min((arr_4 [i_1]), 4294967280))), 139));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_13 = 4294967280;
                var_14 = (max(var_14, (arr_7 [i_1] [i_1] [i_1])));
                var_15 = 579511638;
            }
            var_16 += var_3;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (arr_5 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_23 [i_4] [13] [i_6] |= var_5;
                    var_17 = (arr_12 [i_4] [i_4] [i_5] [i_5]);
                }
            }
        }
        arr_24 [i_4] [i_4] &= var_0;
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        var_18 = (min(var_18, (16 || -3232)));
        var_19 |= (max((arr_22 [i_7] [i_7 - 1] [i_7] [i_7 + 2]), -87));
    }
    var_20 = 172;
    #pragma endscop
}
