/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (!1);
        arr_2 [i_0] [1] |= (((arr_1 [i_0] [10]) & 1));
        var_12 = 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = 1;
        var_13 = 18446744073709551588;
        var_14 = 1;
        var_15 = -117;
        var_16 = (2246974202134945467 ^ 1);
    }
    var_17 = 1;
    var_18 ^= 1;
    #pragma endscop
}
