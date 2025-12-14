/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_15);
    var_21 = 110;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] = ((!(((-((var_3 ? 8044843441246820363 : -31572)))))));
                    var_22 = (-(((!0) ? 38846 : -121)));
                    var_23 = (min(var_23, (((-var_6 & ((((arr_1 [0]) / (max(var_8, var_11))))))))));
                }
            }
        }
    }
    #pragma endscop
}
