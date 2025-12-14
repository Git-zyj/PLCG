/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (arr_0 [i_0]);
        arr_3 [7] = (max(4243259309, 35));
        arr_4 [i_0] [i_0] = (((1914486265 ? ((126174006 ? 1 : 126174006) : ((var_1 << (var_8 - 449577145)))))));
    }
    var_11 = 1;
    #pragma endscop
}
