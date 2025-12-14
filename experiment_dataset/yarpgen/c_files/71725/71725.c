/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((arr_0 [i_0]) / 1)))));
        var_21 = ((255 ? (arr_2 [i_0]) : (!-1)));
        var_22 = (((arr_0 [i_0]) * 0));
        var_23 = ((-11094 ? -7899 : 9223372036854775805));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_24 |= 31888;
        var_25 += ((var_7 ? (arr_2 [0]) : var_10));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_26 = ((arr_8 [i_1]) ? 11 : -8);
                        arr_12 [i_1] [i_1] [i_3] [i_1] = (((arr_9 [i_4] [i_4] [i_4] [i_3 + 1]) || -4));
                        var_27 -= ((-1368 - (((28736 < (arr_2 [4]))))));
                        arr_13 [16] [i_3] [i_2] [16] |= ((12703 << (((arr_10 [i_3 + 1] [i_2 - 1] [i_3 + 1]) - 51304))));
                    }
                }
            }
        }
        var_28 = var_16;
    }
    var_29 = (+(((!1349) ? 32 : var_9)));
    #pragma endscop
}
