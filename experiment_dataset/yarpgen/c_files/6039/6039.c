/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_4 ? var_7 : (-2147483647 - 1))) >> (((var_13 - var_15) + 209)))) + (~var_15)));
    var_21 = (((((((var_4 ? var_8 : var_18))) ? (((2147483642 ? var_1 : var_4))) : var_11)) % ((60 ? 95 : var_11))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [16] [16] &= var_4;
        var_22 = (max(var_22, (arr_2 [i_0] [i_0])));
        var_23 = (!var_12);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (((((var_14 ? -61 : (arr_4 [i_1])))) + (((var_3 * var_3) & var_9))));
        var_24 = (((((-(arr_2 [8] [i_1])))) ? ((var_11 ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1]))) : (arr_4 [15])));
    }
    #pragma endscop
}
