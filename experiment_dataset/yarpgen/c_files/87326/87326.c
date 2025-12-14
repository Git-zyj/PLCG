/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 *= var_8;
    var_22 = 59125;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_23 = (max(((-(arr_2 [i_0]))), (arr_2 [i_0])));
        var_24 = -1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] &= ((((arr_5 [i_0]) ? var_4 : (arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] = var_5;
                                var_25 *= (arr_15 [i_1] [16]);
                                arr_17 [i_0] [i_1] [i_4] [i_0] [10] = var_12;
                                arr_18 [i_0] [1] [i_2 + 1] [i_3] [i_1] = (-(arr_9 [i_1] [i_1 + 1] [i_3] [i_1 + 1] [i_1] [i_4]));
                                arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] = arr_11 [i_0] [i_0] [i_1];
                            }
                        }
                    }
                    var_26 -= ((-(arr_4 [i_0] [i_0])));
                    var_27 = (max(var_27, (((-0 ? ((var_19 ? 209 : var_1)) : (((arr_15 [i_1 + 1] [i_1 + 1]) ? (arr_15 [i_1 + 1] [i_1 - 1]) : (min(-990200525, 6410)))))))));
                    arr_20 [i_1] [i_0] &= min((max(6410, var_18)), (((var_5 ? 0 : var_1))));
                }
            }
        }
        var_28 = (min(var_28, ((min((arr_3 [i_0]), 17423044038000302178)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_29 = ((-(arr_30 [i_0] [i_5] [i_5] [i_7] [i_8])));
                                var_30 = ((-15 ? 46 : 1458840209));
                                var_31 = (min(var_31, ((((arr_13 [i_0] [i_0] [i_0] [i_5] [i_7] [i_8]) ? var_5 : 6410)))));
                            }
                        }
                    }
                    var_32 ^= (min(((max(1209948539, 0))), (min(((min((arr_27 [9]), var_1))), ((-452212634 ? (arr_25 [i_0] [i_5]) : var_10))))));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        arr_34 [i_9] &= ((((-(arr_29 [i_9 - 2])))) ? (((arr_31 [i_9 + 1]) ? var_12 : 14790937339223306494)) : (((1209948539 ? 1402525507 : 72))));
        var_33 = (min(((((arr_5 [i_9]) ? (arr_5 [i_9]) : (arr_5 [i_9])))), ((max((arr_32 [i_9]), (arr_4 [i_9] [i_9]))))));
        arr_35 [i_9] = ((min(var_4, (min(var_18, var_2)))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_34 |= (arr_5 [i_10]);
            arr_38 [i_9] = (arr_36 [i_9 + 1]);
            var_35 = (arr_27 [i_9 - 2]);
            var_36 = (((arr_5 [i_10]) ? (arr_5 [i_10]) : var_14));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_41 [i_9] [i_9] [i_11] = 59125;

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        arr_50 [i_9] [i_11] [9] [i_13] = (max(0, (arr_26 [i_9 - 1])));
                        var_37 = (((arr_31 [i_12]) ? var_9 : (arr_27 [i_9])));
                        arr_51 [i_14] [i_11] [i_12] [i_11] [i_11] [i_11] [i_9] = (arr_12 [i_13] [i_13] [i_11] [i_13]);
                        arr_52 [i_9] [i_11] = (min((min(42, 6611805365360015430)), (arr_2 [i_9])));
                        var_38 = -1209948531;
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_39 = (max(var_39, ((min(var_18, 71)))));
                        var_40 = (min(var_40, (arr_9 [i_9] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9] [i_9 + 1])));
                    }
                    var_41 = (min((min((arr_1 [i_9 - 2]), var_15)), (min((arr_1 [i_9 - 2]), -1604260775))));
                }
                var_42 = var_17;
            }
        }
        arr_55 [i_9] [i_9] = var_12;
    }
    #pragma endscop
}
