/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = ((((((arr_0 [i_0 + 2]) ^ var_2))) <= ((((max(255, (arr_1 [i_0])))) ? var_8 : var_3))));
        arr_3 [i_0] = ((-((var_5 << (((arr_1 [i_0 - 2]) + 792044683788237497))))));
        var_10 = var_7;
    }
    var_11 = (((-(65535 == 247))));
    var_12 = (~var_7);
    #pragma endscop
}
