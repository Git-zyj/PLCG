/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 41;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] |= (min((min(41, 10576924712008095296)), (~var_2)));
        var_19 |= -var_0;
    }
    var_20 += var_11;
    var_21 = (((41 ? var_16 : (~var_3))));
    #pragma endscop
}
