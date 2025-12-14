/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((536870912 ? var_11 : var_9)))) ? ((((var_9 ? var_11 : var_10)) % var_10)) : (((((var_7 ? var_12 : var_0))) ? 2982585999 : -var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 3758096362;
                var_14 = var_0;
            }
        }
    }
    #pragma endscop
}
