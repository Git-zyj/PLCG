/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_4 ? 50 : var_7));
    var_16 = (max((--29902), (-9223372036854775807 | 29902)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= (((arr_3 [i_0]) ? 8101044457700979246 : 42438));
        var_17 |= (((((var_5 ? 50 : 23097))) ? 19732 : (arr_0 [i_0])));
    }
    #pragma endscop
}
