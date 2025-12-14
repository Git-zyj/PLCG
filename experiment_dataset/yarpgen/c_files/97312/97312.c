/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 -= (arr_1 [i_0 + 1]);
        var_15 *= (~4143578846489008652);
        var_16 = var_6;
        var_17 ^= ((-(((arr_1 [i_0]) ? 14303165227220542963 : (arr_0 [2])))));
        var_18 |= var_3;
    }
    var_19 |= ((((((1323837609 ? var_7 : 12249560783730033788)) ? 70368744177663 : -18446744073709551615))));
    #pragma endscop
}
