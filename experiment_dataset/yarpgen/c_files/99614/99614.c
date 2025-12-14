/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-256587249 ? (arr_1 [i_0 + 2] [i_0]) : 6909));
        arr_5 [6] = (~27218);
    }
    var_10 &= var_7;
    var_11 = 86;
    var_12 = (((var_1 < var_5) ? -87 : var_4));
    #pragma endscop
}
