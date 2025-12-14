/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_1;
        var_14 -= ((~((((min(-4889522049677639257, var_10)) < 85)))));
    }
    var_15 = var_10;
    var_16 = max(4146655979, ((4889522049677639256 >> (-1846247608 + 1846247639))));
    #pragma endscop
}
