/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 | (((~var_4) ? var_0 : ((var_3 ? var_11 : var_9))))));
    var_18 = ((((((((min(32767, -50))) || var_6)))) - var_1));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_7, (var_3 | var_14)));
        arr_4 [i_0] = (((((min(var_14, var_8)))) ? (var_12 || 255) : (((var_0 ^ var_2) - var_3))));
        arr_5 [14] = ((((min(var_9, var_7))) ? ((59 ? 30 : 2305842871774740480)) : var_13));
    }
    #pragma endscop
}
