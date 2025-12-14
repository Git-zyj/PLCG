/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_12, (((arr_2 [i_0] [i_0]) ? 0 : var_12))));
        var_17 -= ((min(var_4, (arr_2 [i_0] [1]))));
        var_18 = (min(var_18, (arr_0 [i_0])));
    }
    var_19 = (min(var_12, (((!var_2) ? -var_7 : 3034863382))));
    var_20 = ((var_10 ? ((((max(1345454813, 255))) ? (((var_6 ? var_9 : 65513))) : (max(2945519042647664392, var_8)))) : var_9));
    #pragma endscop
}
