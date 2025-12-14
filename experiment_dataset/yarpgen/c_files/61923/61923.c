/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (arr_12 [i_2] [9] [i_2] [i_3] [i_0]);
                                var_17 = ((var_14 + (max(13455, -2656401503773350282))));
                                var_18 = ((((min(var_14, (37568 * 4389456576512)))) ? (((max(var_11, var_0)))) : (min(var_8, (max(var_8, 4389456576512))))));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [3] = (min(-118, 105));
                            }
                        }
                    }
                    var_19 = (max(1767, 1));
                    var_20 &= ((((((((~1) + 2147483647)) << ((((var_5 ? var_8 : var_14)) - 8))))) | ((31744 & (~820134666)))));
                }
            }
        }
    }
    var_21 = -82;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_22 ^= (((((((1153314913 >> 1) == (~62))))) / (arr_0 [i_5])));
        var_23 = (min(var_23, (!30)));
        var_24 = ((~((-47 ? var_0 : (((arr_9 [i_5] [i_5]) | (arr_10 [i_5] [i_5] [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = ((4 ? (((((var_6 ? var_11 : var_6))) ? var_0 : 1054997519253775833)) : 51));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_28 [i_9] &= ((-(-19924 % -31751)));
                        var_25 &= ((!-1112593030) ? var_10 : ((max(var_11, (arr_25 [i_6] [i_9] [10])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 12;i_11 += 1)
            {
                {
                    arr_33 [i_6] = var_11;
                    arr_34 [i_6] = ((16376 ? 1 : (arr_27 [i_6] [i_6] [i_10] [i_10])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_26 = ((-(min((((arr_35 [i_13] [i_11]) << (var_10 - 15918))), (((6223403696713330258 ? (arr_12 [i_6] [i_6] [i_12] [i_12] [i_13]) : -645876377)))))));
                                var_27 = ((((min(var_2, var_4))) ? ((max(-var_9, 1079435576))) : -6223403696713330258));
                                var_28 = 1;
                                var_29 = 1;
                            }
                        }
                    }
                    var_30 = var_6;
                    var_31 = (i_6 % 2 == zero) ? (((((-(arr_39 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_6] [i_11] [1] [i_6]))) / (arr_39 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_6] [i_10] [i_10] [i_10])))) : (((((-(arr_39 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_6] [i_11] [1] [i_6]))) * (arr_39 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_6] [i_10] [i_10] [i_10]))));
                }
            }
        }
    }
    #pragma endscop
}
