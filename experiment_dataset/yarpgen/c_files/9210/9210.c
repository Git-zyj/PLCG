/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 ^= (min(var_2, ((((min(var_8, (arr_0 [0])))) == (arr_0 [0])))));
        var_15 = (min(var_15, ((!(-250852646 / -2296)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = (min(var_16, (!var_10)));
        var_17 = (!var_13);
        var_18 = (!var_13);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] |= ((((arr_5 [i_2]) + var_2)) < (arr_5 [i_2]));
        arr_8 [i_2] [i_2] = ((!(arr_5 [20])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_11 [i_3] = (var_9 == (arr_9 [1] [i_3]));
        arr_12 [i_3] = ((!((min(var_8, 0)))));
    }
    var_19 |= (((((4250745394 || var_10) && var_13)) || (((var_3 || -119) && (var_6 || var_3)))));
    var_20 = 3473590796;
    var_21 = ((!((!(var_1 == var_13)))));
    #pragma endscop
}
