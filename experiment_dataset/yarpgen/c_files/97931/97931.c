/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 = (((arr_0 [1] [i_0]) >= 0));
        var_13 = (((((73 ? (arr_0 [i_0 + 1] [i_0]) : ((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (arr_2 [i_0 + 2]) : (!20963)));
    }
    var_14 -= (max(var_9, var_1));
    var_15 -= ((((((((var_0 ? 1 : -20963)) >= ((max(-20960, -20977))))))) >= (((((max(39484, 1)))) * ((20983 ? 0 : var_8))))));

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (max(((20963 ^ (((arr_6 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))), (min((((arr_5 [i_1] [i_1]) ? (arr_3 [i_1]) : -20985)), ((((arr_5 [i_1] [i_1]) >= -20978)))))));
        var_16 = (arr_6 [i_1]);
        var_17 = ((((21002 >= (arr_3 [i_1]))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
    }
    #pragma endscop
}
