/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((((max(13520, -699220059))) ? (((arr_1 [i_1]) ? (max(var_5, var_2)) : (((arr_0 [10]) ? 1 : (arr_3 [i_0]))))) : ((13 + (arr_3 [i_0])))));
                var_12 = (max(var_12, (((+((var_0 ? (arr_1 [i_1]) : var_4)))))));
                var_13 = (((((-(arr_2 [i_0] [i_0] [i_0])))) ? var_5 : (((((var_0 ? (arr_3 [i_1]) : 9347))) ? (var_0 - 55613) : (var_2 / var_6)))));
                var_14 ^= (arr_1 [i_0]);
            }
        }
    }
    var_15 = (max(((min(((var_1 ? var_5 : var_4)), (var_2 | var_0)))), ((var_9 ? (var_4 + var_6) : 0))));
    var_16 = ((var_0 ? (((((min(var_7, 2861871625))) ? ((min(9347, var_10))) : (18614 ^ var_2)))) : ((~(var_6 & var_1)))));
    var_17 &= 9918;
    #pragma endscop
}
