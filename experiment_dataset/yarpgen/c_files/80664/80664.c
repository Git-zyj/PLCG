/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((~var_18) ? ((min(var_16, 5))) : ((248 ? var_7 : 14))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_7 ? (((max(var_2, (arr_1 [i_0]))))) : (var_5 | var_0)))) ? (arr_0 [i_0] [1]) : (((min(var_13, (arr_1 [i_0])))))));
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
