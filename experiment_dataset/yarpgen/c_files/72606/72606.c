/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = (max(var_21, var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 ^= (arr_1 [i_0]);
        var_23 = (((min(var_17, (arr_0 [i_0]))) == ((min((arr_0 [i_0]), (arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_24 = (max(var_24, (~5868661563488550301)));
        arr_4 [i_1] = (-14658 ? 4333657781734911778 : 4333657781734911773);
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = 566102766;
        arr_9 [i_2] = (max((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2]))), ((min((arr_6 [i_2]), (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        arr_12 [1] [0] |= var_11;
        var_26 = (var_13 ? (arr_10 [6]) : ((((!(arr_11 [10]))))));
        var_27 = var_10;
    }
    #pragma endscop
}
