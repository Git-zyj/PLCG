/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((((arr_1 [i_0] [i_1]) ? 945266456 : (arr_4 [i_1])))) ? ((28097 ? 1 : (arr_2 [i_0]))) : (((((((arr_0 [i_0]) | (arr_5 [1] [1])))) ? (max(var_1, (arr_0 [15]))) : -11149)))));
                var_12 = (min(var_12, (((max((((2988128660 ? 137908185 : var_7))), (arr_5 [i_0] [i_0]))) * ((min(var_6, var_3)))))));
            }
        }
    }
    var_13 = var_10;
    var_14 = (min(var_6, var_0));
    var_15 = (max(var_15, ((min(var_9, (((0 + 22) / var_8)))))));
    #pragma endscop
}
