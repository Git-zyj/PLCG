/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 += (((((max(var_1, var_4)))) ? -var_9 : ((~(arr_1 [5] [i_0 + 1])))));
        var_12 |= (arr_1 [i_0] [i_0]);
    }
    var_13 = (min(var_13, (((!(!var_0))))));
    var_14 = (min(var_14, (((-var_10 ? -var_0 : (~var_1))))));
    var_15 ^= ((((1065151889408 ? -1310750059 : var_2))));
    #pragma endscop
}
