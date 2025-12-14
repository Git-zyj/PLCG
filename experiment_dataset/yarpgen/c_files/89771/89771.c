/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 1491103232;
        var_19 = max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0]));
        var_20 = 6858653053858358618;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (max((min(4294967275, ((164 ? 4294967275 : 2308144528)))), (!var_15)));
        var_22 = (min(var_14, ((490922420 ? var_18 : (((min(1, var_2))))))));
    }
    var_23 = var_7;
    #pragma endscop
}
