/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((min(3081242851961412328, (arr_2 [i_1] [i_0]))) / (min((arr_0 [i_0]), 1108307720798208))))) && ((min((max((arr_3 [i_0]), var_12)), (var_7 * 1))))));
                var_15 = ((var_6 ? (((min((arr_0 [i_1]), (arr_4 [8] [i_1 - 1]))))) : var_1));
                arr_7 [i_0] = ((((((arr_3 [i_1 - 1]) << ((((~(arr_0 [1]))) - 29405))))) ? (max(var_1, ((((((arr_0 [i_1]) + 2147483647)) >> (var_2 - 69)))))) : 522));
            }
        }
    }
    var_16 = ((var_2 + (((((1565148191 ? var_0 : var_6)) > var_6)))));
    #pragma endscop
}
