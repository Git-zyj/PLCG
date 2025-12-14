/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_1 [i_0] [4]) ? -var_11 : (arr_0 [i_0]));
        arr_3 [0] = ((!(((~(-18529 | 8494334064767717775))))));
        arr_4 [i_0] = (max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1])));
        arr_5 [10] = (((~(arr_0 [16]))));
        arr_6 [14] = (arr_0 [2]);
    }
    var_17 = ((~(var_5 >= var_12)));
    var_18 = var_4;
    #pragma endscop
}
