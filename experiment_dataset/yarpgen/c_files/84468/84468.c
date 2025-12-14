/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(0, 65535));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;
        var_16 = (((max((arr_2 [i_0]), (arr_2 [i_0]))) ? (~52) : (65534 % 32767)));
        arr_4 [i_0] = (!1);
        arr_5 [i_0] [i_0] = 62226;
        var_17 = (arr_1 [i_0]);
    }
    var_18 = var_13;
    var_19 = (((!-var_5) ? var_0 : (~var_3)));
    #pragma endscop
}
