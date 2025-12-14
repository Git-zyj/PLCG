/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((((max((var_11 > var_9), var_18))) ? (((arr_1 [i_0 + 1] [i_0 - 2]) << (((arr_2 [i_0]) - 4782)))) : ((-(arr_2 [i_0])))))) : (((((max((var_11 > var_9), var_18))) ? (((arr_1 [i_0 + 1] [i_0 - 2]) << (((((arr_2 [i_0]) - 4782)) + 19311)))) : ((-(arr_2 [i_0]))))));
        arr_4 [6] = -var_15;
        arr_5 [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = ((+((var_1 ? 1 : (((arr_7 [18]) ? var_8 : var_18))))));
        arr_9 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (min((arr_7 [i_2]), ((min(((max(var_10, var_16))), -28)))));
        arr_13 [i_2] = ((((!(arr_10 [i_2])))));
    }
    var_19 = (min(((var_6 ? ((var_2 ? var_13 : var_17)) : (var_0 > var_17))), ((min(var_1, var_11)))));
    var_20 = (min(((var_16 ? (var_14 > 3737969522) : var_5)), var_4));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_17 [i_3] = (((var_9 ? (arr_16 [9]) : ((var_15 / (arr_7 [i_3]))))));
        arr_18 [i_3] = (max((((var_5 | var_12) > (var_13 || var_10))), (((~65516) || ((!(arr_16 [3])))))));
        arr_19 [11] = ((-(((arr_7 [20]) ? (~var_1) : (!var_14)))));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_23 [i_4] = (min((min(var_12, ((min(1, (arr_21 [15])))))), (!-2047)));
        arr_24 [i_4] &= (((var_9 ? (arr_6 [i_4 + 1]) : (!var_11))));
        arr_25 [i_4] [i_4] = var_1;
        arr_26 [i_4 - 1] &= ((max(18393682686828483386, (arr_22 [i_4]))));
    }
    var_21 = (max((min(-var_9, (!32767))), ((max(var_3, 3737969537)))));
    #pragma endscop
}
