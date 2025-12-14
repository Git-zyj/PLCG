/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? -var_3 : (!var_9)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = ((((6 < 2471914072) ? 1 : 7200)));
        var_14 ^= ((~(((((arr_1 [i_0] [i_0]) ? var_10 : 2834276691239030659)) >> (((((arr_1 [9] [9]) ^ 7200)) - 4819043605635809543))))));
        arr_2 [10] [i_0] |= ((((((-((126 | (arr_1 [i_0 - 1] [i_0 - 1]))))) + 9223372036854775807)) >> (((max((((var_10 ? 72 : 58335))), ((2471914072 ? (arr_1 [i_0] [i_0 + 2]) : 83)))) - 4819043605635816785))));
        var_15 = (max(var_15, ((((arr_0 [i_0] [14]) < ((2389177302 ? 407364266 : 15612467382470520978)))))));
        var_16 = (((((arr_0 [i_0 + 2] [i_0]) / (arr_0 [i_0 + 2] [i_0]))) == (((!(arr_0 [i_0] [i_0]))))));
    }
    var_17 += (~-var_2);
    #pragma endscop
}
