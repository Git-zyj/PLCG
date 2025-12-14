/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((max(var_2, var_11)), var_11))) ? (((var_5 ? (max(var_14, var_9)) : var_14))) : var_16));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? var_15 : var_10));
        var_19 = var_2;
        arr_3 [i_0] = var_16;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = (min(var_20, ((((arr_1 [i_1]) ? var_3 : (min(((var_0 ? var_15 : (arr_4 [i_1] [9]))), (arr_1 [i_1]))))))));
        arr_6 [11] = (max(((max(var_15, ((var_16 ? var_12 : (arr_5 [i_1] [i_1])))))), (max((((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : var_9)), (arr_1 [i_1])))));
        var_21 = (min(var_21, ((min(((((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : var_2))) ? ((var_8 ? var_1 : var_13)) : (arr_2 [i_1]))), ((((arr_2 [11]) ? (((arr_4 [i_1] [i_1]) ? (arr_2 [i_1]) : var_5)) : (((arr_5 [i_1] [i_1]) ? var_8 : (arr_1 [i_1])))))))))));
        var_22 ^= (min((arr_2 [i_1]), var_13));
        arr_7 [i_1] = (min((min((arr_4 [i_1] [i_1]), var_4)), ((max(var_0, (min((arr_2 [i_1]), var_10)))))));
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        var_23 -= var_0;
        var_24 = arr_9 [i_2];
    }
    #pragma endscop
}
