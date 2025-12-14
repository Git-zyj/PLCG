/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~((-(!106)))));
        var_19 = 60;
        var_20 ^= (arr_1 [i_0] [1]);
        var_21 -= ((-(min((25931 % 106), 94))));
    }
    #pragma endscop
}
