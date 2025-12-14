/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_16 [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = 180;
                                arr_17 [i_4] [i_1] [14] [i_0] [14] = var_14;
                                arr_18 [i_4] [1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_0] &= ((((min(var_8, var_8))) ? var_13 : (arr_0 [i_1] [i_2 + 1])));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_21 [i_0] = (max((min((!var_5), var_6)), ((min((max(var_11, var_15)), (max(var_1, var_0)))))));
                                var_16 = (max(var_16, ((min((!var_9), -1538677583)))));
                                var_17 = (max(var_2, ((((((var_7 << (((((arr_19 [i_1] [i_2 - 1] [i_3] [i_5]) + 3418)) - 12))))) <= ((var_1 ? var_15 : var_1)))))));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_18 = (var_5 ? ((((((-24178 ? var_7 : var_7))) ? var_13 : var_0))) : ((679 ? -8657297264660361513 : 1)));
                                var_19 = (min((((arr_14 [i_0] [i_1 - 2] [i_1] [i_1] [i_0]) ? var_14 : 15197827592974840137)), var_4));
                                var_20 ^= (((max(var_13, (12537663329762881714 * 1))) & ((max((min(-1804488283, var_5)), 1)))));
                                var_21 += ((-((var_8 ? var_2 : var_5))));
                                var_22 = (max(var_22, ((((((var_0 ? (arr_8 [i_1]) : (arr_8 [i_6])))) ? (((min(((max((arr_14 [i_2] [i_1] [i_2] [1] [i_6]), (arr_1 [16] [i_1])))), (arr_10 [i_6] [14] [i_0] [i_6] [i_1 - 1]))))) : (min(((max(91, 24178))), (min(7698688571805548137, var_12)))))))));
                            }

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_23 += (max((~240311385828154795), (((0 ? 1 : 0)))));
                                var_24 = ((~(((arr_2 [i_0]) ? (arr_24 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_2 + 1]) : var_4))));
                                var_25 = (min(var_25, ((((max(var_8, ((max(var_9, var_4))))))))));
                            }
                            var_26 = (min(var_26, 27502));
                            var_27 = (arr_4 [i_0]);
                        }
                    }
                }
                arr_29 [i_0] = (max(((max(var_9, (arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 2])))), (min(var_6, 0))));
            }
        }
    }

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_28 = var_8;

        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_29 -= (max(((~(arr_0 [i_10] [i_9 - 1]))), ((~(arr_0 [i_10] [i_9 + 1])))));
                        var_30 = (max(var_30, (((max(1, 91))))));
                        var_31 = ((+((min((arr_40 [i_10] [i_11 + 2] [i_12]), var_13)))));
                        var_32 = (min(var_32, ((min(var_3, var_0)))));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_43 [i_11] = (max(var_9, (min(var_5, (arr_32 [i_11 + 2] [i_10 - 1])))));
                        var_33 = (min(var_33, var_14));
                    }

                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        arr_48 [i_14] [i_9 + 1] [i_9 + 1] [i_9] = ((27474 ? 16700138408302922627 : 1));
                        var_34 = (min(var_34, var_5));
                        var_35 -= (min((max(((var_12 ? var_6 : var_0)), (!var_11))), var_5));
                        var_36 = (min(var_36, (arr_10 [i_8] [i_8] [i_11 + 2] [i_11 - 1] [i_11 + 2])));
                    }
                    arr_49 [i_8] [11] [2] [i_10] [i_10] |= (min((((arr_32 [i_9 - 3] [i_10 - 1]) ? var_3 : (arr_32 [i_9 + 1] [i_10 + 1]))), (arr_32 [i_9 - 2] [i_10 + 1])));
                    var_37 = (arr_1 [5] [i_9 - 1]);
                }
                var_38 = 849209990;
            }
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                var_39 = (~((255 ? (arr_47 [i_9] [16] [i_9 + 1] [i_9 - 1] [i_9 - 3]) : ((var_4 ? var_2 : var_2)))));
                arr_53 [15] [i_8] [i_9] [i_15] = (min(var_0, (min((min(26676, 12)), var_9))));
            }
            for (int i_16 = 4; i_16 < 16;i_16 += 1)
            {
                arr_56 [i_16] [11] [i_16] = (((((((max((arr_3 [i_9]), var_6))) ? (min(var_11, var_11)) : (((var_0 ? var_9 : (arr_4 [i_9]))))))) ? (arr_44 [i_8] [i_9] [i_16 + 1]) : (((var_9 ? (!5262) : var_5)))));
                var_40 -= (min(var_1, var_8));
                arr_57 [i_16] [i_16] [i_8] = (((max(var_12, -var_9)) | (min(((var_4 ? (arr_9 [i_8] [i_16] [10] [i_9 + 1] [i_16 - 2]) : var_15)), var_8))));
            }
            arr_58 [1] [i_9] = ((~((((min((arr_52 [i_9] [i_9 - 1] [i_9 - 1]), 27))) ? var_6 : (arr_1 [i_8] [i_9 - 2])))));
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_41 = (max(var_41, (((arr_12 [i_8] [i_17] [i_8] [i_8] [i_8] [i_17]) != (((max(12537663329762881695, 1)) | (arr_45 [i_17] [i_8] [i_17])))))));
            var_42 = ((((((arr_33 [i_8]) ? var_13 : var_13))) ? var_6 : var_10));
        }
        for (int i_18 = 1; i_18 < 14;i_18 += 1)
        {
            var_43 = (min(var_43, ((((arr_35 [i_8] [i_8] [3] [i_8]) ? ((1 ? var_9 : -2147483627)) : -27503)))));
            var_44 = 32755;
        }
        var_45 = var_6;
    }
    #pragma endscop
}
