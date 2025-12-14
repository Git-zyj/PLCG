/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [4] [i_0] [i_3 + 4] [i_1] [i_3] = (1 <= 282093226);
                        arr_10 [i_0] = ((!(!var_10)));
                        arr_11 [i_0] [i_1] [0] = (((arr_0 [i_1 + 4] [i_1 + 3]) ? -8264734364742915530 : var_3));
                    }
                }
            }
        }
        arr_12 [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_5] [i_0] [i_0] = (((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_8 [i_0] [i_4] [i_4] [5] [i_4]) : 8264734364742915529));
                    arr_18 [i_0] = (arr_3 [i_5] [i_4]);
                    arr_19 [i_0] [i_0] [i_0] [1] |= -8264734364742915529;
                }
            }
        }
        arr_20 [i_0] = var_10;
        arr_21 [i_0] = (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_7 [i_0] [2] [6] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [1] = ((-901695753 ? -8264734364742915529 : 0));
        arr_27 [i_6] [9] = var_0;
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_37 [1] [i_7] [i_8] [i_9] [i_10] = ((var_4 ? 3698268634 : (arr_28 [i_6] [i_6] [i_7 - 1])));
                            arr_38 [i_10] [i_9] [i_8] [9] [i_6] = var_2;
                            arr_39 [0] [0] [i_7 + 1] [i_8] [2] [1] = (~var_10);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_42 [i_7] [i_9] [i_6] [i_9] [i_11] = (((-16 ? (arr_33 [i_9] [i_11]) : 243563151763112506)));
                            arr_43 [i_11] = (((arr_15 [i_6] [i_7 + 1] [i_7 - 1]) ? (arr_15 [i_9] [i_7 - 2] [i_8]) : (arr_15 [i_6] [i_7 - 2] [6])));
                        }
                        for (int i_12 = 1; i_12 < 7;i_12 += 1)
                        {
                            arr_46 [i_6] [i_7] [1] [7] [i_7] = var_9;
                            arr_47 [i_7] = 0;
                        }

                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            arr_50 [0] [i_13 + 1] [i_13 + 1] [i_13] = 7932;
                            arr_51 [3] [i_8] [i_8] [i_8] [i_8] [i_8] [2] = (4194240 ? (arr_36 [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7]) : (arr_7 [2] [0] [i_8] [i_9] [i_9] [i_6]));
                            arr_52 [i_9] [i_8] [i_7] = (((var_5 + 2147483647) >> (((arr_23 [i_13 + 2] [i_7 - 1]) - 1613555860))));
                            arr_53 [i_8] [i_6] [i_8] [i_8] [i_13 + 2] = ((var_10 ? (arr_28 [i_6] [i_7 - 2] [i_13 + 1]) : (arr_8 [i_7 - 1] [i_7 - 2] [6] [i_7 - 1] [i_13 + 2])));
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        arr_57 [i_14] = (3612498017 ? 64117 : -32755);
        arr_58 [i_14] = var_10;
    }
    var_11 = (min(1418, ((var_10 >> (var_4 + 3884)))));
    var_12 |= (min(32755, -8264734364742915530));
    var_13 = var_0;
    var_14 = var_6;
    #pragma endscop
}
