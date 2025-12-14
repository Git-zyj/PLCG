/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (~var_7);
        var_21 = (max(var_21, (((~(min((((arr_3 [i_0] [i_0]) ? 3239155728242019863 : (arr_3 [i_0] [12]))), (((var_0 & (arr_3 [i_0] [i_0])))))))))));
    }
    var_22 = var_5;
    var_23 = (min(var_23, var_14));
    #pragma endscop
}
