/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = ((arr_2 [i_0]) ? var_6 : (arr_2 [i_0]));
        var_13 -= ((~(arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 |= ((-var_3 ? (((!((((arr_4 [i_1]) ? var_9 : (arr_1 [i_1]))))))) : ((-(arr_4 [i_1])))));
        var_15 += (arr_6 [10] [10]);
        var_16 ^= ((((max((arr_4 [i_1]), (((arr_3 [3]) ? var_8 : 36790))))) ? (((~var_10) ? var_3 : (arr_3 [i_1]))) : (arr_5 [i_1] [i_1])));
    }
    var_17 += (-(((~var_7) ? var_0 : (((var_6 ? var_10 : 641887324))))));
    #pragma endscop
}
