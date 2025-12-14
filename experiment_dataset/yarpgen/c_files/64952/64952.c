/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((3614854496644884994 ? var_8 : 2308))) && -1282553265)) ? (((!(!31656)))) : (!var_19)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (((((min(1, var_15)) ? (((arr_0 [i_0] [i_1]) ? var_15 : var_15)) : (arr_3 [i_1] [i_0] [i_0])))));
                var_22 = var_5;
            }
        }
    }
    #pragma endscop
}
