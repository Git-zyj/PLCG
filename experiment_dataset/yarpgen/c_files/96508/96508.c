/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_16;
                var_20 = (min(var_20, var_17));
                arr_6 [i_0] = ((2305561534236983296 * (((((arr_3 [i_1] [i_0] [i_1 - 2]) <= var_17))))));
            }
        }
    }
    var_21 = ((((var_6 ? -9189886425660311908 : var_0)) == -17));
    var_22 = (max(var_22, (~var_5)));
    #pragma endscop
}
