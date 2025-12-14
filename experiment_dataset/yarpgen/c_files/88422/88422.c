/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 &= (((((var_0 / (((arr_2 [2]) * (arr_2 [i_0 - 1])))))) / (arr_0 [i_0])));
        var_16 = (max(var_16, ((((((-125 ? ((4 ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_8)) : ((((arr_0 [i_0]) ? (arr_2 [3]) : 1)))))) ? ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [2] [i_0]))) * var_10))) : ((((((arr_0 [i_0 - 1]) ? 247 : (arr_2 [i_0 + 1])))) ? (((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) : (arr_0 [i_0]))))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 ^= (((((108 >> (6069678838305466338 - 6069678838305466326)))) % 5801637416749710464));
        var_18 ^= (((arr_3 [i_1]) / (arr_0 [i_1])));
        var_19 ^= (arr_5 [i_1] [i_1]);
        var_20 = (min(var_20, ((((((arr_3 [i_1]) ^ var_8)) < var_5)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (min(var_21, (((0 ? 116 : 1)))));
        var_22 ^= var_12;
        var_23 *= ((-(arr_9 [i_2])));
        var_24 ^= 1;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_25 = (max(var_25, ((((((arr_10 [i_3]) ? (arr_4 [i_3] [i_3]) : 5)) < (arr_2 [i_3 - 2]))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_26 += ((var_12 ? var_0 : (arr_12 [i_5])));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_27 = (min(var_27, ((((((arr_7 [i_3]) && 243)) ? ((var_8 ? (arr_17 [i_3]) : (arr_15 [i_3] [i_3]))) : (-31 > var_4))))));
                        var_28 = (max(var_28, var_13));
                    }
                    var_29 ^= ((31 ? -30249 : 5));
                    var_30 = (max(var_30, (((((((arr_18 [i_3] [i_4 - 1] [3] [3]) ? (arr_0 [i_3 + 1]) : 43))) ? (arr_21 [i_4] [i_4] [i_4 + 1] [i_3]) : (arr_3 [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
