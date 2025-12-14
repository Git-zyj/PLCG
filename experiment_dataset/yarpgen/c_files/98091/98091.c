/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [1])))) ? (arr_0 [13]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
        arr_2 [i_0] |= (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_12 = (arr_0 [i_0]);
        var_13 = (max(var_13, (arr_1 [i_0])));
    }
    var_14 = (min(var_0, var_0));
    var_15 = (min(((max(var_5, 2680031439))), ((((min(var_8, var_1))) ? (max(var_8, var_4)) : ((min(var_3, var_3)))))));
    #pragma endscop
}
