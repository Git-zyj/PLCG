/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max((arr_1 [4]), (((arr_1 [i_0]) ? (arr_1 [17]) : (arr_1 [0])))));
        var_20 = (-32767 - 1);
    }
    var_21 = ((~((128 ? 49 : 210))));
    var_22 = (min(var_22, var_13));
    #pragma endscop
}
