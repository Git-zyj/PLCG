/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((((((4294967295 ? var_4 : var_9)) + 2147483647)) >> (((min(var_10, var_10)) - 1631212209))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(var_9, ((min((!var_8), (!var_12))))));
                arr_5 [i_0] [i_1] = (((43 * 1) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1] [i_1]))) : ((((~(arr_1 [i_0]))) % (arr_2 [i_0])))));
            }
        }
    }
    var_14 |= var_9;
    #pragma endscop
}
