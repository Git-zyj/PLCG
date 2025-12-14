/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = 8750;
        var_11 = (((arr_1 [i_0]) ? ((1 ? (arr_0 [i_0]) : ((((arr_1 [11]) < -8751))))) : (((((var_4 ? (arr_0 [4]) : -8751))) ? -16 : 51855))));
        var_12 = (min(var_12, var_7));
        var_13 = (arr_1 [i_0]);
        arr_2 [i_0] [10] = (min(15457, (((((2615372483 * (arr_0 [i_0]))) <= ((-4518042354099367085 ? 98 : 1048630037)))))));
    }
    var_14 = (min(var_14, var_8));

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= ((((((((-(arr_3 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : (arr_4 [1] [i_1])))) ? ((var_1 ? 1 : (arr_5 [i_1]))) : 5766));
        var_15 += (((max(var_2, -118))) | ((((!(arr_0 [i_1]))))));
    }
    var_16 = (((((30467 ? 30477 : 98))) ? -8750 : var_4));
    #pragma endscop
}
