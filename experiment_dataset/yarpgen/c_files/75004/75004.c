/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 |= min(var_9, 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((min((((arr_1 [i_0] [i_0]) ? (arr_0 [10] [i_0]) : (arr_1 [i_0] [i_0]))), (((-8359770150827097480 ? var_10 : (arr_0 [i_0] [i_1])))))));
                var_21 = ((-(((arr_1 [i_0] [i_1 - 1]) & (arr_1 [i_0] [i_1 + 3])))));
                arr_5 [i_0] = ((((arr_2 [i_0] [i_1 - 2] [i_1]) ? (arr_2 [i_0] [i_1 + 1] [i_1 - 1]) : (arr_2 [i_0] [i_1 + 2] [i_1 + 2]))));
            }
        }
    }
    var_22 ^= ((((((var_12 ? var_8 : var_10))) ? ((var_0 ? 0 : var_16)) : ((max(6277920659769385433, var_12))))));
    #pragma endscop
}
