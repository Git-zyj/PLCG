/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((3236568337 ? var_5 : (max(var_1, -20))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_11 = (var_6 & var_6);
            var_12 = var_9;
        }
        arr_4 [2] [i_0] = (~((var_3 ? (arr_3 [i_0] [i_0] [3]) : 1788622574)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_11 [i_0] = 249;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_13 = (((2506344749 ? 1704973613 : 1788622547)));
                            var_14 = (arr_10 [i_4] [i_0] [i_3] [i_4]);
                            var_15 = ((~(arr_12 [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_16 = var_6;
                            var_17 = (((arr_12 [i_4]) | (arr_12 [i_6])));
                            arr_16 [i_0] [i_0] = (var_8 ? var_3 : (arr_2 [i_0] [i_0]));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    {
                        var_18 = var_1;
                        arr_28 [i_8] [4] |= -2506344713;
                        var_19 = (arr_5 [i_9] [i_9]);
                    }
                }
            }
        }
        var_20 = ((((!((((arr_6 [i_7] [i_7]) + var_4))))) ? var_5 : -var_1));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    {
                        var_21 = ((~((1788622547 ? (arr_31 [i_7] [i_12] [i_12] [i_12]) : (arr_31 [i_7] [9] [i_12] [i_12])))));
                        arr_38 [i_12] [i_7] [i_7] [i_7] = (((((((((arr_3 [4] [i_12] [i_12]) ? var_7 : var_3))) | (arr_24 [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1])))) ? (arr_25 [i_7] [i_11]) : (arr_27 [i_12] [i_11] [1])));
                    }
                }
            }
        }
    }

    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_42 [i_14] = var_9;
        var_22 |= (arr_40 [i_14]);
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        arr_46 [i_15] = var_6;
        var_23 = (1 < (arr_44 [i_15]));
        arr_47 [i_15] = (max(5013485294491068733, 2509067827));
        var_24 *= (min(((-var_3 ? var_1 : var_3)), ((((var_9 ? 1788622551 : var_4))))));
        arr_48 [i_15] = (min(23267, 1788622545));
    }
    for (int i_16 = 3; i_16 < 12;i_16 += 1)
    {
        arr_51 [8] [i_16] = var_0;
        arr_52 [i_16] = (!var_2);
        arr_53 [i_16] [i_16] = 1246290055;

        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_25 = ((~14452) > ((-(var_6 * var_0))));

            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_26 = ((min((arr_10 [i_16 + 3] [i_16 + 3] [i_16] [i_16]), ((max(var_9, var_4))))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        {
                            arr_66 [i_16] [i_16] [i_16] [i_19] [i_17] [i_18] = var_6;
                            arr_67 [i_16] = (min(((max((arr_41 [i_16 + 1]), (arr_61 [i_16 + 2] [i_17 - 1] [i_17 - 1] [i_19 + 1])))), (((arr_12 [i_17]) ? (max(var_2, var_8)) : ((((arr_54 [i_18] [i_16] [i_20]) ? (arr_40 [i_20]) : 5552)))))));
                            var_27 = (max(0, (arr_41 [i_16])));
                            var_28 = -var_3;
                        }
                    }
                }
                var_29 = (((max((arr_62 [i_16 + 3] [i_16 + 3] [i_16 + 2] [i_17 - 1] [12] [i_17 - 1]), (arr_62 [i_16] [i_16] [i_16 + 2] [i_16] [i_17] [i_17 - 1]))) + (((arr_62 [5] [1] [i_16 + 2] [1] [i_16 + 2] [i_17 - 1]) ? (arr_62 [i_16] [i_16] [i_16 + 2] [3] [i_16] [i_17 - 1]) : var_0))));
            }
            var_30 = ((((max(((var_2 ? var_7 : (arr_13 [i_17] [i_17] [i_17] [i_16 + 2] [i_16 + 2] [i_16 + 2]))), (arr_60 [i_16] [i_17 - 1] [2] [i_16])))) ? ((max(0, var_9))) : -18));
            var_31 = ((-((((arr_13 [i_16] [i_17] [i_17 - 1] [i_17] [i_17] [i_16 + 1]) > (arr_13 [i_16] [i_17] [i_17 - 1] [i_17] [i_16 - 2] [i_16 + 1]))))));
        }
    }
    #pragma endscop
}
