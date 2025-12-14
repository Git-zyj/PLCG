/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (~var_11);
                arr_6 [i_0] &= var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = (!var_6);
                            var_17 = (~5);
                            var_18 = (max(var_18, var_10));
                            var_19 = ((!(~57346)));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_5] [i_6] [i_4 + 3] = ((-(~var_0)));
                    var_20 = (~205);
                }
            }
        }
        arr_19 [i_4] = var_0;
        var_21 = -var_9;
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_22 = (min(var_22, var_6));
        arr_22 [i_7 + 1] = -var_12;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_25 [i_8] |= var_5;
        var_23 |= var_8;
        var_24 |= (((~(~var_5))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_25 = (!var_14);
        var_26 = var_15;
    }
    #pragma endscop
}
