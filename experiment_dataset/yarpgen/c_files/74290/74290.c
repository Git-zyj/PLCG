/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 7592387398468434676;
        arr_3 [i_0] = 16;
        arr_4 [i_0] [i_0] = 120;
        arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        arr_6 [i_0] = arr_0 [i_0] [i_0];
    }
    var_11 = (var_1 ^ 2147481600);
    #pragma endscop
}
