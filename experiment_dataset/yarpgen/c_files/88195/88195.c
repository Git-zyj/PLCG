/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((13725 ^ -1436081573615695297) ? ((var_2 ? ((var_12 ? 18446744073709551615 : var_2)) : (~1436081573615695273))) : ((min((~var_8), var_14)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_17 = ((50236 ? (arr_1 [i_0 - 4]) : (arr_0 [i_0 - 4] [i_0])));
        var_18 += -1436081573615695295;
        var_19 |= (((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0 - 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (((arr_3 [i_0 - 2] [i_0 - 4] [i_0 - 4]) + (arr_3 [i_0 + 1] [i_0 - 2] [i_0 + 1])));
                        arr_11 [i_1] [i_2] [i_2] [i_0] = (((arr_9 [i_0 - 2] [i_1] [i_0 - 3] [i_0 - 3]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (arr_9 [i_0] [i_1] [i_2] [i_3])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_21 = (((-42 ? (arr_6 [i_4] [i_4] [i_4] [i_4]) : var_10)));
        arr_15 [i_4] |= ((-(arr_9 [i_4] [22] [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_22 += ((+((((min((arr_0 [i_5] [6]), (arr_1 [i_5])))) ? (((min(var_5, (arr_7 [14]))))) : (arr_2 [i_5] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [10] [i_6] [i_5] = (max((arr_0 [i_7 + 3] [i_8 + 1]), ((-(arr_7 [i_5])))));
                        arr_26 [i_5] [i_5] = (arr_2 [i_6] [i_7 - 1]);
                        var_23 = (min(-1436081573615695306, 1436081573615695289));
                    }
                }
            }
        }
        arr_27 [i_5] [i_5] = ((((3 ? ((var_10 >> (170 - 150))) : (arr_18 [i_5] [i_5]))) > (((((-121 ? 36338 : var_0)) < (((arr_10 [i_5] [i_5] [i_5]) / (arr_21 [i_5] [i_5] [i_5] [2]))))))));
        var_24 = min((min((((arr_7 [i_5]) | -4828764854453584024)), ((min(var_6, 29198))))), (((253 != (((arr_8 [i_5] [i_5] [22]) * (arr_8 [i_5] [i_5] [i_5])))))));
    }
    var_25 = (((((max(86, var_9))) ^ var_1)));
    var_26 = ((~((((min(var_15, var_0))) ? (((var_5 >> (var_6 - 4707)))) : (min(19, 9223372036854775807))))));
    #pragma endscop
}
