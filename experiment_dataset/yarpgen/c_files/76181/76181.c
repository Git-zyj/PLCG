/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (((((((arr_1 [i_0]) && 23554)))) == ((23566 ? 981956669254060049 : 172))));
        arr_2 [0] = (max(11404794240794494789, ((17057742404806113361 | (min(8251526748538136417, var_9))))));
        arr_3 [i_0] [i_0 + 1] = 12219;
    }
    var_18 = var_2;
    #pragma endscop
}
