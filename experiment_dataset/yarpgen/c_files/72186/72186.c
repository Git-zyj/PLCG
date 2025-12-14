/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -166068626;
        arr_4 [i_0] = (max((max(-166068626, 1746789535)), 0));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 |= (((((arr_1 [i_1]) ? (arr_5 [i_1]) : var_13)) >> (var_11 - 19612)));
        var_17 |= ((min((((1 ? 2147483647 : 351486096))), (((arr_0 [10]) ? -2099447173 : -1)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 += (((((arr_8 [5] [i_2]) && (((var_13 ? 871676370094524882 : var_6))))) ? ((((((arr_7 [i_2]) ? (arr_8 [i_2] [1]) : var_3))) ? ((1 ? (arr_7 [i_2]) : (arr_8 [i_2] [i_2]))) : (((arr_7 [i_2]) / (arr_7 [i_2]))))) : (max((75 & 4081682985), (((!(arr_7 [i_2]))))))));
        var_19 -= (((((119 ? (min(-950495483, var_9)) : ((((var_14 && (arr_7 [0])))))))) ? (9223372036854775794 || 1) : (max(var_7, (arr_7 [i_2])))));
        arr_9 [i_2] = 4109831877;
    }
    var_20 = var_12;
    #pragma endscop
}
