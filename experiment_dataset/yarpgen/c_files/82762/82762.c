/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_0 & var_7) | var_6));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = 3473967439;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = -64;
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = ((min((arr_13 [i_0 + 2] [i_1] [i_4] [i_1] [i_4] [i_1]), 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
