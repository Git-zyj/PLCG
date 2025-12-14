/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 << (((min((var_5 / 29), (min(29, -36028797018963968)))) + 36028797018963974)));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 = ((min(var_16, (-36028797018963968 || -36028797018963954))));
        var_22 += ((-467523703038332292 ? ((((((arr_1 [i_0]) << var_11))) ? (((max(210, (arr_1 [7]))))) : (arr_0 [i_0 - 2]))) : (min((min(46, var_17)), 36028797018963967))));
    }
    #pragma endscop
}
