/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (!-var_10);
    var_18 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (!1)));
                            var_20 = (min(var_20, (((!(!68))))));
                        }
                    }
                }
                var_21 = ((!((!(!29026)))));
                var_22 = ((-(!-var_16)));
            }
        }
    }
    #pragma endscop
}
