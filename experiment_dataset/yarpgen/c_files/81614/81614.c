/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (var_0 || -7388293415818530905);
                arr_6 [i_0] [i_1 - 1] = (((var_12 ? var_6 : var_12)));
                var_18 = (~7388293415818530909);
                var_19 = (max(var_19, (((1966080 ? 1 : ((-7388293415818530900 ? 12544858195790574225 : (arr_3 [21] [i_1 + 3] [i_1 + 1]))))))));
                var_20 = ((!(((~((~(arr_0 [i_1]))))))));
            }
        }
    }
    var_21 = (!var_3);
    #pragma endscop
}
