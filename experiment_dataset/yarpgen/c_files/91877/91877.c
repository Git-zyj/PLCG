/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 = (((!255119432) > ((~((28795 * (arr_0 [5])))))));
        var_12 = (((((var_0 * 13966891362670967034) ? ((min(-28796, -28795))) : ((-(arr_1 [i_0])))))) | 4479852711038584581);
        var_13 = ((((max(13966891362670967035, 26070))) ? -25745 : 113));
    }
    var_14 = ((-75 ? (((((max(var_2, 1036415914))) || (!var_6)))) : var_2));
    var_15 = ((-2052419327 | (((-11114 ? ((125 ? -126 : 80)) : var_10)))));
    #pragma endscop
}
