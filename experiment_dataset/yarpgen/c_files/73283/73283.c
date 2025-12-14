/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 -= var_2;
        arr_2 [i_0] = ((arr_1 [i_0]) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (((((-5594683057051919961 ? (arr_0 [i_0]) : 0))) ? ((var_1 ? 0 : -417416880)) : (arr_0 [i_0]))));
        var_16 *= ((3 ? ((-4 ? (arr_1 [16]) : ((~(arr_0 [i_0]))))) : 2002733118));
        arr_3 [i_0] = (max((((arr_0 [i_0]) ? ((var_0 / (arr_1 [i_0]))) : ((max((arr_0 [i_0]), var_5))))), ((min((arr_1 [i_0]), var_6)))));
    }
    var_17 = (2124849946 & 2124849946);
    #pragma endscop
}
