/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_2, (((((var_4 ? var_1 : var_5))) ? ((var_1 ? var_8 : var_7)) : ((min(var_8, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = var_8;
                var_13 = (((((var_7 ? 20738 : ((var_7 ? var_0 : var_9))))) ? var_0 : var_2));
                var_14 ^= (min(63, 0));
                arr_4 [i_0] [i_0] = (min(((var_6 ? var_0 : var_3)), (min(var_3, ((var_4 ? var_0 : var_2))))));
            }
        }
    }
    #pragma endscop
}
