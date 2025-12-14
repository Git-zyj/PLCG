/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 == (!893996126)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((-(arr_0 [i_0])));
        var_20 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1 - 1] = ((arr_4 [i_1 - 1]) ? (arr_3 [i_1] [i_1 - 1]) : (arr_3 [i_1] [i_1 - 1]));
        var_21 -= (arr_4 [i_1 - 1]);
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] |= (max(-3400971170, ((((arr_6 [i_2] [i_2]) > ((893996126 / (arr_6 [13] [i_2]))))))));
        var_22 = 893996123;
    }
    #pragma endscop
}
