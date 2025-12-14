/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_13 ? var_13 : var_8)) ^ var_4));
    var_17 |= ((((min(var_12, var_4) / (((var_1 ? var_15 : var_8)))))));
    var_18 = ((!((((var_0 ? var_13 : var_1)) <= (var_10 / var_7)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, (((arr_1 [6] [6]) + (((((arr_0 [2] [2]) < (arr_0 [8] [8]))) ? (min((arr_1 [i_0] [0]), (arr_0 [0] [0]))) : (((((arr_0 [1] [1]) && (arr_0 [0] [i_0])))))))))));
        var_20 = (max(var_20, ((((((max((arr_0 [0] [8]), (arr_1 [i_0] [8])))) && (((var_12 << (((arr_1 [8] [8]) - 1608475912)))))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                arr_7 [i_1] = ((((((max((arr_4 [10] [i_2]), var_7))) ? (arr_3 [0] [i_2]) : (((var_5 ? var_15 : var_2))))) >= (((((max((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) ? ((((arr_3 [i_1] [i_1]) && var_15))) : (max(var_2, var_9)))))));
                var_21 = (((max((((arr_2 [i_1]) ? var_14 : (arr_4 [i_1] [i_2]))), ((((((arr_5 [i_1] [i_2]) + 2147483647)) >> (var_1 - 162)))))) ^ ((((var_4 != (arr_5 [i_2] [i_1])))))));
                var_22 = (max(var_22, (max((((arr_4 [i_2] [i_1]) & ((((arr_6 [i_1]) ? (arr_6 [i_2]) : var_6))))), (var_2 > var_5)))));
            }
        }
    }
    #pragma endscop
}
