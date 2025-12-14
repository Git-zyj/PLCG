/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((2147483647 & (-127 - 1)))) ? var_12 : ((var_11 ? var_7 : var_11)))) % -120));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_15 ^= -60;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((-60 ? 17 : (127 % 2147483647)));
        arr_6 [i_1] [i_1 - 4] = ((120 ^ ((((9667293467180982875 - -21799) && 7196923521981199315)))));
    }
    var_16 = ((((var_9 == (2147483647 + -120))) ? (((!var_12) - ((2134 ? 4294967295 : -56)))) : ((-2066215348 ? 2242532459 : -22032))));
    var_17 = (max(var_17, var_13));
    #pragma endscop
}
