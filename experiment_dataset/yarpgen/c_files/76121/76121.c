/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_13, (max((min((arr_0 [i_0] [4]), var_12)), ((max((-2147483647 - 1), 0)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (min(var_15, (((!(arr_0 [i_1] [i_0]))))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_1] |= (max((((max(var_0, var_6)) << (((max((arr_8 [i_0] [i_0]), (arr_7 [9] [0] [i_2] [0]))) - 2059873915846750165)))), (max((arr_8 [i_0] [1]), ((((arr_8 [i_2] [i_0]) ? var_8 : var_2)))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_2] = (arr_14 [16] [1] [12] [i_4] [i_4] [i_0] [i_3]);
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (1 * 53091);
                        }
                    }
                }
            }
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                arr_21 [i_0] = (min((max((min(var_9, var_5)), (arr_4 [i_5 + 2] [i_1]))), (arr_12 [i_0])));
                var_16 = (((((min((arr_14 [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1]), (arr_14 [i_5] [i_5 - 2] [7] [i_5 + 2] [4] [i_5] [i_5 - 2]))))) / (8094496581235354221 - 53114)));
                arr_22 [i_5] [i_0] [i_0] = min(((var_6 ? var_0 : (arr_5 [i_5 + 2] [i_5 + 2]))), ((max((arr_5 [i_5 - 1] [i_5]), (arr_10 [i_0] [i_5 - 2] [i_5 - 1])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_17 = (((((((!(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]))))) == (arr_11 [i_0] [i_1] [i_5 + 2] [i_5 - 2]))) ? ((var_14 ? (max(var_10, (arr_7 [i_7] [i_6] [i_5] [i_0]))) : (max(var_0, var_2)))) : ((max(1197877333, 50))));
                            arr_28 [i_7] [i_5] [i_7] [i_7] [16] [i_0] = (max((-2147483647 - 1), (((12445 * -10089) * (max(4424921674554883748, 53114))))));
                        }
                    }
                }
            }
            var_18 = (min(var_18, (((957878360 ? ((((((arr_12 [i_0]) ? (arr_4 [i_0] [i_1]) : var_2))) ? (arr_20 [i_1]) : ((var_7 ? var_12 : (arr_27 [i_0]))))) : (((var_4 * (arr_4 [i_0] [i_0])))))))));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_31 [i_8] [i_8] = ((((max((arr_2 [i_0]), (arr_15 [i_0] [i_8 + 1])))) ? (((arr_15 [i_0] [i_0]) ? var_1 : (arr_2 [i_8]))) : (arr_15 [i_0] [i_8 - 1])));
            var_19 = (min(var_19, (((((((arr_8 [i_8 - 1] [2]) ? (arr_8 [i_8 + 1] [i_8]) : var_10))) ? var_10 : (arr_4 [i_8 - 1] [i_8]))))));
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_38 [i_9] [i_8] [i_8] &= var_14;
                            arr_39 [i_8] [5] = ((!((max((var_12 != var_8), (arr_1 [i_8 + 1] [6]))))));
                            arr_40 [i_8] [11] [0] [1] [i_11] = (max((max((arr_33 [2] [i_8 + 1] [i_9 - 2] [0]), (arr_33 [i_0] [i_8 + 1] [i_9 - 1] [i_8 + 1]))), (arr_37 [16])));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_51 [i_12] = ((((((arr_10 [i_12] [i_13] [i_15]) ? var_0 : (arr_35 [i_15] [i_0])))) || ((!(arr_24 [i_15 - 2])))));
                            arr_52 [i_0] [i_0] [i_12] [i_0] [i_0] [i_0] = ((((((((arr_46 [i_12]) && var_6)) && (arr_25 [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 - 2] [i_15 + 1] [i_15])))) != (arr_48 [i_12] [i_12] [i_13] [i_13] [i_15 + 1])));
                            arr_53 [i_0] [i_0] [i_12] = (min(((max(var_7, 12445))), var_8));
                            var_20 = (-((((min(var_1, var_11))) ? -var_6 : (arr_30 [i_12] [i_14] [i_14]))));
                        }
                    }
                }
            }
            arr_54 [i_12] [i_12] = (((((arr_18 [i_12] [i_12]) < (arr_18 [i_0] [i_0]))) ? ((min((arr_18 [i_12] [i_0]), (arr_18 [i_0] [i_0])))) : (-9223372036854775807 - 1)));
            arr_55 [i_12] [i_12] = ((+(((arr_24 [i_12]) * (arr_24 [i_12])))));
            var_21 = ((-(max(12445, 33554428))));
            var_22 = (max(((max((arr_43 [i_0] [i_0] [6]), (arr_50 [i_0] [i_0] [i_0])))), (min((arr_35 [i_0] [i_0]), (~17)))));
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            arr_58 [i_16] [9] = ((((min((arr_32 [i_0] [i_0] [i_0] [i_16]), (arr_32 [i_16] [i_0] [i_16] [i_0])))) >= (arr_10 [i_0] [i_16] [i_16])));
            arr_59 [2] [i_16] [i_16] = ((max((arr_12 [i_16]), (arr_12 [i_0]))));
            var_23 += (min(var_3, (((((min((arr_12 [i_16]), (arr_4 [i_16] [i_16])))) ? -var_14 : var_4)))));
            var_24 = (max((arr_41 [i_16] [i_0] [i_0]), var_11));
        }
    }
    var_25 = (min(var_0, var_8));
    var_26 = (((var_14 * var_0) ? var_2 : var_2));
    var_27 = (((var_2 + var_8) | var_4));
    var_28 = (max(var_28, ((((((var_9 - ((min(var_14, var_1)))))) ? (max(-var_3, (max(-8257284760257041380, 0)))) : (((var_11 - (var_11 + var_14)))))))));
    #pragma endscop
}
