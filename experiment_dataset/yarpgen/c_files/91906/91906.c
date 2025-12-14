/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, var_18));
        var_20 = (max(var_20, ((4268385619830946354 ? ((((11433277028834054695 ? 31 : (arr_1 [i_0 - 4]))))) : (((-5909 ? 79 : (arr_0 [i_0] [i_0]))))))));
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
