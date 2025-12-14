/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (-512 == 1901892971);
        var_18 = (max(((((arr_0 [i_0]) == (arr_2 [i_0])))), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 ^= (arr_3 [11] [6]);
        var_20 *= (arr_3 [i_1 + 4] [i_1]);
        var_21 = (max((arr_3 [i_1] [i_1 + 4]), (min(((((arr_4 [i_1]) == (arr_4 [i_1])))), (min((arr_4 [i_1]), (arr_3 [i_1] [i_1])))))));
        var_22 = ((((((((((arr_3 [1] [9]) ? (arr_4 [11]) : (arr_3 [i_1] [i_1])))) && (min((arr_4 [i_1 + 2]), (arr_4 [i_1]))))))) | ((0 ? 3475680133042510404 : 3475680133042510404))));
        var_23 = (arr_3 [i_1] [i_1]);
    }
    var_24 = (max(1920714121, 160));
    #pragma endscop
}
