/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((-127 - 1) && -1))) / 65535));
    var_18 = ((var_4 ? 0 : ((var_4 ? (max(1, 18446744073709551608)) : (((var_4 ? 65515 : 2)))))));
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= -4096;
        arr_3 [i_0 - 3] = ((20 ^ (~0)));
        var_20 = ((0 ^ (arr_0 [i_0 - 1])));
    }
    #pragma endscop
}
