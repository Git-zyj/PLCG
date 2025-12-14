/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((((var_1 << (((arr_1 [i_0]) - 25301))))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? var_16 : (arr_1 [i_0])))));
        var_18 -= (arr_0 [8]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (max((arr_2 [i_1 - 1] [i_1 + 2] [i_1 + 2]), (-127 - 1)));
                    var_19 = max(((((arr_3 [i_0]) <= ((min((arr_6 [i_0] [i_1] [i_2]), var_1)))))), 19823);
                    var_20 ^= (max(((var_14 >> (var_12 + 3089744413875920344))), var_2));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = var_15;
                    var_21 = (max(var_6, ((~(arr_4 [i_5] [i_4 + 1])))));
                    var_22 = (min(var_22, (((arr_0 [i_5]) - var_7))));
                }
            }
        }
        var_23 = (min((((var_16 ? ((~(arr_2 [i_3] [i_3] [i_3]))) : var_6))), var_12));
        arr_17 [i_3] [i_3] |= var_12;
        arr_18 [i_3] [i_3] = (min(((var_13 ? (((-9223372036854775807 - 1) / var_10)) : (arr_4 [10] [i_3]))), (((var_13 | var_1) ? (arr_15 [i_3] [i_3] [10]) : (max(var_11, var_10))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 = (((0 - (max((-2147483647 - 1), (arr_12 [i_3] [i_6] [i_7]))))));
                    var_25 = ((+(((arr_10 [i_7 + 1] [7] [5]) ? (min((arr_2 [i_3] [i_3] [i_7]), -1)) : var_5))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_26 = (arr_14 [i_3] [i_6] [i_3] [i_3]);
                                var_27 = (var_2 ^ 7305225680482426123);
                                arr_27 [i_3] [i_6] [i_7] [i_8] [i_9 + 3] [i_3] [i_9] = (var_8 >> (var_8 + 101));
                                var_28 *= (min((min(1, (arr_6 [i_7] [i_8 - 2] [i_9 + 1]))), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {
                var_29 = (var_15 ? (arr_30 [i_10] [i_10 + 2]) : var_1);
                var_30 = (arr_32 [i_10 - 1] [0] [i_10 - 3]);
            }
        }
    }

    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_36 [i_12] [i_12] = (max((arr_34 [i_12]), ((min((arr_33 [i_12]), (arr_34 [i_12]))))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_31 *= (arr_34 [i_12]);
            var_32 = ((-(var_8 > 2601280979562769949)));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_33 -= ((var_5 ? ((var_4 << (((arr_42 [i_12] [i_12] [i_12]) - 3304226544)))) : 108));
                            var_34 = var_7;
                        }
                    }
                }
            }
            var_35 ^= ((var_4 ? (arr_33 [i_12]) : var_16));
            var_36 *= (arr_41 [i_12] [i_13] [i_12] [11] [i_13]);
        }
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            arr_50 [i_12] &= ((((arr_44 [i_12] [i_12] [i_17 + 1] [i_12] [i_12]) < (arr_44 [i_12] [i_17] [i_17 + 3] [i_17] [i_17]))));
            var_37 -= (min(0, (arr_44 [i_12] [i_17] [i_17] [i_17 + 3] [i_12])));
            var_38 = var_14;
            var_39 = -117;
        }
    }
    var_40 = (max(var_40, ((var_10 ? ((((var_14 <= (~var_12))))) : var_8))));
    var_41 = (min(((var_15 ? (~var_2) : (min(1, var_14)))), var_13));
    #pragma endscop
}
