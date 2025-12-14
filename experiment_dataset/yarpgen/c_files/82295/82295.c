/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (var_15 ? 16152 : var_8);
    var_20 = (((min((-3985 * 0), (min(var_12, var_4))))) ? -1889562045 : var_13);
    var_21 += var_0;
    var_22 = ((var_7 << (var_2 - 103)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_23 = (min(((0 ? (min(-4165, 1471204347814271407)) : 77692585)), 1));
        arr_2 [i_0] [19] = var_4;
        var_24 = (max(((((var_1 ? (arr_0 [i_0]) : 26307)) | var_8)), 1));
    }
    #pragma endscop
}
