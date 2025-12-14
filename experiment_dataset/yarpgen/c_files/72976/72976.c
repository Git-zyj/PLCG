/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(~208707446)));
        var_13 ^= (((((142 ? 34435 : 2147483647))) ? var_10 : (arr_2 [i_0])));
    }
    var_14 = var_1;
    #pragma endscop
}
