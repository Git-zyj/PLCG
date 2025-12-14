/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (max((min(1287866284, (-2147483647 - 1))), var_1))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0 + 3] [i_0 + 3] = (min(((var_4 * (min((arr_1 [1]), (arr_2 [i_0]))))), (((!((max((arr_2 [0]), var_8))))))));
        var_12 = (((~0) / (min(-125, (699607562 + 699607558)))));
    }
    var_13 = var_5;

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = (arr_0 [i_1 - 2]);
            arr_10 [1] [1] [i_1 - 2] = (((arr_2 [i_1 - 2]) ? (arr_2 [i_2]) : (arr_5 [i_1 - 1])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_15 = max(((max((arr_9 [i_3]), (arr_6 [i_1] [i_3])))), ((((arr_7 [i_1]) * var_7))));
            var_16 -= -var_5;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_17 = var_10;
                            arr_25 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [5] = ((~(~var_5)));
                        }
                        arr_26 [i_6] [i_6] [i_5] [i_4] [i_1] [i_1] = (arr_19 [i_1] [i_1 - 2] [i_1]);
                        arr_27 [i_1] [i_1] [i_4] [7] [i_5] [1] = ((2147483647 ? 40427 : var_8));
                    }
                }
            }
            var_18 = (((699607558 - var_1) >> (40775 - 40757)));
            arr_28 [i_1] = (((((arr_6 [i_4] [i_1]) ^ var_6)) ^ (arr_19 [i_1 - 1] [i_1 - 1] [i_4])));
            arr_29 [i_4] = (((arr_14 [i_1 - 1] [i_1 - 1] [i_4]) * var_3));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 7;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 9;i_10 += 1)
                {
                    {
                        arr_41 [i_1] [i_8] [i_8] [i_8] [i_8] = ((-(((!((((arr_38 [i_8] [i_8]) * (arr_11 [i_1] [i_1])))))))));
                        arr_42 [i_1 + 1] [i_1 + 1] [1] [1] = (min(1, ((!(((var_3 ? var_2 : (arr_22 [i_1]))))))));
                        var_19 = ((var_5 ? ((~((max(var_3, 1))))) : 3337497205));
                    }
                }
            }
        }

        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 6;i_13 += 1)
                {
                    {
                        var_20 = ((~(381926650 || var_1)));
                        var_21 = (min((max((arr_38 [i_11 - 1] [i_1 - 1]), (arr_38 [i_11 - 1] [i_1 - 1]))), var_5));
                        var_22 += ((arr_7 [1]) < ((((var_9 || 1) / var_9))));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_53 [i_12] = -115;
                            arr_54 [i_12] [i_11] = min((min((arr_5 [i_14]), var_0)), (((!((((arr_15 [i_1 - 1]) * var_10)))))));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_57 [i_15] [i_11 + 1] [i_13] [1] [0] [i_11 + 1] [7] = (((min(var_2, ((-(arr_44 [i_11] [i_12]))))) / (arr_47 [i_13 - 1] [i_11 - 1] [i_1 + 1])));
                            arr_58 [i_15] [1] [i_15] [0] [i_12] = (((!var_4) / (min((arr_6 [i_15] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1])))));
                            arr_59 [i_1] [i_11] [i_11] [i_12] [2] [i_13] [i_15] = (min(((~(((arr_49 [i_12] [i_12] [i_12] [i_1]) ? var_7 : var_1)))), (arr_0 [i_11])));
                        }
                    }
                }
            }
            var_23 = 0;
        }
    }
    var_24 = var_10;
    #pragma endscop
}
