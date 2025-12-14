/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_14, var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_8));
                                var_18 = ((var_13 ? -var_3 : (max(var_11, var_14))));
                            }
                        }
                    }
                    var_19 = (((((var_10 ? var_11 : var_1))) ? var_12 : (!var_5)));
                    var_20 = var_8;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_21 = (max(((max(var_10, var_1))), (((((var_9 ? var_11 : var_3))) ? (~0) : var_13))));
                        arr_14 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = (max((max(var_13, var_1)), ((max(1, 0)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((1914045050864642025 ? 7055 : -7050)), 1));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_18 [i_0] = (~var_2);
                        arr_19 [i_6] [i_0] [i_1] [i_0] = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
