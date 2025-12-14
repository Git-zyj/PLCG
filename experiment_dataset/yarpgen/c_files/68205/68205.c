/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (arr_2 [0] [i_0]);
        var_17 = max(var_5, ((~((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = ((-((var_13 ? (arr_1 [i_1]) : (arr_1 [17])))));
        var_19 = (var_0 ? (max(((((arr_4 [i_1] [i_1]) == var_9))), (((arr_0 [i_1]) % var_11)))) : 16196);
        arr_5 [12] = (max(((((arr_1 [i_1]) ^ (arr_2 [i_1] [i_1])))), (arr_0 [i_1])));
    }
    var_20 = var_2;
    var_21 = var_3;
    #pragma endscop
}
