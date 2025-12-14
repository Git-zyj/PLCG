/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = var_8;
        var_14 = (min(((0 ? var_3 : 13658)), (((~(arr_2 [i_0]))))));
        arr_3 [i_0] = 11619835360418267500;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_15 = var_7;
        var_16 *= ((((((arr_5 [i_1 - 1] [i_1 + 1]) & 8872427069987834384))) ? ((((arr_5 [i_1 - 1] [i_1 - 1]) < (arr_4 [i_1 + 1] [i_1 + 1])))) : (arr_5 [i_1 - 1] [i_1 - 1])));
    }
    var_17 = var_6;
    #pragma endscop
}
