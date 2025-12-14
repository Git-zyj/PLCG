/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, var_11));
        var_15 = ((-(arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((var_9 ^ ((min((arr_1 [i_0] [i_0]), var_4)))));
        arr_3 [i_0] [i_0] = (((((max(12, -498572412))) ? (((min(12, -13)))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) ^ -7995051726570542622);
        var_16 = (min(var_16, -12));
    }
    var_17 = (max(var_8, (max(var_5, var_9))));
    var_18 = (((((var_7 | (max(var_12, var_9))))) ? ((((var_10 ? var_11 : var_13)) >> (var_11 - 4229765957088846415))) : ((~(max(var_10, var_11))))));
    #pragma endscop
}
