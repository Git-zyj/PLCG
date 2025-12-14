/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = ((((min((arr_0 [i_0 + 1]), (((arr_0 [i_0]) & var_12))))) - ((((!(arr_3 [i_0]))) ? (min(1, 2680518449)) : (arr_2 [i_0 - 1])))));
        arr_4 [6] &= (min((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1]))), (max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = (((((~(arr_3 [i_1 + 2])))) < (((1 | var_13) ? (min(var_8, var_0)) : (((-81 ? (arr_2 [i_1 + 2]) : (arr_0 [i_1]))))))));
        var_18 = ((((max((arr_6 [i_1 + 2]), 47353))) || (((-(arr_5 [i_1 + 1] [i_1 + 1]))))));
        arr_7 [i_1] = (16543194437165008586 & -44);
        arr_8 [i_1] [6] = min(var_6, (arr_5 [i_1] [i_1 + 3]));
    }
    var_19 = (var_14 || -80);
    #pragma endscop
}
