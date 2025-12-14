/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((!var_8) >= -var_11))), -123));
    var_15 = ((!((((6088281416844268336 ? var_8 : 196)) < var_8))));
    var_16 = (max((((max(123, var_4)) ^ var_2)), var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 -= ((-(max((~var_3), var_11))));
        var_18 = (max(var_18, ((min(((!(arr_0 [i_0] [8]))), ((!(((0 ? -61 : var_1))))))))));
        arr_3 [i_0] [i_0] = ((((((~var_10) ? (max(11, 1935433873)) : (((~(arr_1 [i_0]))))))) ? (4 + -493108698885725512) : (((((-(arr_1 [i_0])))) ? (max((arr_1 [i_0]), 15801167879850338273)) : (((781588622549870119 ? (arr_0 [i_0] [i_0]) : -2295)))))));
        arr_4 [4] [4] &= (((!var_12) - 0));
        arr_5 [i_0] [i_0] = (max((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0]))), var_4));
    }
    #pragma endscop
}
