/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_0, ((99 ? var_12 : 1460158305))));
        arr_3 [i_0] [i_0] = 1460158305;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (max((!var_4), (~var_2)));
        var_14 = (~-var_0);
        var_15 += ((((((((-46 ? var_7 : (arr_5 [i_1])))) ? (max(var_2, 2834808991)) : var_2))) ? (min(var_9, ((var_7 ? 48229 : 1460158305)))) : (((((127 ? (arr_0 [i_1]) : var_5)))))));
    }
    var_16 = ((((min(var_11, ((8121 ? var_6 : 5601708994812872477))))) ? var_5 : var_7));
    #pragma endscop
}
