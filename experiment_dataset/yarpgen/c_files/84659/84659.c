/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(8235956455323843682, (((var_14 ? 42 : (arr_2 [i_0]))))));
        var_18 = (((((((var_15 ? var_0 : 127))) ? (((8235956455323843682 ? -80 : 115))) : (max(1552720661068585404, -18))))) ? ((((((var_0 ? 57 : 8243354924754692829))) ? (((var_2 + 2147483647) << (((arr_0 [i_0]) - 7315)))) : (~-1065514656)))) : (arr_1 [3] [i_0]));
        arr_3 [i_0] = 61;
    }
    #pragma endscop
}
