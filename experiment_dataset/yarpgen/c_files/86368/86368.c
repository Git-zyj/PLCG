/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (var_13 <= var_1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 ^= (-112 % ((~(~4294967295))));
        arr_2 [4] = (!9);
        var_20 = ((!((((arr_0 [i_0]) ? 1 : var_14)))));
    }
    #pragma endscop
}
