/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(var_6, 3194594140)))));
    var_21 = (min(var_21, var_0));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] |= 3194594140;
        var_22 ^= min(((-(arr_1 [i_0]))), (min(-1, (arr_1 [i_0]))));
        var_23 = ((3194594145 != (arr_1 [i_0])));
    }
    #pragma endscop
}
