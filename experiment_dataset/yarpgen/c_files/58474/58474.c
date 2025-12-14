/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_10 = (!(arr_0 [9] [i_0 - 1]));
        arr_2 [i_0 + 1] [8] = 114;
        var_11 = arr_1 [6];
        var_12 = var_5;
    }
    var_13 = ((1989440988 >= (((284494041 ? (284494041 % 284494041) : (!var_4))))));
    #pragma endscop
}
