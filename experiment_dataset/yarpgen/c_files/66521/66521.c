/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((max(var_16, var_6))) ? ((37538 ? -1387476725 : (~var_8))) : (max(var_3, -var_7))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, (((var_12 ? 1 : (arr_2 [i_0]))))));
        arr_3 [i_0] = (max(((((min(var_4, (arr_0 [i_0])))) + var_8)), -var_14));
    }
    #pragma endscop
}
