/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((!(!179))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 -= ((29676 ? (min(-var_3, ((max(-5311, (arr_3 [i_0])))))) : (arr_3 [i_0])));
        arr_4 [i_0] = (((arr_3 [i_0]) ? var_5 : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    var_12 = (~var_3);
    #pragma endscop
}
