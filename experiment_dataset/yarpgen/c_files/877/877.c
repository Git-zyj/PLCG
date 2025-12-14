/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = 9223372036854775807;
        var_13 = var_2;
    }

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(var_14, ((((((min(2431231617, 2355888700872049033)))) ? (arr_0 [i_1] [i_1]) : ((~(~var_1))))))));
        var_15 = (arr_1 [i_1]);
        var_16 -= -var_2;
    }
    var_17 = ((-(min(2355888700872049033, (!2355888700872049057)))));
    #pragma endscop
}
