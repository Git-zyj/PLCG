/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_0) & var_3));
    var_11 = (var_3 && var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (~var_1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] &= (var_9 ? var_4 : var_4);
                                arr_13 [0] [19] [i_2] [19] [1] [i_4] = (var_4 ^ var_4);
                            }
                        }
                    }
                    arr_14 [14] [i_0] = (~13);

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_5] = ((var_6 ? var_0 : var_2));
                        var_13 = ((var_8 ^ 68) - (7431919102219937668 ^ 241));
                    }
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_14 = ((11014824971489613948 ? (var_9 | var_1) : var_5));
                        var_15 = (min(var_15, (var_2 % var_6)));
                    }
                }
            }
        }
        var_16 = (var_7 > var_8);
    }
    #pragma endscop
}
