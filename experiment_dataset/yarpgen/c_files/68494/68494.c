/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_3 [i_0]) ? ((((arr_1 [i_0]) || (arr_1 [i_0])))) : ((var_1 ? 1 : (arr_2 [i_0] [i_0]))));
        var_16 = (((arr_1 [i_0]) ? var_5 : (((arr_3 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 *= (((105 < (arr_3 [i_1]))));
        var_18 = (max(var_18, ((((max((((var_1 >> (((arr_2 [i_1] [i_1]) - 111))))), (max((arr_5 [i_1]), 13820446204326564552)))) != (arr_0 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [5] [14] [i_3] [i_4] = (((arr_10 [i_1] [i_2] [i_3] [i_4]) ? (max((arr_11 [i_3 - 1]), (min(33488896, (arr_1 [i_4 + 1]))))) : ((((arr_8 [i_2 + 3] [i_3 - 1]) ? var_8 : var_0)))));
                        var_19 = (((((arr_12 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_2 [i_2 + 2] [i_3 - 1]) : (arr_7 [i_3 - 1]))) & ((((!(arr_12 [1] [i_2 + 2] [i_3 - 1] [i_3 - 1] [i_4 + 2])))))));
                        var_20 = (min(var_20, (((!((max((arr_6 [i_2 + 2] [i_2 + 3]), (arr_6 [i_2 + 1] [i_2 + 1])))))))));
                        var_21 = (((arr_0 [i_1]) + ((~((var_5 ? 4669771196663878446 : var_2))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_22 = (-110 & 11);
        var_23 = var_5;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = (max((arr_7 [i_6]), ((max((max(var_2, 4336898211045985082)), -var_5)))));
        var_25 = (min(var_25, ((min(11355324493875736635, (((!((!(arr_12 [8] [i_6] [i_6] [i_6] [i_6])))))))))));
        var_26 &= (max((((arr_16 [i_6]) <= var_2)), ((var_10 == (arr_16 [i_6])))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    var_27 *= var_0;
                    var_28 = (arr_15 [14] [i_7]);
                    var_29 = (max(var_29, ((((!(arr_12 [6] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 1])))))));
                    var_30 = (max((((var_7 ? (arr_26 [i_7] [i_9] [i_9 + 1] [i_9 - 1]) : (arr_26 [i_7] [i_7] [i_9 - 2] [i_9 - 1])))), (min((arr_1 [i_8]), var_3))));
                }
            }
        }
    }
    #pragma endscop
}
