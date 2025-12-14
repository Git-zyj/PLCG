/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [24] |= (arr_1 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = (((arr_6 [i_0] [i_1] [i_2] [i_1]) ? 12996500255053161929 : 0));
                    var_11 = (arr_2 [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_12 = arr_8 [i_3] [i_1] [i_0];
                    arr_9 [i_0] [i_0] [i_0] [i_3] |= (arr_1 [i_1]);
                    arr_10 [i_1] = (arr_1 [i_1]);
                    arr_11 [i_3] [i_1] [i_1] [21] = ((-(arr_7 [i_1] [i_1] [i_1] [i_0])));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_16 [i_4] [i_1] [i_1] [i_0] = ((((min(27797, 16708))) ? (((arr_13 [i_4] [i_1] [i_0]) ? (arr_6 [i_0] [13] [i_0] [i_0]) : (min((arr_13 [i_0] [i_1] [i_4]), (arr_15 [i_1] [i_4]))))) : (((0 ? var_0 : 0)))));
                    arr_17 [i_1] = min(7680, (-127 - 1));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_13 = 208;
                    var_14 = (((243 ? (min((arr_18 [i_1]), 142)) : (arr_20 [i_1] [i_1] [22]))));
                }
            }
        }
    }
    var_15 = ((-((var_9 ? (var_0 || var_6) : (var_7 < 4207784357)))));

    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_23 [1] |= (((((~(arr_20 [10] [i_6] [i_6])))) ? (((~(arr_6 [i_6 - 1] [12] [17] [i_6])))) : ((((min((arr_13 [i_6] [i_6] [i_6]), (arr_22 [1] [i_6])))) ? ((var_4 - (arr_6 [i_6] [18] [i_6] [i_6]))) : (arr_7 [i_6 - 1] [i_6 - 1] [20] [i_6])))));
        var_16 |= -23327;
        var_17 |= (min(((((arr_6 [i_6] [i_6] [i_6 - 1] [i_6 - 1]) ? 4294967293 : (arr_0 [i_6])))), (min(0, (arr_6 [i_6] [i_6] [i_6 - 1] [i_6 - 1])))));
        var_18 -= (arr_3 [0]);
        var_19 |= (min(240, 17434535069193954686));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 = (arr_3 [i_9]);
                    var_21 ^= (arr_14 [23] [23] [i_9] [i_8 - 1]);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_22 |= (((-((128 ? (arr_33 [i_7] [i_8] [i_9] [i_10] [i_11] [i_7]) : 64)))) >= ((0 ? (((min((arr_3 [i_7]), -28746)))) : ((47 ? (arr_26 [i_7]) : var_1)))));
                                var_23 = min((((arr_28 [i_8 - 1] [i_10 + 1]) ? (arr_28 [i_8 - 1] [i_10 - 3]) : (arr_20 [i_9] [i_10 + 1] [i_11]))), ((((var_1 + var_8) || (((0 ? (arr_33 [i_7] [i_7] [i_7] [i_7] [18] [5]) : (arr_30 [i_7] [1] [i_7]))))))));
                                arr_36 [i_7] [i_7] [i_9] [i_9] [i_11] = (min(((((~(arr_5 [i_7] [i_8] [i_11] [i_8]))))), (min(((((arr_19 [i_9] [i_10] [i_11]) ? (arr_25 [i_11]) : var_6))), (arr_7 [i_10 - 2] [i_9] [i_9] [i_8 - 1])))));
                                var_24 = (max(var_24, (arr_25 [i_10 - 1])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    {
                        arr_44 [i_7] [i_7] [i_7] [i_14] = 0;
                        var_25 = (arr_39 [i_7] [i_12] [i_13 + 1] [i_14 + 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
