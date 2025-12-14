/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = var_3;
                    var_12 = (min(((var_1 ? (arr_5 [i_2]) : var_3)), var_9));
                    var_13 = var_2;
                    arr_8 [i_0] [i_0] [11] [i_2] = (min(13399040725311725276, var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min((arr_3 [i_2 + 1] [i_2 - 1] [i_1 + 1]), var_0));
                                arr_15 [i_0] [i_1 + 3] [i_2] [i_1] [i_2] [i_1] = (min((-16168 > 9), (0 && -16168)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_8, (min(((var_4 ? var_5 : var_2)), ((var_0 ? var_10 : var_7))))));
    var_16 = (min(var_16, var_9));
    var_17 = (min(var_17, (((min(6, var_9))))));
    var_18 = (max(var_18, ((min(var_9, -var_8)))));
    #pragma endscop
}
