/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+(((~7) ? var_5 : var_1))));
    var_14 = -30659;
    var_15 = (0 >= 1);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [6] = (((((arr_1 [i_0 - 1]) < ((min(var_12, (arr_1 [i_0 + 1])))))) ? var_0 : ((((max(39174, 177))) / 128))));
        arr_4 [14] |= (arr_1 [i_0]);
        arr_5 [1] &= (arr_2 [6]);
        arr_6 [10] = (min((arr_0 [i_0 + 1]), (8977597274618496683 > 1)));
        arr_7 [1] = var_7;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((!(((var_1 ^ (arr_17 [i_1]))))));
                            arr_22 [i_5 + 1] [i_4] [i_3] [i_2] [i_1] [i_1] [i_1] = 1;
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_3] = (arr_14 [i_3 + 1] [i_2 - 1] [i_2 + 2]);
                            arr_26 [i_3 + 1] = (arr_18 [i_1] [i_2 + 2] [i_2 + 2]);
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((10 ? (((arr_23 [i_3 + 1] [i_3] [i_3] [i_3] [i_3]) % 124)) : ((((arr_2 [i_1]) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_28 [i_7 - 2] [i_2] [i_3 + 1] [i_7 - 2] [i_7]))))));
                            arr_31 [i_1] = 39882;
                            arr_32 [i_1] [i_1] [i_3] [i_4] [i_7 - 3] = (((arr_29 [i_4] [i_4] [i_4] [i_4] [i_7 - 2]) == (!var_6)));
                            arr_33 [i_1] [i_2 + 1] [i_3 - 2] [i_2 + 1] [i_7 - 1] = (arr_18 [i_3 - 1] [i_1] [i_1]);
                            arr_34 [i_1] [i_1] [i_2] [i_1] [i_3 - 1] [i_4] [i_7] = 62;
                        }

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_19 [i_2 - 3] [i_3 - 1]) / (arr_19 [i_2 - 1] [i_3 - 1]));
                            arr_39 [i_8] [i_2 + 1] [i_3] [i_8] [i_8] = ((((arr_19 [i_1] [i_1]) >> (((arr_0 [i_1]) - 1201437536126500862)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_47 [i_1] [i_1] [i_9] [i_2 - 1] [i_3 - 1] [i_9] [i_10 + 2] = ((~((((min((arr_11 [i_1] [i_1] [i_1]), (arr_40 [i_9 - 3] [i_9] [i_9] [i_1])))) ? ((min(1, var_5))) : ((~(arr_15 [i_10 + 2])))))));
                                arr_48 [i_1] [i_9] [i_9] [i_9] [i_9] [i_10 - 2] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
