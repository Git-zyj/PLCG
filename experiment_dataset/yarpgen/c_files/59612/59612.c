/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (min((((arr_0 [i_0]) ? ((-(arr_1 [i_0]))) : (arr_0 [1]))), (((((var_2 ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0]) - var_5)))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 = (min(var_21, (arr_3 [i_1] [i_1] [i_1])));
            var_22 ^= ((0 ? (max(var_8, var_7)) : (((1 ? -2146301239 : (arr_0 [i_0]))))));
            var_23 = var_18;
        }
        arr_4 [i_0] = ((((((!(arr_2 [17]))))) != (min(((-26749 ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))), ((var_0 ? (arr_2 [i_0]) : 1177171623308438358))))));
    }
    var_24 *= (((var_12 + ((max(var_4, var_6))))));
    #pragma endscop
}
