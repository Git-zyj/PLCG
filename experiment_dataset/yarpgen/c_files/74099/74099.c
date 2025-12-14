/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(64787, 219)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 -= (~var_1);
        var_13 = (min(0, (36 & 6941617150013175062)));
        arr_3 [i_0] = ((((min(var_0, 8936830510563328))) ? -63 : ((-(~var_2)))));
    }
    var_14 -= var_2;
    var_15 = var_0;
    #pragma endscop
}
