/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 & ((((min(75, -23007))) ? (var_10 >> 0) : 833244368))));
    var_13 = (max(var_13, ((-579908313 ? -833244369 : 250))));
    var_14 = 833244368;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 = 833244368;
        var_16 = (max(((-var_10 ? (-833244369 | var_9) : var_4)), (((-833244369 + 2147483647) >> (-833244368 == var_0)))));
        arr_2 [7] = (min(-833244369, 1966911915));
        var_17 = (max(var_17, ((max(var_8, 44)))));
    }
    var_18 = var_2;
    #pragma endscop
}
