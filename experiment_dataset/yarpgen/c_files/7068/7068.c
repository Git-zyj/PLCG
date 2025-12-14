/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = var_4;
        var_14 = (((18446744073709551615 * var_9) / ((var_6 ? 1 : (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 ^= (arr_2 [i_1]);
        var_16 &= (((arr_1 [21]) != var_11));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_17 += (min(0, 0));
        arr_6 [i_2] [i_2] = (255 | var_3);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_18 = var_4;
                        arr_15 [i_4] [i_4] [i_4] [i_3] = 20;
                        var_19 &= -22673;
                        var_20 -= (arr_10 [i_5] [i_4] [i_4] [i_2 + 2]);
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = var_2;
        arr_20 [6] &= (~18446744073709551615);
    }
    var_21 *= (min((max(2530191737592398046, 0)), var_1));
    #pragma endscop
}
