/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((max(var_0, var_9)) ? ((min(var_5, var_1))) : (max(var_4, var_5))));
                    var_16 = ((var_5 ? (((-((max(var_12, var_0)))))) : (max(var_10, var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((var_13 ? var_3 : var_12));
                                var_18 &= (max((((!var_3) ? (~var_2) : ((min(var_4, var_13))))), ((-var_8 ? var_4 : (((var_10 ? var_8 : var_8)))))));
                                arr_12 [9] [i_1] = var_10;
                            }
                        }
                    }
                    var_19 = (~var_13);

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_20 &= var_2;
                        arr_16 [i_1] = var_1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
