/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((!(((-20591 ? var_4 : var_1)))));
    var_13 = var_9;
    var_14 = (min((min(var_6, (var_11 && 245))), (((min(-1472529295, var_8))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((-22 | (((arr_0 [i_0 + 1]) << (23 - 22)))));
        var_15 = (((-(arr_0 [7]))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = (max(var_16, (var_11 << 23)));
        var_17 = (min(((min((arr_5 [i_1 - 1] [i_1]), (arr_5 [i_1 + 2] [i_1])))), (arr_4 [i_1] [i_1])));
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = ((((min((min((arr_8 [i_2] [i_2]), var_4)), (arr_8 [i_2] [i_2])))) && (((18446744073709551592 ? (arr_8 [i_2] [i_2]) : -12648)))));
        var_19 = ((~76) & (min(18446744073709551592, 18446744073709551592)));
    }
    #pragma endscop
}
