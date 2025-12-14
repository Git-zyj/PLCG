/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 * ((max(1483038544, (~119))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0 + 4];
        arr_4 [i_0 + 4] = (min((((!(arr_1 [i_0 - 1])))), (arr_1 [i_0 - 1])));
        arr_5 [i_0 + 2] [i_0 + 2] = (max((((!((((arr_2 [i_0]) | var_0)))))), (max(((3323773567 ? 971193733 : var_11)), var_13))));
        var_16 = ((var_8 ? ((((-1844642312 ? var_5 : 45)))) : (((arr_0 [i_0 - 2] [i_0 + 3]) ? (arr_1 [i_0 - 2]) : var_7))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = (((var_3 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))));
        var_17 = ((var_8 ? (arr_6 [1] [i_1]) : (!var_12)));
        var_18 = ((-841435302 ? (((-(-1 / -234217820)))) : ((var_1 ? var_10 : var_12))));
        var_19 = (arr_6 [i_1] [i_1]);
        var_20 = (arr_8 [i_1]);
    }
    #pragma endscop
}
