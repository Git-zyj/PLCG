/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((225 ^ var_8) ? (((-406782570963844335 + 9223372036854775807) >> var_12)) : (!var_15))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(var_18, (((((((((arr_1 [i_0]) ? var_6 : 406782570963844315)) * ((((arr_1 [i_0]) - (arr_1 [i_0]))))))) ? ((-(max(var_7, 406782570963844334)))) : (((-var_14 ? (arr_0 [i_0 - 1]) : (max(var_9, (arr_1 [i_0])))))))))));
        var_19 = (min(var_19, (((max((((arr_1 [21]) >> (102 - 73))), 235))))));
        var_20 = (min((!var_5), ((!(~var_16)))));
        var_21 = (((((~(arr_1 [i_0 + 1])))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : -2147483647));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = ((-((-var_8 ? (arr_1 [i_1]) : (max((arr_3 [i_1] [i_1]), var_1))))));
        var_23 = (min(var_23, (((!(((var_14 ? (((!(arr_3 [i_1] [4])))) : (!2147483633)))))))));
        var_24 = ((!(((((((arr_0 [i_1]) && var_12))) | (arr_1 [i_1]))))));
        arr_4 [i_1] = ((-var_13 ? ((-var_6 / ((((arr_3 [i_1] [i_1]) * var_14))))) : (+-1938398454)));
        arr_5 [1] [i_1] = (((~(((!(arr_0 [3])))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (((max(((min(var_11, (arr_1 [i_2])))), ((127 ? var_12 : 1938398453)))) * (min((11891078435486524849 >= var_11), ((~(arr_7 [i_2] [i_2])))))));
        arr_11 [i_2] = ((+((-((((arr_9 [i_2]) && (arr_1 [i_2]))))))));
        var_25 = ((~((-(arr_1 [10])))));
        var_26 = ((+(max((arr_1 [21]), -var_3))));
    }
    #pragma endscop
}
