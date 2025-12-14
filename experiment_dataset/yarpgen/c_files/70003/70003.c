/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-4 ? (arr_2 [i_0 - 1] [i_0 + 4]) : 3443))) ? (((-5102 ? var_7 : var_7))) : ((var_8 ? (arr_2 [i_0 + 3] [i_0 - 2]) : var_10)));
        arr_4 [i_0] = (((((var_4 ? (arr_2 [i_0] [i_0 - 1]) : 96156373))) ? (((((19021 ? var_0 : var_1))) ? ((var_1 ? (arr_0 [i_0 + 3] [i_0]) : 1029886276564527006)) : 96156373)) : (((var_4 ? var_7 : 60)))));
    }
    var_11 = ((((((((-18 ? var_0 : 24591))) ? var_9 : var_8))) ? ((var_3 ? (((59 ? var_1 : 3528973161))) : ((var_8 ? 5101 : var_5)))) : var_6));
    #pragma endscop
}
