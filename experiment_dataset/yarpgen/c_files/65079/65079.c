/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1290574988;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max(var_12, ((min(0, (max((!4323455642275676160), (arr_0 [2]))))))));
        var_13 = (((((1 == 1) ? (arr_0 [i_0]) : ((271295812 ^ (arr_0 [i_0]))))) == ((((arr_1 [i_0] [i_0]) / (max(2147483647, (arr_0 [i_0]))))))));
    }
    var_14 = ((((var_7 > (~1))) ? 0 : (-127 - 1)));
    #pragma endscop
}
