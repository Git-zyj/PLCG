/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((((~14) != var_14)))) == var_12));
    var_18 ^= ((((((26595 ? var_5 : 55) == (16 <= var_9))))));
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [18] [i_0] = (((((1 ? 174 : 16345125547023187152))) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 242)) : (max((arr_0 [i_0] [i_0]), 24))));
        arr_4 [1] [i_0] = ((((min(247, var_16))) + (min((((184 ? 13 : (-32767 - 1)))), (min(var_2, (arr_2 [i_0])))))));
        arr_5 [i_0] = 240;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = (((min((((arr_6 [i_1]) ? (-32767 - 1) : -79)), var_11)) == (var_8 || var_7)));
        arr_10 [i_1] = (((((((min((arr_8 [i_1]), var_11))) - (arr_1 [i_1])))) < (((var_1 ? var_0 : -60)))));
    }
    #pragma endscop
}
