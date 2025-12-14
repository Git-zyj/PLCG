/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_0);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = 34485;
        arr_3 [i_0] [i_0] = ((var_6 ? (min(((((arr_0 [i_0]) && var_7))), ((var_1 << (112 - 105))))) : var_9));
        arr_4 [i_0] = (((~0) ? (min(((var_1 ? var_8 : var_4)), (!var_7))) : ((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 2]))))));
        var_17 = (min(((((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0] [i_0 + 2])))), 9535510089061746432));
    }
    var_18 = (max(var_18, (((((max((var_7 / 34481), ((var_1 ? var_8 : 554153860399104))))) ? (var_2 * var_11) : (max(var_3, (min(var_11, var_2)))))))));
    #pragma endscop
}
