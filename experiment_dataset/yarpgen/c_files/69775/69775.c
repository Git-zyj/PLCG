/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((1 ? var_8 : var_3));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = var_2;
        var_14 = var_6;
        arr_2 [i_0] [i_0] = (max(((71 ? (arr_1 [i_0]) : (arr_0 [i_0]))), ((1 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_15 = (((((-(min(var_5, (arr_1 [i_0])))))) ? (!var_0) : (min((arr_0 [i_0]), (((arr_1 [i_0]) ? var_1 : var_10))))));
    }
    var_16 = 8185049337582233147;
    #pragma endscop
}
