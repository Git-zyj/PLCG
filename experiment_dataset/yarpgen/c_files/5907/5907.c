/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_8 ? var_3 : 0))) ? -var_9 : ((39435 ? 10626889864520041823 : -1)))) & (((((-31418 + 6) || (((-516797789 ? 131 : -1)))))))));
    var_12 = 10626889864520041824;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_4;
        arr_3 [i_0] [i_0] = var_7;
    }
    #pragma endscop
}
