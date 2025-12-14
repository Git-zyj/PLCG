/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_12 = (3218133548579767109 + 65);
        var_13 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((((max((arr_1 [i_1]), (arr_0 [i_1] [i_1])))) ? (((~(arr_0 [i_1] [i_1])))) : (((arr_1 [i_1]) ? (arr_4 [i_1]) : (((((arr_4 [i_1]) > 486018467))))))));
        var_15 = ((((max(3808948819, -1))) ? (((~(~-35739905)))) : (((((arr_3 [i_1] [i_1]) ? var_1 : 486018467)) >> (((!(arr_1 [i_1]))))))));
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (((((((var_4 ? var_7 : 486018458))) ? (arr_0 [i_2] [i_2 - 1]) : (arr_6 [5]))) % ((486018447 ? ((var_9 ^ (arr_0 [i_2 - 4] [i_2]))) : var_1))));
        arr_8 [i_2 + 1] = ((~(arr_0 [i_2] [i_2])));
        var_16 = (~var_0);
    }
    var_17 &= ((-3808948849 ^ (var_2 + var_4)));
    #pragma endscop
}
