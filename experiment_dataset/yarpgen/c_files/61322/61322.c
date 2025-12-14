/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (min(var_4, (arr_4 [1] [9])));
                var_11 = ((var_9 ? ((((~(arr_0 [i_0] [i_0]))))) : var_3));
            }
        }
    }
    var_12 += (max(22248, (min((var_1 * 0), var_3))));
    var_13 = (((((((4294967295 >> (var_0 - 2920411243))) >> ((var_0 ? 1 : var_8))))) ? var_0 : (((~(max(var_5, 3)))))));
    var_14 |= var_7;
    var_15 = var_2;
    #pragma endscop
}
