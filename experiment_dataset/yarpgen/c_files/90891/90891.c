/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 & var_11);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_13 = (62 / 60);
        var_14 = (min(var_14, (((-(((!((max((arr_1 [3] [i_0 - 1]), 62)))))))))));
        var_15 = (min(60, 1));
        var_16 |= (max((~65535), (arr_0 [i_0 + 1] [i_0 + 2])));
    }
    #pragma endscop
}
