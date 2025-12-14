/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_11 ? (((var_11 > var_9) - var_2)) : (((var_0 ? -4552921352503679944 : (min(var_10, -1821744633)))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((((268433408 ? 248 : var_4)) + ((((arr_0 [i_0]) - (arr_1 [i_0] [i_0])))))) - (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_13 = (min(var_13, ((((((((min((arr_2 [i_0] [1]), 1))) * (arr_0 [i_0 - 3])))) ? (((1 <= (arr_0 [i_0 - 3])))) : ((var_4 ? (arr_2 [i_0 - 3] [2]) : var_3)))))));
    }
    var_14 = (~var_6);
    #pragma endscop
}
