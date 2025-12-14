/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? ((-((var_7 ? var_9 : (arr_0 [i_0]))))) : ((min((arr_1 [i_0]), var_9)))));
        var_17 = (max(((((arr_1 [i_0]) == var_9))), (((arr_1 [i_0]) % var_11))));
        var_18 = ((+((max(21206, ((min((arr_1 [i_0]), 84))))))));
    }
    var_19 = max(var_12, var_0);
    var_20 = 171;
    #pragma endscop
}
