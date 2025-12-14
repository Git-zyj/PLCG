/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= (min(var_1, ((var_6 ? (arr_3 [i_1 + 1]) : var_1))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 9;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_3] [i_0] = (arr_11 [i_3] [i_3] [0] [i_3 + 3] [i_3 + 1] [i_3 + 2]);
                                var_13 = ((var_6 ? (9566 - 229) : ((var_0 ^ (arr_1 [1])))));
                            }
                            arr_13 [i_0] [i_3] [i_2] [i_3] [i_1] = (min((max((min((arr_8 [i_0] [i_0] [4] [i_3] [i_0] [0]), var_8)), ((max((arr_11 [i_0] [i_1] [9] [i_3] [i_0] [i_1]), (arr_2 [i_2])))))), (!1374773494)));
                            var_14 = 1374773494;
                            var_15 = (min((1374773494 / 12657544214991714367), ((max((arr_11 [i_0] [i_2 + 2] [i_1 + 1] [i_0] [3] [3]), (arr_11 [i_1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [9] [i_0]))))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1 + 1] = ((22416 > (arr_2 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_5] [1] [i_5] = (min((arr_2 [i_0]), (((arr_10 [i_0]) % (arr_5 [i_0] [i_0])))));
                            arr_20 [i_0] = (!2920193788);
                            var_16 = (min(var_16, (((((var_7 | (((min(var_12, (arr_0 [7]))))))) >= (((((min(var_8, -3783))) ? 60 : (arr_11 [i_0] [i_1 + 1] [i_5] [i_5] [i_5] [i_5])))))))));
                            var_17 = ((!(((arr_6 [i_1] [i_1 + 1] [i_1]) >= (arr_6 [i_1] [i_1 + 1] [i_1])))));
                            arr_21 [i_0] [i_0] [i_0] [i_6] = ((!(((var_11 ? (arr_15 [i_0] [i_1 + 1]) : 778399906)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_18 *= var_12;
                            arr_34 [i_7] [3] [i_8] [i_9] = (((arr_27 [i_7] [i_9 - 1]) ? ((max((arr_30 [i_7] [10] [9] [i_10]), (~65535)))) : (arr_29 [i_9])));
                            var_19 = ((-(min((arr_32 [i_7] [i_9]), var_12))));
                        }
                    }
                }
                arr_35 [i_7] [i_7] = 2920193810;
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
