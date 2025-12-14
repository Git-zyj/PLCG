/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min(52985, var_7))), 1878770539872567308));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 |= ((((((var_9 ? var_6 : 0) < var_6)))));
                var_15 -= var_1;
                var_16 += var_5;
                arr_4 [i_1] = 127;
                var_17 = -5;
            }
        }
    }
    #pragma endscop
}
