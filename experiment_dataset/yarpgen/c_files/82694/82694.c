/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (max((max(var_2, var_7)), (var_3 * var_2)));
        var_17 = 63;
    }
    var_18 = (var_9 == (var_14 + var_13));
    var_19 |= ((!((!((max(36590, var_2)))))));
    #pragma endscop
}
