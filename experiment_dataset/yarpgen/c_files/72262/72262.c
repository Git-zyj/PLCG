/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 64;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        arr_3 [i_0] = ((-27163 ? ((max(1, 1))) : (max((arr_0 [1] [i_0]), ((63 ? (arr_1 [i_0]) : -24833))))));
        var_17 = ((~((((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [4] [4] = var_0;
        arr_7 [i_1 - 1] = ((((arr_4 [i_1]) ? -24841 : 1)) > ((-24841 ? var_8 : 1)));
    }
    var_18 = var_6;
    #pragma endscop
}
