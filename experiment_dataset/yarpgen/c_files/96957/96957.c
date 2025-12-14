/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 31744;
    var_17 = ((18446744073709551614 << (var_2 - 1913843163)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = var_0;
                var_19 = (min(var_19, ((min(((max((arr_1 [i_0]), 1))), (min(((255 ? 18446744073709551607 : 9223372036854775804)), 6)))))));
            }
        }
    }
    #pragma endscop
}
