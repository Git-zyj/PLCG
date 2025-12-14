/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((103 ? var_7 : var_3))) ? (max(331706175, var_1)) : var_8)));
    var_13 -= ((var_7 ? -102 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 ^= (arr_1 [i_0]);
                var_15 = var_3;
            }
        }
    }
    #pragma endscop
}
