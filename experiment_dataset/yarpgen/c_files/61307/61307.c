/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (min(((-((var_10 ? 0 : 722112379)))), ((min(var_0, 10916251601480570422)))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = 14488743042033000545;
                        var_16 = ((!(arr_9 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 4])));

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_17 = (!var_1);
                            var_18 = var_3;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_19 *= var_0;
                            arr_18 [i_5] = ((~(arr_10 [i_0] [14] [i_2] [14] [i_5])));
                        }
                        var_20 = (~var_0);
                        var_21 = var_12;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_22 = ((max(20704, 42538)));
                        arr_21 [i_6] = ((~(min((((var_4 || (arr_19 [10] [i_1] [i_1] [9] [10] [i_6])))), var_11))));
                        arr_22 [i_0] [i_1] [i_2] [i_6] = (max((min(((max(var_12, var_8))), var_0)), (((!(arr_10 [i_6] [i_2] [14] [i_1] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] = (~3985487735);
                        var_23 = (arr_19 [i_0] [i_1] [0] [i_7] [i_2] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_24 = (~17896456474746875316);
                        arr_30 [6] [9] = var_4;
                        var_25 = (max(var_25, var_6));
                    }
                    arr_31 [16] [i_1] [i_1] = 92;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_26 = ((15 ? (min((arr_29 [i_0 - 3] [i_1] [7] [i_0 - 2] [i_10 - 2] [i_1]), -101)) : (arr_11 [i_0 + 1] [i_0 + 1] [9])));
                                arr_38 [i_1] [i_1] [i_2] [i_9] [i_10 - 3] = ((((min(var_5, 7))) ? (652141426 % 17394) : (arr_14 [i_0 + 1] [i_1] [i_2] [14] [i_1] [i_0 + 1])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            var_27 = (~var_8);
            var_28 = max(((((!var_10) ? 1606 : (!var_4)))), -var_4);
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_29 = (max((!6014481560631926094), -var_12));
                            arr_50 [i_0] [i_11] [i_0 + 1] = (((min((arr_34 [i_11 + 1] [i_11] [i_12] [i_0 - 4] [i_12 - 1]), (arr_34 [i_11 + 1] [i_11] [i_11 + 1] [i_0 - 4] [i_12 + 1])))) + 1);
                        }
                    }
                }
            }
        }
        var_30 = (((((var_3 | (((arr_48 [i_0] [i_0] [i_0] [i_0 - 4]) ? var_7 : var_11))))) || ((min(var_5, (arr_34 [i_0] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0 + 1]))))));
        var_31 = (~1);
    }
    for (int i_15 = 4; i_15 < 17;i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] = ((((max((arr_3 [i_15 - 1] [i_15 - 3] [i_15 - 3]), (min(var_7, (arr_14 [i_15] [0] [i_15] [i_15 - 2] [0] [i_15])))))) ? var_4 : var_3));
        arr_55 [i_15] [i_15] = (!var_12);
    }
    for (int i_16 = 4; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_32 *= (((!var_8) && ((min((arr_42 [i_16 - 4] [i_16 + 1]), var_7)))));
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                {
                    var_33 = var_4;
                    arr_65 [i_18] [i_17 + 2] [5] = (((((min((arr_19 [i_16] [i_16] [i_18 - 1] [i_16] [16] [i_17]), var_12))) ? (min(var_9, var_0)) : var_7)));
                }
            }
        }
        var_34 = (arr_15 [0] [8] [i_16 - 1] [i_16] [i_16] [8] [i_16]);
    }
    #pragma endscop
}
