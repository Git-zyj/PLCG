/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] = (((var_15 <= var_12) ? (arr_1 [1]) : ((99 ? var_8 : var_8))));
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 = var_4;
                            var_18 = (arr_4 [23] [i_3] [7]);
                            var_19 = ((((1073741824 ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : 0)) % var_4));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    {
                        var_20 = arr_1 [i_1];

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [3] [3] [5] [i_6 + 2] [i_5] = var_13;
                            arr_25 [i_7] [i_5] [i_5] [i_1 - 2] [12] [i_5] [i_0] = 31793;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_29 [i_0] [0] [i_5] [i_5] [i_5] [i_6] [i_6] = 0;
                            arr_30 [i_5] = (((var_0 ? -16 : 1)));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_21 = (i_5 % 2 == zero) ? ((((arr_31 [20] [i_1 + 1] [19] [i_6] [i_6]) >> (((arr_32 [i_5] [i_6 + 3] [i_1 - 2] [i_5]) - 3503697794709408631))))) : ((((arr_31 [20] [i_1 + 1] [19] [i_6] [i_6]) >> (((((arr_32 [i_5] [i_6 + 3] [i_1 - 2] [i_5]) - 3503697794709408631)) - 13147044069161921274)))));
                            var_22 = ((~(arr_31 [i_5] [i_1] [i_6 + 1] [i_5 + 2] [22])));
                            var_23 = ((1510519161187397077 ? (arr_4 [i_5 + 1] [i_5] [i_5]) : var_15));
                            arr_33 [i_0] [1] [i_5] [i_1 + 1] [i_0] [16] [i_9] = (arr_17 [i_9] [9] [i_6] [9] [1] [1]);
                        }
                        var_24 = ((-(arr_20 [i_0] [i_0] [18] [i_5 + 4] [i_5] [i_5] [i_6 + 1])));
                        var_25 = 29920;
                    }
                }
            }
            arr_34 [17] = (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]);
        }
        var_26 = ((var_0 % ((min(var_9, (arr_3 [i_0] [i_0] [13]))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_27 = 1;
        arr_37 [i_10] = (((125 || 32741) ? var_0 : var_7));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_28 = 15;
                                var_29 = (arr_12 [i_10] [i_10] [1] [i_13] [1] [i_13] [1]);
                                var_30 = max(var_9, (min(var_8, var_3)));
                                arr_47 [i_13] = (((((-1 ? (arr_38 [i_10] [i_13]) : (arr_38 [i_13] [i_10])))) ? (arr_35 [i_10]) : -32741));
                            }
                        }
                    }
                    var_31 = var_15;
                    var_32 = (((+-27784) ? (arr_4 [i_10] [i_10] [i_10]) : (((max(var_12, (arr_19 [10] [i_12] [i_11] [i_10]))) * (arr_46 [12] [i_11] [i_12] [i_11] [12] [i_12] [12])))));
                    var_33 = var_11;
                }
            }
        }
        var_34 = var_6;
    }
    var_35 = (max(var_8, var_0));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 17;i_17 += 1)
            {
                {
                    var_36 = var_6;

                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] = (max((((~(arr_11 [i_17 + 1] [i_17 + 1] [i_17 - 1])))), 2304025388));
                        arr_59 [i_15] = -32742;
                        var_37 = ((((((-27784 != var_12) ? ((max(var_16, var_8))) : ((4294967295 ? 1 : 118))))) ? (((((((arr_26 [i_15] [i_16] [13] [13]) < var_3))) <= var_8))) : ((var_12 ? (arr_15 [i_15] [i_16] [i_15]) : ((min(var_0, var_1)))))));
                        var_38 = (((((min(33, -29939)))) - (max(var_11, var_4))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 3; i_19 < 22;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_21 = 1; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 24;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 24;i_23 += 1)
                        {
                            {
                                var_39 = (4294967295 < var_14);
                                arr_74 [i_19] [i_22] [i_19] = var_7;
                                arr_75 [i_19] [i_20] [i_21 + 2] [i_22] [9] = 0;
                                var_40 = var_16;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 23;i_25 += 1)
                    {
                        for (int i_26 = 1; i_26 < 1;i_26 += 1)
                        {
                            {
                                var_41 = var_6;
                                var_42 = ((((min(var_14, ((2147483647 ? 0 : 254))))) ? (((var_3 ? (var_12 - 127) : (((-32741 - (arr_17 [i_19] [i_19] [i_24] [i_19] [i_25 - 3] [i_26]))))))) : ((var_5 - (arr_70 [i_20] [19] [2] [i_24] [i_25 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
