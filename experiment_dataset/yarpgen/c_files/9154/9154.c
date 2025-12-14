/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_15 ? var_13 : ((((var_0 ? var_14 : var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 *= var_1;
                    arr_7 [i_1] [i_1] [i_2] [i_2] = (max((!var_16), (min(var_15, ((var_0 ? 16189376167190227036 : var_14))))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = var_16;
                }
            }
        }
    }
    var_19 = ((!(!-var_9)));
    var_20 = var_1;
    var_21 = (!var_2);
    #pragma endscop
}
