/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (((((1192175637 ? (-9223372036854775807 - 1) : 1))) ? var_0 : ((12836295348544932293 ? -1192175638 : 162))));
        var_17 = 1192175621;
    }
    var_18 = ((((var_4 / var_3) % (((var_4 ? 1192175653 : var_13))))));
    var_19 = 0;
    var_20 += (min((((max(var_0, 30155)))), (max(var_7, ((min(var_4, var_0)))))));
    var_21 = -1192175647;
    #pragma endscop
}
