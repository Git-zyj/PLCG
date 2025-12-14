/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_8;
    var_14 = min((((var_3 == (var_12 * 30)))), var_6);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (!-5720696907130900091);
        var_16 = (min(var_16, (((((max((-55 == -83), -55))) >> ((((-(arr_0 [i_0] [i_0]))) - 3735339476006140800)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [8] = ((~(arr_3 [i_1 - 1])));
        arr_8 [i_1] = (-124 + 2147418112);
    }
    var_17 = ((var_11 < ((-55 ? (min(var_7, 9875140689119888039)) : (((var_4 ? var_12 : 1)))))));
    #pragma endscop
}
