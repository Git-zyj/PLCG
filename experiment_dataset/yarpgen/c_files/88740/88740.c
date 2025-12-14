/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((((min(144115188075855871, 0)) & var_4))) ? ((-1073741824 ^ (arr_3 [i_0 + 2]))) : ((((((min((-9223372036854775807 - 1), (-127 - 1)))) <= (max((arr_1 [i_1 + 1]), 2097151)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((((var_13 ? var_3 : var_17)) / (((arr_1 [i_0]) ? var_9 : -1)))) << (var_0 - 9213))))));
                            arr_11 [i_3] = (((((-(arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])))) ^ (min((max(-14, 10)), (var_2 != var_7)))));
                            arr_12 [18] [i_1 - 1] = (((0 << (2147483647 - 2147483636))));
                            var_20 = ((((((min((arr_1 [i_0]), var_1))) && -1)) ? (((-var_7 == (((-2147483647 - 1) ? (arr_6 [i_3] [i_1] [i_2]) : 1))))) : 1));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_6] = (((((var_8 ? -13 : (arr_15 [i_5] [i_6])))) || (arr_13 [i_4] [i_4])));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            arr_29 [i_7] [i_5] [i_6] [i_7] [i_6] [i_4] [i_4] = ((-(18446744073709551599 / var_10)));
                            var_21 = (arr_18 [i_4] [i_4] [6]);
                            arr_30 [i_6] [i_6] [i_7] [i_6] = (((arr_28 [i_4] [i_4] [i_4] [9] [i_5]) ? (arr_28 [i_4] [i_5] [i_6] [i_4] [i_6]) : (arr_9 [i_8] [i_5] [i_6] [i_7] [i_8 + 2] [i_8 - 2])));
                            arr_31 [i_4] [i_7] = var_5;
                            var_22 = -var_15;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_35 [i_4] [i_4] [i_4] [8] [1] |= (((var_0 ? 18446744073709551598 : 67108863)));
                            arr_36 [i_7] [i_7] [i_6] [i_4] [i_9] = (((((var_18 ? var_8 : -1))) ? var_0 : var_18));
                            arr_37 [i_9] [i_7] [i_6] [i_7] [i_4] = ((((((-9223372036854775807 - 1) ? (arr_24 [i_4] [i_5] [i_6] [i_7] [i_6]) : var_12)) + 2147483647)) << ((((9223372036854775807 ? (arr_6 [i_5] [i_6] [i_5]) : (-9223372036854775807 - 1))) - 1513062347574048851)));
                            arr_38 [3] [i_5] [i_6] [i_7] [i_7] = ((!(((3 ? (arr_27 [i_4] [i_4] [i_4] [i_7] [14]) : -2147483643)))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_41 [1] [i_10] [i_7] [i_7] [i_5] = 18;
                            var_23 = (((31 == 1) - (((min((arr_26 [i_5] [i_6] [i_7] [i_10]), 1)) - ((max(1, (-2147483647 - 1))))))));
                            var_24 = 243;
                        }
                        var_25 -= ((((((arr_2 [i_4] [i_5] [i_6]) ? 1 : (arr_2 [i_5] [i_6] [i_7])))) ? (var_15 == var_18) : 42));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_26 = (max(var_26, var_17));
                                var_27 = ((((min(1, (max(var_8, var_17))))) ? (arr_1 [9]) : var_17));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_28 = ((1 ^ ((((((arr_54 [i_13] [i_14] [i_15]) ? (arr_50 [i_13]) : 9223372036854775807)) == (arr_52 [i_14]))))));
                    var_29 -= var_9;
                    arr_55 [i_13] [i_14] [i_13] [12] = (((((var_8 + 2147483647) << (var_11 - 1))) ^ (arr_47 [i_13 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
