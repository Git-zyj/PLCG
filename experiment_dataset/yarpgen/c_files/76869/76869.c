/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 *= ((var_11 ? (((((!(arr_2 [i_0])))) & ((min(var_17, (arr_1 [i_0] [i_0])))))) : ((30368 ? (arr_3 [1] [i_0]) : (arr_3 [i_0] [i_0])))));
        arr_4 [i_0] = 4294967295;
        var_20 -= var_13;
    }
    var_21 = (min(var_21, ((((((var_14 ? 35183 : ((var_8 ? 96 : var_10))))) ? var_4 : var_13)))));
    var_22 = var_14;
    var_23 &= var_4;
    var_24 = var_4;
    #pragma endscop
}
