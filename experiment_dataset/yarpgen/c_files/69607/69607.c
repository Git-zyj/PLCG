/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((((var_14 ? var_9 : var_10))) && var_14))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (~((-4222350472324372859 | (arr_6 [i_3] [i_3]))));
                                var_20 += ((~(!2040006228184017339)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_21 += (616491936973922248 / 616491936973922228);
                        var_22 = (max(var_22, -616491936973922228));
                        var_23 = (max(var_23, var_3));
                    }
                    var_24 = (var_11 & -var_7);
                }
            }
        }
    }
    var_25 += var_6;
    var_26 = var_17;
    #pragma endscop
}
