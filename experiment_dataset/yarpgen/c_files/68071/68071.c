/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = var_6;
        var_11 = (min(var_11, ((((min(63, 7485))) | (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 -= (((max((arr_2 [i_1]), (((~(arr_0 [i_1] [i_1])))))) | (arr_0 [i_1] [i_1])));
        var_13 = (max(var_13, ((min(-664444318, ((min(909963233, 30802))))))));
    }
    var_14 = ((-(~var_6)));
    var_15 ^= -var_1;
    var_16 = (((-69 & 7039654451378511720) & (-173 / -var_5)));
    #pragma endscop
}
