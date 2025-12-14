/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!52) ? 6921 : var_10));
    var_14 -= (((-6921 && 6922) ? (max((var_12 & 166), var_3)) : -var_5));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(var_3, ((((!16) && var_7)))));
        arr_4 [i_0] = (((((105 ^ (6931 & 10)))) ? ((~(arr_2 [3]))) : (~-30)));
        arr_5 [i_0] = (((~244) ? (max(var_4, 200593658)) : var_6));
    }
    #pragma endscop
}
