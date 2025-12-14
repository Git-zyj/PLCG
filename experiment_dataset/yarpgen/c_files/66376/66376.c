/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ? var_8 : ((((0 < (max(-1125228301, var_11))))))));
    var_17 = var_5;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_18 = (max((!var_4), (((((2274847105 ? 57527 : -1125228301))) ? 1125228275 : (((arr_0 [8]) ? 7485851040566710588 : 249))))));
        var_19 = (min(var_19, (arr_0 [i_0])));
        var_20 = (arr_1 [i_0]);
    }
    #pragma endscop
}
