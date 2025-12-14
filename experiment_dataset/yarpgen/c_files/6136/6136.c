/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((64310 ? ((-7592 ? 65531 : 245)) : ((var_3 ? (var_10 >> var_9) : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 ^= ((((((((210 ? var_13 : (arr_7 [i_1] [i_1] [i_2] [i_1])))) ? (arr_2 [i_0]) : (!255)))) ? (((arr_4 [i_2] [i_1] [i_0]) % (arr_6 [i_2 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (min((((arr_4 [i_2] [i_1] [i_0]) ? (arr_1 [i_0]) : var_13)), ((1 ? (arr_6 [i_0] [i_0 - 2] [i_0] [i_0]) : 17))))));
                    var_17 = ((!(((var_3 ? ((var_0 ? 65520 : (arr_0 [i_0] [i_0]))) : -19)))));
                    arr_8 [1] = (((((~(arr_6 [i_2 - 2] [i_1] [14] [i_0])))) ? ((((((arr_2 [i_0 + 1]) ? 1 : var_11))) ? (arr_5 [i_1] [i_1] [i_1] [i_0]) : ((0 | (arr_7 [i_0] [i_0] [4] [i_0]))))) : (((arr_7 [i_2] [8] [i_1] [i_0]) ^ (arr_3 [i_2] [i_1])))));
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = ((var_2 - ((min(var_0, -32748)))));
    #pragma endscop
}
