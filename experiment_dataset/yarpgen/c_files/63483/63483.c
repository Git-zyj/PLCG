/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (3874067668 % var_15)));
                    arr_8 [i_1 - 2] [i_0] = var_12;
                }
            }
        }
    }
    var_20 = var_17;
    var_21 = (min(var_21, (((121 ? (~var_16) : ((-((var_1 ? var_12 : var_12)))))))));
    var_22 = 115;
    #pragma endscop
}
