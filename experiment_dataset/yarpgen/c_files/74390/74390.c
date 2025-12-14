/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 -= (((((arr_0 [1] [1]) || var_5)) ? (arr_0 [i_0] [i_0]) : 1));
        arr_2 [2] = -21;
        var_17 = ((!(arr_1 [i_0])));
        var_18 = (((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])));
    }
    var_19 = (0 | 7809673340124571090);
    #pragma endscop
}
