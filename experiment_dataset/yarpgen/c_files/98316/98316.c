/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((~((((max(var_6, var_9))) | var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = 127;
                            arr_10 [i_1] [i_1] [i_2] [i_1] [i_2] [i_0] = (-98 <= 768);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
