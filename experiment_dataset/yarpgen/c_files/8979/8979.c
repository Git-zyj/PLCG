/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -774064849;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 *= (max(((var_3 * (max(-774064849, 1)))), ((-(arr_1 [i_0 - 1])))));
        var_16 = (min(var_16, (((((!(((245 ? var_3 : 0))))) && var_12)))));
        arr_4 [i_0] [i_0] = (max(((~(arr_3 [i_0 - 3] [i_0])), var_6)));
    }
    var_17 = var_6;
    #pragma endscop
}
