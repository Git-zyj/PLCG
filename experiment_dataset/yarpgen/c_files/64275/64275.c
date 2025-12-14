/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) == var_4));
        var_16 ^= ((((3960816659 ? -24819 : ((154 ? -24819 : var_1)))) % (arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [0]);
        arr_3 [i_0] = (min(((min(90, (arr_1 [i_0])))), var_10));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [10] = (min(((-((2633674454 * (arr_1 [i_1]))))), ((((((var_5 ? 1661292841 : var_1))) > var_1)))));
        arr_8 [i_1] = ((-(((334150637 * 24826) / (arr_0 [i_1])))));
        arr_9 [i_1] [i_1] &= (min((((!(arr_5 [i_1] [i_1])))), (arr_0 [i_1])));
        var_17 = (((((-24820 ? -22 : 1661292822)) + var_0)));
    }
    #pragma endscop
}
