/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((1 ? -82 : 14924)))) != var_13)))));
        arr_2 [i_0] |= (((((-(arr_1 [i_0])))) * var_10));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (min(var_17, (((arr_4 [i_0] [i_1] [i_1]) ? var_6 : ((((min(57546, 1)))))))));
            var_18 = (max(var_18, (((var_7 | ((max((arr_0 [i_0]), (arr_1 [i_1])))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [8] [i_2] [i_2] = ((((((min((arr_0 [i_1]), var_0))) ? ((1 ? 245 : -82)) : var_8)) << (var_9 - 86)));
                        var_19 = (((((-82 ? 496 : 3))) ? 1 : 7989));
                        var_20 &= (arr_6 [i_0]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_5] = ((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_16 [i_0] [1] [10] [i_4] [8]) && (arr_15 [i_0] [i_4] [i_5])))) : (((arr_18 [i_4]) ? (arr_18 [i_4]) : (arr_14 [i_0] [i_1] [i_5]))))) < ((max((arr_15 [i_0] [i_1] [i_5]), (min((arr_6 [1]), (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_20 [i_4] = 6;
                        var_21 = ((((arr_8 [i_0] [i_1] [i_5]) * (arr_3 [i_4]))));
                    }
                }
            }

            for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_22 = (((((var_7 ? (arr_22 [i_6 - 1] [i_1] [0]) : (arr_7 [11] [i_1] [i_6 + 1])))) ? ((min((arr_15 [i_6] [i_6 - 1] [i_6]), (arr_15 [i_6] [i_6 + 1] [i_1])))) : var_15));
                var_23 = (max(var_23, (arr_8 [i_0] [i_0] [i_6])));
                var_24 = ((var_6 ? (23524 / 1) : (((arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1]) ? (arr_14 [i_6 - 2] [i_6 - 2] [i_6 + 1]) : var_6))));
            }
            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_25 &= ((((((arr_16 [i_7] [i_7] [i_7 + 1] [1] [i_1]) ? (arr_9 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7]) : var_15))) ? (arr_9 [i_0] [i_1] [i_7 - 1] [i_0] [i_7]) : ((min((max(var_13, var_7)), ((((arr_0 [i_7]) || 186))))))));
                arr_26 [i_0] [i_0] [i_7] |= (((((1 ? 1 : 1))) ? (((((((arr_22 [i_0] [10] [i_7]) ? var_9 : var_13))) ? ((max(var_11, var_13))) : ((-26377 ? 1 : 45284))))) : var_6));
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_26 &= (arr_14 [i_0] [i_1] [i_8]);
                arr_29 [i_0] = (arr_21 [i_0] [2]);
                arr_30 [i_0] [i_8] = (((arr_23 [i_0] [i_1]) < ((min((arr_12 [i_1] [i_8 + 1] [i_1] [i_8]), (arr_12 [1] [i_8 + 1] [i_8 - 2] [i_8 - 2]))))));
                var_27 = (min(var_27, ((min(var_10, (arr_16 [i_8 - 1] [i_8 - 1] [i_8 - 1] [5] [i_8]))))));
                var_28 = ((((((((arr_6 [i_0]) / var_12)) == ((min(var_14, (arr_12 [i_0] [1] [i_8 - 2] [i_8 - 2]))))))) / (34 + 1)));
            }
        }
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_29 = (min(var_29, (198 * 19)));
        arr_34 [i_9] = (min(var_10, (((var_10 < var_14) ? (arr_31 [4]) : (min((arr_33 [i_9] [i_9]), (arr_32 [1] [i_9])))))));
        arr_35 [i_9] [i_9] = ((0 ? (1 >= 0) : 1));
        var_30 = (max(var_30, (((((var_11 ? ((var_8 ? var_9 : (arr_33 [i_9 + 2] [i_9 + 2]))) : ((25 ? 1 : -32625))))) ? ((var_3 ? (arr_31 [i_9]) : var_1)) : (arr_32 [i_9] [i_9])))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_38 [1] &= ((1 ? 1 : 16384));
        var_31 = (min(var_31, var_0));
    }
    var_32 = ((var_2 ? var_5 : var_13));
    #pragma endscop
}
