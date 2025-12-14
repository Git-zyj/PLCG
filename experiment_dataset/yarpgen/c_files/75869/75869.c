/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((18446744073709551615 ? 1 : var_1))) ? -1936387411 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = var_10;
                arr_6 [i_0] = 268419072;
            }
        }
    }
    #pragma endscop
}
