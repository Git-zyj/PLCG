/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 -= (-(var_1 * 18446744073709551593));
        var_11 = 0;
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) <= 3874939004));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (1 % 18446744073709551612);
        arr_6 [i_1] |= (min((18446744073709551612 / 2277095193494920261), (((((((~(arr_5 [i_1]))) + 2147483647)) << (var_2 - 23378))))));
        var_13 = ((((-(arr_5 [i_1]))) >= (~17651)));
        var_14 = (min(-91, 362189383));
    }
    var_15 = (((-18446744073709551615 && -var_9) >> (((-109 / 72) + 5))));
    #pragma endscop
}
