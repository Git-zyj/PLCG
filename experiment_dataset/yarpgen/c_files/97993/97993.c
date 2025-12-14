/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (min(5770128030583742900, (!var_5)));
        arr_5 [i_0] [1] = (((-(arr_1 [i_0]))));
        arr_6 [i_0] [i_0] = ((~(var_11 >= 202)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] = 202;
        var_12 = (min(var_4, (((var_4 < 4454912057127058110) ? (arr_8 [i_1]) : var_7))));
        var_13 += ((!(arr_8 [i_1])));
    }
    var_14 = var_3;
    var_15 = ((min(var_2, var_4)));
    #pragma endscop
}
