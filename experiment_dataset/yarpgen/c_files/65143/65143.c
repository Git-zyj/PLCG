/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((((((-1550312824 ? 1 : 1))) ? (((var_9 ? 1 : 1))) : ((var_12 ? 0 : var_12))))) ? (((((31680 ? 1 : 1))) ? ((-31680 ? var_12 : var_3)) : (((0 ? 1 : -1535450446))))) : ((((((3902376739 ? 0 : 6))) ? (((var_13 ? var_15 : 65512))) : ((var_7 ? 1 : var_12)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += (((((((((arr_1 [i_0] [i_0]) ? 1 : 31687))) ? ((((arr_1 [i_0] [i_0]) ? 1 : -32))) : (((arr_0 [10] [i_0]) ? var_12 : 4294967291))))) ? ((((((1 ? var_4 : (arr_1 [i_0] [i_0])))) ? ((var_3 ? 4 : (arr_1 [15] [i_0]))) : ((var_14 ? var_2 : (arr_1 [i_0] [i_0])))))) : ((((((arr_0 [16] [i_0]) ? (arr_0 [10] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((var_1 ? (arr_0 [1] [i_0]) : 176)) : (((0 ? 1 : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((((((((var_9 ? 3577883559 : 1))) ? ((((arr_1 [i_0] [i_0]) ? var_1 : var_17))) : (((arr_1 [i_0] [i_0]) ? 171 : var_8))))) ? ((((((arr_0 [i_0] [i_0]) ? 37647 : var_6))) ? ((-18 ? 3577883538 : (arr_1 [i_0] [i_0]))) : (((2221325616 ? (arr_1 [i_0] [i_0]) : var_13))))) : (((((38 ? var_15 : 24))) ? (((var_8 ? (arr_1 [i_0] [i_0]) : 1))) : (((arr_0 [i_0] [i_0]) ? var_16 : var_9))))));
    }
    #pragma endscop
}
