/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_0 ? (~var_4) : -16384)), (max(((75 ? 168 : -16383)), ((3 ? 16383 : 15450))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 ^= ((min(var_8, 0)));
        arr_3 [i_0 + 1] = ((((((arr_0 [i_0 - 1]) | 192))) ? ((var_10 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) : var_8));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_1;
                    var_15 = ((((min((((arr_5 [1]) ? var_8 : 3)), 36))) ? var_6 : 89));
                }
            }
        }
        arr_9 [2] = (arr_0 [i_0]);
        arr_10 [i_0] [16] = (((max((arr_2 [i_0] [i_0]), (max(65332, (arr_5 [i_0])))))) ^ ((-((var_2 & (arr_7 [i_0] [i_0] [i_0] [i_0 - 1]))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [2] = min(((17 / (max(582317881, 1)))), ((-((62438 ? 4294967295 : (arr_17 [i_6] [i_6]))))));
                                var_16 = (((((-2442453174278200433 ? var_0 : var_5) / 13))));
                            }
                        }
                    }
                    arr_24 [9] [5] = 8;
                    var_17 = (((arr_18 [i_3] [i_4 + 1] [7] [i_5]) ? ((max((arr_6 [i_3] [i_4 + 1] [i_5 + 1]), 1))) : 255));
                    arr_25 [i_4] [i_4] [8] &= (arr_22 [i_5 - 1]);
                }
            }
        }
        var_18 = (arr_16 [1] [10] [i_3] [i_3]);
        var_19 = (min(0, 4875566517446880949));
        var_20 = (min(var_20, ((((((12842 ? (max((arr_0 [i_3]), 17)) : (max(109553127, var_0))))) || ((((arr_13 [i_3 + 1] [i_3 + 3]) % (arr_13 [i_3 + 1] [i_3 + 2])))))))));
        arr_26 [i_3] |= (arr_21 [i_3] [7] [1] [i_3] [i_3] [i_3]);
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8 - 1] = ((((((arr_6 [i_8 + 1] [i_8] [i_8]) - (((arr_20 [i_8] [i_8 + 1] [i_8] [i_8] [i_8]) ? (arr_6 [i_8] [i_8] [i_8]) : var_6))))) - (((33283 + 1) ? var_4 : (-116 + 1971597721)))));
        var_21 = ((((arr_7 [i_8 + 1] [i_8 + 1] [11] [i_8]) >> (((arr_1 [i_8]) - 2840653884785723341)))));
        var_22 = (min(((~((107 * (arr_15 [i_8]))))), ((1 ? (~39) : ((min(1, (-127 - 1))))))));
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] = -112;
        arr_33 [i_9] [i_9 + 1] = (arr_17 [0] [1]);
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_23 = (min(var_23, var_8));
                    arr_39 [i_10 + 2] [i_11] = (((min(var_8, (arr_36 [i_9] [i_10 - 2] [i_10 - 2] [i_9 - 1])))) ? (((!(arr_12 [10])))) : var_12);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            {
                var_24 = (((((-(min(var_3, -3274))))) ? ((((max(4294967295, (arr_36 [i_13] [6] [2] [i_12])))) ? 94 : 32640)) : var_6));
                arr_46 [i_12] = (~53);
            }
        }
    }
    var_25 = (min(var_25, var_5));
    var_26 = (min((((var_6 ? ((var_10 ? 32542 : 62180)) : ((max(var_5, var_10)))))), -var_2));
    #pragma endscop
}
