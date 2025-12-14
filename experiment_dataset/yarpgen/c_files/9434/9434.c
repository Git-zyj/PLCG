/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = ((1081172299 == (arr_1 [4])));
        arr_2 [i_0] = ((~(arr_1 [i_0 + 1])));
        var_17 = (max(var_17, (((-1081172300 ? 0 : (arr_0 [i_0 - 1]))))));
        var_18 = -8290409950056207588;
        arr_3 [i_0] = 192251084;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (~var_8);
        var_20 = (min(var_20, (((1081172299 ? var_14 : (arr_4 [i_1 + 3]))))));
    }
    var_21 ^= 1081172296;
    var_22 = var_9;
    var_23 = 1;
    var_24 -= -8290409950056207588;
    #pragma endscop
}
