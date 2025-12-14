/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_11 ? ((2758615214021382358 / (arr_0 [12]))) : ((((arr_1 [1]) ? var_8 : (arr_0 [12])))))) << (((((arr_0 [i_0]) ? (max(73908288, (arr_0 [i_0]))) : ((56 & (arr_1 [i_0]))))) - 73908288))));
        var_15 = (-((((!(arr_1 [i_0]))))));
        var_16 = (((~244335830) & ((115 ? (max(var_3, 1795624362)) : (arr_1 [i_0])))));
        var_17 ^= ((((!(!var_7)))) * (max(((((arr_1 [i_0]) == var_10))), ((-(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (i_1 % 2 == 0) ? ((((((((arr_4 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))) % ((max((arr_3 [i_0] [i_1]), (arr_1 [i_0]))))))) : ((((((((arr_4 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))) * ((max((arr_3 [i_0] [i_1]), (arr_1 [i_0])))))));
            arr_5 [i_1] [i_1] = var_11;
        }
    }
    var_19 = (var_13 + var_13);
    var_20 = var_5;
    var_21 = var_7;
    #pragma endscop
}
