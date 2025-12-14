/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((min(var_3, (var_17 * var_4)))) ? 248 : (((((-54 ? -54836435 : 29606))) ? (!3564081486040835773) : (arr_0 [i_0])))));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_21 = (arr_1 [i_0]);
    }
    var_22 = (max(var_0, 57));
    #pragma endscop
}
