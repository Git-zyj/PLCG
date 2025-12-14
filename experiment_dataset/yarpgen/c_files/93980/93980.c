/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_1] [i_1] [i_0] = (!252);
                    arr_7 [i_2] [i_1 + 2] [i_0] = (((((3 ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? -var_1 : var_4));
                }
                for (int i_3 = 4; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    var_13 = (min((min((arr_4 [i_3 - 3] [i_3 - 2] [i_3 - 2] [i_1 + 1]), var_4)), ((min((arr_4 [i_3 + 2] [i_3 - 3] [i_3 - 4] [i_1 + 2]), var_2)))));
                    var_14 = (max(var_14, var_0));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        var_15 -= ((-var_0 ? var_0 : (arr_2 [i_5 - 2] [i_1 + 1])));
                        var_16 = (min(var_16, ((((arr_8 [i_5] [i_5 - 2] [i_5]) ? (arr_8 [i_5 + 2] [i_5 - 2] [i_5 - 2]) : (arr_8 [i_5] [i_5 + 1] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_17 -= (((arr_19 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6]) ? (arr_15 [i_6 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (arr_20 [i_0] [i_1])));
                            var_18 = var_12;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_19 = (max(var_19, ((~(arr_19 [i_6 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1])))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = (((arr_14 [i_0] [i_1 + 2] [i_4] [i_6]) ? (arr_14 [i_6 + 1] [i_4] [i_1 + 1] [i_0]) : (arr_14 [i_6 + 1] [i_4] [i_1 + 1] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_27 [i_0] [i_9] [i_4] = (((arr_22 [i_1 + 2] [i_6 + 1] [i_4] [i_6 + 1]) ? 31360 : 8589934591));
                            var_20 = (max(var_20, ((((((var_3 ? 245 : 245))) ? 25 : var_0)))));
                        }
                        var_21 = (max(var_21, ((((arr_22 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? (arr_22 [i_6 + 1] [i_6] [i_6] [i_6]) : var_0)))));
                        var_22 = 2147075437991313484;
                    }
                    var_23 *= ((var_4 ? (arr_20 [i_1 + 2] [i_1 - 1]) : var_8));
                    var_24 = (~-4);
                    var_25 = (max(var_25, (((var_3 > (arr_23 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 + 2]))))));
                }
                var_26 = (max((min(var_11, (arr_12 [1] [i_1] [i_1 + 2]))), (~12)));
                arr_28 [i_0] = ((((((arr_17 [i_1 + 1] [9] [i_1 + 2]) ? var_8 : (arr_26 [i_1] [2] [2] [i_0] [i_0])))) ? (((30 ? (max(2708600115265835093, -275221951)) : ((min(4294967295, var_4)))))) : (((((0 ? -9379 : -246359375))) ? (arr_15 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) : ((var_12 ? var_1 : var_2))))));
                var_27 = (arr_12 [i_1 - 1] [i_1 - 1] [0]);
            }
        }
    }
    var_28 = var_5;
    var_29 = (((((var_3 ? 11482842715886807571 : var_3))) && var_12));
    var_30 = (max(var_1, var_0));
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                var_31 = (arr_34 [i_10 - 3] [i_10 + 2]);
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_32 = (min(var_32, ((max(((var_8 ? 538524509 : (arr_29 [i_10 - 2]))), ((var_11 ? (arr_29 [i_10 - 1]) : 1)))))));
                                var_33 = ((((arr_34 [i_10 - 3] [i_10 - 1]) ? 32743 : (arr_37 [i_10] [i_10] [i_10 + 1] [i_11] [i_10 + 2] [i_10 - 3]))));
                                var_34 = (max(var_34, (((((max((((arr_32 [i_14]) ? (arr_36 [0] [0] [i_12] [i_12]) : var_4)), ((32765 ? var_9 : var_3))))) ? var_0 : (((((1 ? (-2147483647 - 1) : var_0))) ? (min(0, 231)) : (arr_36 [i_10 - 2] [i_10] [i_10 + 2] [i_10]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
