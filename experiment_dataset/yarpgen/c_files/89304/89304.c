/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 |= ((17 ^ ((~((-1 ? var_0 : (arr_1 [11] [i_0])))))));
        arr_2 [i_0] = (max(((((max(var_3, var_0))) ? (max(35871, 288230376151711743)) : (arr_1 [i_0] [i_0]))), 3884856564506149686));
        arr_3 [i_0] = ((((min((1749673284403756945 + 951104667), (12834 + -3651046977498231164)))) ? 1 : 17));
    }
    var_14 = 17;
    var_15 = ((((var_12 ? var_0 : 1362922009656106094))));
    var_16 = (min(var_12, (+-12834)));
    #pragma endscop
}
