/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-3479, (max(-73, -6471947519781832903))));
    var_14 = ((var_6 ? ((var_2 ? var_4 : var_9)) : var_0));
    var_15 = var_2;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (max((arr_0 [i_0 + 1]), (((!-3470) ? -var_11 : (arr_0 [2])))));
        arr_3 [i_0] = var_11;
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [10] &= ((-3483 ? var_10 : (~13456)));
        var_17 = (arr_6 [i_1] [i_1 + 3]);

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [6] |= (arr_11 [i_4 + 3] [i_4] [i_4] [i_4]);
                        var_18 = -22;
                        var_19 = (min(var_19, 6471947519781832903));
                        var_20 &= arr_5 [i_3 - 1];
                        var_21 &= ((!(arr_10 [14] [i_2] [i_3] [i_4])));
                    }
                }
            }
            var_22 = (~-6471947519781832903);

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_23 = (max(153, 112));
                            var_24 = (min((((!(arr_22 [i_6 + 3])))), 3258690080));
                        }
                    }
                }

                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] [i_5 + 1] = (arr_6 [i_1] [i_2]);
                    arr_27 [i_8] [i_1] [i_5] [i_1] [12] = ((!((max(-3480, -22)))));
                    var_25 = (min(var_25, (((((!(arr_25 [i_1 + 3] [i_1] [i_1] [14] [i_1]))) ? ((((~(arr_5 [i_2]))))) : (arr_8 [2] [i_8 - 1]))))));
                    arr_28 [i_1] = (~-991611449);
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = ((arr_18 [i_1] [i_1] [i_1] [i_1]) ? 3258690067 : ((var_6 ? (arr_23 [i_9] [i_1 - 1]) : 1036277202)));

            /* vectorizable */
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                var_27 = -var_4;
                arr_33 [i_1] [i_10 + 2] = ((-(arr_19 [i_9] [i_1] [i_1] [i_1] [i_10] [i_10 + 2])));
                var_28 = ((!(!var_0)));
                var_29 = (min(var_29, (arr_21 [i_10] [i_10] [i_10 + 3] [i_1 + 3])));
                var_30 = (max(var_30, (arr_25 [i_1] [i_9] [i_1] [1] [i_10])));
            }
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_31 = (arr_41 [13] [i_11] [i_12] [i_13]);
                            var_32 = (min(124, ((((min(135, var_12))) ? ((~(arr_42 [i_1 + 1] [i_9] [i_9] [i_12] [i_13]))) : (arr_13 [i_1] [16] [16] [i_1] [i_13 + 1])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_48 [i_1 - 1] [i_1] [i_14] = 1118237509;
                        var_33 = (max(var_33, (((95 ? ((min((arr_19 [2] [2] [i_14 + 2] [i_1] [2] [i_1]), -17038))) : var_8)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                {
                    arr_54 [1] [i_1] [i_17] = (((arr_41 [2] [i_16] [i_16 + 2] [i_16 + 2]) ? (~-116) : (~0)));
                    var_34 = (max(var_34, var_10));
                }
            }
        }
    }
    #pragma endscop
}
