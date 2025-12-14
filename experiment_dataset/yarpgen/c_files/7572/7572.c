/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? (((((max(var_4, var_17))) ? var_2 : var_2))) : (max((3926273374 || -50), var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = var_15;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, var_13));
                        var_22 = ((var_13 ? var_15 : var_5));
                        var_23 = (!var_18);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_24 = (max(var_16, ((min(var_7, var_13)))));

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_25 = var_11;
                            var_26 = ((!(((var_13 || var_15) && var_8))));
                        }
                    }
                    var_27 = ((-((var_7 ? var_1 : var_7))));
                }
            }
        }
    }
    var_28 = (min(var_12, var_9));
    var_29 = var_15;
    #pragma endscop
}
