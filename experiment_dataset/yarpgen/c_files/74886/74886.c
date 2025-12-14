/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_13, 0))) ? ((var_5 ? 11222687091512721660 : 0)) : var_5))) ? var_13 : var_11));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = ((~(max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0])))));
        var_18 *= (max((((arr_1 [4] [i_0]) * (((((arr_1 [i_0] [i_0]) > var_6)))))), (arr_0 [i_0])));
        arr_2 [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    var_19 = ((65533 >> (((max(((var_15 ? var_10 : var_14)), ((var_9 ? 65535 : var_1)))) - 8552238878153674160))));
    #pragma endscop
}
