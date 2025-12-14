/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = arr_1 [i_0];
        arr_3 [i_0] [i_0] = 18446744073709551615;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1 - 2] = (((((1633 ? (arr_1 [2]) : 46264))) ? (arr_2 [0]) : (arr_0 [i_1 - 2])));
        arr_7 [i_1] [i_1] = (arr_5 [i_1 - 3]);
        var_17 -= 3896760059558406066;
    }
    #pragma endscop
}
