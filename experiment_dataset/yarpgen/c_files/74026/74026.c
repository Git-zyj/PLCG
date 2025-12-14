/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((!1) ? (~536870911) : (17381383829343247014 / 59)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(62407, -7982536962911641148));
        var_20 = ((((3129 ? (arr_0 [i_0 - 1]) : (arr_2 [i_0 - 1]))) != (((!(arr_0 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] |= (((((((!(arr_4 [i_1]))) ? 1 : (arr_4 [i_1])))) ? (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : ((((max(2194098408, 48563)) & (arr_3 [i_1]))))));
        var_21 = (min(var_21, (((-((((384 ? 0 : 10464207110797910479)) + (arr_4 [i_1]))))))));
        var_22 = ((-(((arr_3 [i_1]) ? (arr_3 [i_1]) : 7901554267780397713))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = (min((arr_7 [i_2]), ((9223372036854775807 ? (arr_6 [i_2]) : (arr_7 [i_2])))));
        var_24 = (max(var_24, (((((arr_6 [i_2]) <= (arr_6 [i_2])))))));
    }
    #pragma endscop
}
