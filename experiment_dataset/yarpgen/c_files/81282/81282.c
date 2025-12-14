/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 -= max((!var_8), var_16);
                        var_18 = (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1]);
                        arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1] [i_0] = 1;
                        arr_13 [i_0] [i_1] [i_2] [14] [i_2] |= (((!(arr_11 [i_3 + 1]))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [i_4] = (min((((arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_7 [i_0 + 1] [i_0 - 1] [i_4]) : (arr_5 [i_0 - 1]))), ((min((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_4]), -114)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_21 [17] [i_4] [i_5] [i_5] = 2941501765;
                        arr_22 [i_5] [i_4] [i_4] [i_5] [i_4] [i_6] = (arr_2 [i_5] [i_6]);
                    }
                }
            }
            arr_23 [i_4] = ((var_4 ? (arr_2 [i_0 + 1] [i_0]) : (arr_0 [i_0 - 1] [i_0 + 1])));
            arr_24 [i_0] [i_0] = -10657478524319858476;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_19 = (arr_1 [i_0]);
                            var_20 = ((var_9 ? (min((((~(arr_27 [i_10] [1])))), (arr_33 [i_10] [8] [i_10] [i_10] [i_10] [i_10]))) : (arr_7 [i_0 + 1] [i_0 + 1] [i_7])));
                            var_21 = (((arr_28 [i_7]) ? ((~(arr_20 [i_10 - 2] [i_7] [i_8] [i_0 - 1]))) : (arr_6 [i_0 + 1])));
                        }
                    }
                }
            }
            var_22 = (min(var_22, 4736425585866938776));
        }
    }
    var_23 = (max(var_23, (~2834983649)));
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    var_24 = (min(var_24, ((min(((((((arr_39 [15] [15] [15]) ? (arr_35 [i_12] [i_13]) : 3536384760263041937))) ? (!var_14) : (arr_34 [i_11] [i_11 + 2]))), ((-(min(var_7, var_6)))))))));
                    arr_42 [i_13] = ((((((!55302) ? (arr_37 [i_11 + 1] [i_11 + 1]) : (!var_14)))) ? var_1 : (arr_36 [12] [i_11 - 1] [i_11 - 1])));
                    var_25 = (min(var_25, ((((arr_40 [i_11 + 2] [i_12] [i_13]) ? (arr_40 [i_11] [i_11] [i_13]) : (arr_41 [i_11] [i_11 - 1] [i_11 - 1] [i_11]))))));
                    var_26 = 8960368076579566205;
                    arr_43 [i_13] [i_12] [10] = var_0;
                }
            }
        }
    }
    var_27 = ((var_1 ? var_13 : var_8));
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    var_28 -= (arr_46 [i_14 - 1] [i_15 + 3]);
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            {
                                arr_56 [i_14] [i_15 - 2] [i_18] [i_14 + 1] [6] = (((arr_44 [i_14 - 1] [i_14 + 1]) ? ((-(min((arr_55 [i_15] [i_14 + 1]), var_13)))) : ((((!(arr_55 [i_17] [i_17 - 2])))))));
                                var_29 ^= (arr_54 [i_14]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
