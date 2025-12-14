/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_0 [9] [9]) && 9223372036854775807)) ? ((var_11 ? (arr_1 [i_0]) : var_14)) : ((~(arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((-1696093949 ? -4 : var_11));
        var_18 = 4290842036326048784;
        var_19 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (14155902037383502804 ? (((var_7 || (arr_1 [i_2])))) : (arr_0 [i_1] [i_2]));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((!(arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 1]))))));
                            var_22 = ((((1 ^ (arr_15 [i_0] [i_1] [i_2] [14] [i_0] [5] [i_3]))) | var_6));
                            var_23 = (min(var_23, (arr_10 [i_1 - 2] [i_1 - 1])));
                            arr_16 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] = (((arr_11 [i_1 - 2]) ? (arr_14 [i_0] [i_0] [i_0] [i_1 + 2] [i_2] [i_1]) : ((-(arr_0 [i_0] [i_0])))));
                            arr_17 [i_4] [i_2] [i_2] [i_2] [18] [i_0] = (((arr_7 [i_1 + 2] [i_1 + 2] [i_3]) ? (arr_7 [i_1 + 2] [i_1 + 2] [i_4]) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_24 ^= ((!(((var_1 ? (arr_4 [i_2] [i_2] [i_2]) : 4194176)))));
                            arr_20 [i_0] [i_0] [i_0] [9] [i_5] [i_0] = (31866 & -1696093949);
                            arr_21 [i_0] [i_5] = ((15890 ? (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1]) : ((1 ? (arr_12 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] [6]) : var_9))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_25 += ((((((arr_11 [i_6]) ? (arr_11 [i_6]) : (arr_11 [i_6])))) ? 1474162519902159641 : ((((arr_11 [i_6]) >> (((arr_11 [i_6]) - 57957)))))));
        var_26 = (((((((max(-4, 4294967292))) ? 0 : var_8))) - (((arr_8 [i_6] [i_6]) / (arr_19 [i_6] [12] [i_6] [i_6] [i_6] [i_6])))));
        var_27 = ((-1771886192 & ((max((arr_11 [i_6]), (arr_11 [i_6]))))));
    }
    var_28 = (((4 ? 18446744073705357437 : -23070)));
    #pragma endscop
}
