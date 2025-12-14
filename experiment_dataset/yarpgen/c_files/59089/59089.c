/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [1] = ((max(0, 3630050757)));
        arr_3 [i_0] = ((((min(242, (arr_1 [i_0])))) ? (min((0 * 3487089735178066191), (~15758254595779477146))) : (~var_3)));
        var_18 *= (((var_7 - var_10) == (~8160421277376710420)));
    }
    var_19 = ((var_0 & ((((min(231, 2329902109))) + (min(var_11, var_3))))));
    var_20 = (~var_1);
    #pragma endscop
}
