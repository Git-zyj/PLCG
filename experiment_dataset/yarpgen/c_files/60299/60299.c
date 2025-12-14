/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (min(20, (((((198 ? -20 : 2013167027))) ? var_16 : (((-733889170 ? 251658240 : 251658209)))))))));
                arr_5 [i_0] = ((1 ? -20 : 1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_18 = ((var_12 ? var_5 : var_4));
                    var_19 = ((var_16 ? var_16 : var_11));
                }
            }
        }
    }
    var_20 = var_14;
    var_21 = (min(var_21, (((var_9 ? var_9 : ((var_4 ? ((min(var_6, var_7))) : var_1)))))));
    #pragma endscop
}
