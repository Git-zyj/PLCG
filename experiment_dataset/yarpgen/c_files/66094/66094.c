/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((~0) ? (~var_14) : ((~(arr_2 [1])))))) ? (max(((min(246, var_5))), (((arr_2 [i_0]) ? var_14 : var_2)))) : (((arr_1 [i_0]) ? 1 : (-9223372036854775807 - 1))))))));
        arr_4 [i_0] = ((-(arr_0 [i_0] [10])));
    }
    var_17 = ((var_11 ? (min(-var_14, ((var_15 ? var_14 : 2594988572063069363)))) : ((min(((min(-1845229161, var_12))), var_15)))));
    var_18 = var_1;
    #pragma endscop
}
