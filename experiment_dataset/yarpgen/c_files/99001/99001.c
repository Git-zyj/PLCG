/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = 31;
                var_16 = ((31 >> (122 - 62)));
            }
        }
    }
    var_17 = ((~((2673492993 ? 31 : (18446744073709551585 * var_9)))));
    #pragma endscop
}
