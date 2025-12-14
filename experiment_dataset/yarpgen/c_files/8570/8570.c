/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((682677182769088008 ? (max(((-(arr_2 [i_1]))), (42661 | 22875))) : 0));
                arr_6 [i_0 - 2] [i_0 - 2] = ((+(max((arr_2 [i_0 - 1]), (arr_3 [i_1] [i_0 - 1])))));
            }
        }
    }
    var_18 -= ((((max(65504, 4294967295))) ? var_2 : (max((max(var_7, var_1)), -var_16))));
    var_19 = ((var_8 - (min(var_6, (~var_6)))));
    var_20 = (((((~(~var_1)))) ? var_15 : (min((var_11 ^ var_2), var_11))));
    #pragma endscop
}
