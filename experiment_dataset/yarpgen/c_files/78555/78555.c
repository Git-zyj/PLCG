/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((var_2 ? (!-109) : (94 != var_9))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((max(-272524679, (arr_0 [15]))) / (max(-1744311103268693568, -8))));
        var_17 = (max(var_17, (((((((arr_1 [i_0]) - (arr_1 [i_0])))) ? (max((arr_1 [2]), var_14)) : (min((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_1 [i_1]);
        arr_8 [i_1] = (!1);
    }
    var_18 = (min(var_18, var_0));
    #pragma endscop
}
