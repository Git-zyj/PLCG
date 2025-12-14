/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (min((min(var_4, var_4)), ((max(var_4, (var_5 < var_1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = (~var_1);
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] = (!var_8);
                                arr_15 [8] [i_0] [i_1] [i_2] [i_3] [i_3] = ((var_2 - var_3) * (60086 / 9168457388878981655));
                                arr_16 [i_3] = (((((var_8 ? var_3 : var_2))) + ((-((0 ? 6589086038484199009 : 5217083275563268701))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((((var_7 ? var_4 : var_9)) - ((var_1 ? var_3 : var_3))));
                }
            }
        }
    }
    var_11 = var_0;
    #pragma endscop
}
