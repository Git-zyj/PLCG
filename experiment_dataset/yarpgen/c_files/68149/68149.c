/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_8));
    var_15 = ((var_11 ? (min(var_11, var_8)) : ((((var_7 > var_5) ^ (var_2 && -29353))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0 + 1]);
        arr_4 [i_0 - 1] [i_0] = (max((((arr_2 [i_0 + 2] [i_0 + 2]) ? var_9 : (arr_2 [i_0 - 1] [i_0 + 3]))), (arr_0 [i_0 + 2])));
    }
    #pragma endscop
}
