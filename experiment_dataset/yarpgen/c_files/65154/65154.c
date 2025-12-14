/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 |= ((!(((~((255 ? var_8 : var_8)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 ^= ((max(((18178 ? 255 : 608263181)), ((0 ? 1 : 18189)))));
        var_13 = ((-(max(var_3, 97))));
        arr_4 [i_0] = (max((((((arr_0 [i_0]) ? (arr_1 [7]) : (arr_2 [i_0] [i_0]))))), -var_4));
        var_14 = (((2636786929 ? (arr_3 [i_0]) : (arr_2 [i_0] [i_0]))) | ((69 ? var_9 : (arr_2 [i_0] [i_0]))));
        var_15 = (((((-3720324717 ? var_6 : 156))) ? (((132 & 6694610499773106566) ? 503316480 : (30632 | var_9))) : var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((909734207530632018 ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
        var_17 *= (((arr_0 [i_1]) ? (arr_0 [5]) : (arr_0 [i_1])));
        arr_8 [i_1] = ((~((var_7 ? 189489353 : 4213361945860930080))));
    }
    #pragma endscop
}
