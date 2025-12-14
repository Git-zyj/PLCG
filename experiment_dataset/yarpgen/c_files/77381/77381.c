/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 255));
    var_18 = (min(var_18, var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] = ((~((var_5 ? var_1 : var_12))));
                var_19 = (max(var_19, 118));
            }
        }
    }
    #pragma endscop
}
