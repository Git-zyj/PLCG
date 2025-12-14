/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~((65 ? 844982825611051988 : -2945127500496724573))));
        arr_3 [i_0] = ((arr_0 [i_0]) <= (arr_0 [i_0]));
        var_15 = (max(var_15, (arr_0 [i_0])));
        arr_4 [i_0] = var_3;
    }
    #pragma endscop
}
