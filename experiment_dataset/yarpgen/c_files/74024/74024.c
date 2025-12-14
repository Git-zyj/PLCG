/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_15 ? 0 : var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_3 [i_0]);
        arr_4 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (((~(arr_2 [i_0]))))));
        arr_5 [i_0] = 8646911284551352320;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (((arr_7 [i_1] [i_1]) ? (((!(((var_7 ? (arr_7 [i_1] [i_1]) : var_7)))))) : (((arr_6 [i_1]) - var_13))));
        arr_8 [20] = (((((~(arr_6 [i_1])))) ? (arr_7 [i_1] [15]) : ((57900 ? ((min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))) : (((arr_6 [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_6 [i_1])))))));
    }
    #pragma endscop
}
