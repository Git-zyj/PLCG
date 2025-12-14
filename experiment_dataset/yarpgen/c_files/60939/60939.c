/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max((((max(var_12, 2)) / (min(-1194858898, (arr_0 [i_0]))))), (min(2147483647, (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_16 = var_12;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = min((arr_2 [i_1] [i_1]), (max((arr_2 [0] [i_1]), (max(-86201592, var_0)))));
        var_18 = (max(var_18, ((((arr_3 [i_1] [i_1]) ? (var_8 ^ var_1) : ((((((arr_2 [i_1] [i_1]) ? 10668652486855511500 : var_11)) > 2))))))));
        arr_4 [i_1] = (max((arr_2 [i_1] [i_1]), ((242 ? 61760 : 218))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (arr_5 [i_2] [i_2]);
        arr_8 [0] = (((!97) & 96));
        arr_9 [14] = ((((((max(11997951505176626908, -6)) + ((((arr_6 [i_2] [6]) * 55)))))) ? 1697652574 : (max(2244781916, -1728954413))));
    }
    var_20 = (((((var_10 ? (((var_12 ? var_5 : var_7))) : (max(var_0, 141))))) ? 397221074 : ((((min(-7630668304088313258, 18446744073709551611))) ? (var_7 % var_10) : var_7))));
    #pragma endscop
}
