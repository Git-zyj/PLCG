/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_11, var_8);
    var_16 = (max(var_16, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((((~((63518 << (var_2 - 6921757654071027953)))))) || (((var_12 ? (min(8400434308887947003, var_9)) : (max(var_9, var_10)))))));
                var_18 = (max(var_18, (min((max((min(-1, var_3)), (648226978712224682 >= 63532))), -var_1))));
            }
        }
    }
    var_19 |= (~1);
    #pragma endscop
}
