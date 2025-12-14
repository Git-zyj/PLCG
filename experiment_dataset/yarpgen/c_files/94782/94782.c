/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (var_15 ? ((var_3 ? (((var_7 + 9223372036854775807) >> var_15)) : (var_11 & var_12))) : 7);
    var_20 = (min(var_20, var_10));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])));
        arr_4 [i_0 - 2] = (((arr_2 [i_0 + 1]) ? (((-2073764179993983072 == (arr_0 [i_0 - 2])))) : (arr_2 [i_0 - 1])));
        arr_5 [i_0] [i_0] = var_3;
        arr_6 [i_0 - 2] = var_11;
        var_21 *= (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0])));
    }
    #pragma endscop
}
