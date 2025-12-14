/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(((var_6 << (var_11 - 148891814))), 7)), ((max(var_1, var_2)))));
    var_14 ^= (((min(7, 1)) < var_12));
    var_15 -= (min((min((min(var_4, var_6)), (((var_4 << (var_2 - 430990101)))))), ((max(var_4, (max(var_8, var_12)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = max(var_4, ((max(-6, -6))));
        var_16 |= max((max((arr_2 [i_0] [i_0]), 6)), (min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
    }
    #pragma endscop
}
