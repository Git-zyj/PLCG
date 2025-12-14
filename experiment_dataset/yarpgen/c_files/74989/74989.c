/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = ((127 ? (arr_1 [i_0] [i_1]) : (arr_1 [12] [10])));
            var_19 = (min(var_19, 9223372036854775807));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 ^= arr_3 [i_3];
                        var_21 = (((arr_11 [i_0] [i_1] [i_2] [7]) ? ((var_9 ? 1350823099 : (arr_5 [i_1] [i_3]))) : var_5));
                        var_22 = (((arr_5 [i_0] [i_1]) ^ (arr_0 [i_0])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_23 = ((var_2 ? (arr_3 [i_4]) : ((0 ? 115 : 1350823099))));
            arr_14 [i_4] [i_0] = (((arr_7 [i_0] [i_4] [4]) ? (arr_7 [i_0] [i_0] [i_4]) : (arr_7 [i_0] [i_4] [i_4])));
            var_24 = var_3;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_19 [i_5] [i_5] = (((((var_7 ? 9223372036854775807 : var_3))) ? (arr_6 [i_0] [i_5] [i_5]) : (((arr_10 [i_5] [i_5] [i_0] [i_0]) >> (227 - 217)))));
            var_25 = ((((((arr_7 [i_0] [i_0] [i_0]) ? (arr_13 [i_5]) : (arr_15 [1])))) ? (arr_18 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0])));
            var_26 ^= ((((((arr_5 [1] [i_5]) + (arr_6 [i_0] [i_5] [i_0])))) ? (arr_9 [i_5] [2] [i_0] [i_0] [i_5]) : (((arr_6 [i_0] [i_5] [i_5]) ? (arr_3 [i_0]) : (arr_5 [i_0] [i_5])))));
        }
        var_27 = (arr_0 [i_0]);
    }
    #pragma endscop
}
