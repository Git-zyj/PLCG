/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max((min(65535, 1)), 224))), (min((min(var_1, var_6)), var_16))));
    var_20 = (((((-var_11 ? (max(var_2, var_17)) : var_13))) && (var_6 && var_15)));
    var_21 = 65535;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 9092072041213594001;
        arr_4 [i_0] [0] = 1;
        var_22 = (arr_2 [4]);
    }
    #pragma endscop
}
