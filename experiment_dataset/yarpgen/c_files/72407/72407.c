/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((-((((max(2113989550, var_3))) ? ((max(2113989541, var_3))) : (((arr_1 [i_0]) ? var_9 : var_15))))));
        arr_3 [i_0] = -2305843009213693951;
        var_20 = (arr_1 [i_0]);
    }
    var_21 = (21793 ? 1 : 16240930137243346636);
    #pragma endscop
}
