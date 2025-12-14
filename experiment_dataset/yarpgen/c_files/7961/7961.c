/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((16777215 > 40212), 40222));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_15 = 25324;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_16 ^= arr_7 [i_0 - 1] [0] [i_2 + 1] [i_0];
                            var_17 &= (((-32767 - 1) ? 4841149687679396413 : 8292));
                            var_18 = arr_2 [i_0] [i_0] [i_0];
                            var_19 = var_4;
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_20 += var_13;
                            var_21 = ((255 ? (min(var_7, (arr_13 [i_0 - 1] [i_0 - 1] [0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) : (min((((var_7 ? 85 : var_1))), var_8))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_22 = 255;
                        arr_17 [i_0] [i_0 - 1] [i_2 - 1] [i_0] = 1;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_21 [5] [i_1] [10] [i_1] = (((((~(arr_13 [i_7] [i_7] [3] [i_1] [i_1] [14] [i_0])))) ? ((40199 | ((32767 ? (-9223372036854775807 - 1) : 0)))) : var_0));
                        arr_22 [i_0 - 1] [3] [i_2] [14] = ((!((((!var_4) ? ((var_11 ? (arr_19 [i_1] [i_2] [2]) : 57248)) : var_5)))));

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (((arr_15 [i_0 - 1] [i_1] [i_2 - 1]) ? (arr_12 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : 4294967295));
                            var_24 = -609747576;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_25 += ((var_0 ? (~2147483646) : var_11));
                            var_26 = (min(var_26, (((var_4 ? (var_10 <= var_4) : var_6)))));
                            var_27 *= (((arr_23 [i_0] [7] [i_0 - 1] [i_2 - 1] [i_9]) >> (((arr_23 [i_0 - 1] [i_1] [i_0 - 1] [i_2 + 1] [i_9]) - 1849761371624915492))));
                            arr_28 [i_7] [i_1] [i_2] [i_7] [i_9] = var_1;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_32 [6] [i_1] [i_10] [i_2 - 1] [8] [i_7] [i_10] = (((((var_12 ? var_1 : var_3))) ? ((8277 * (arr_19 [i_0] [0] [1]))) : (~32767)));
                            var_28 -= ((-(arr_12 [6] [8] [i_2] [i_7] [i_10])));
                            var_29 = (26 ? (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1]) : 3259514676);
                        }
                        var_30 -= (((-127 - 1) ? (min(((var_5 ? 25323 : (arr_29 [i_0] [10] [i_0] [i_0] [4] [9] [i_0 - 1]))), 9064)) : 8297));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_31 = (max(((-(((var_1 == (arr_12 [i_0 - 1] [i_1] [i_2] [i_11] [i_11])))))), 30409));
                        var_32 = (max(((((max(var_10, var_9))) ? (((arr_24 [i_0 - 1] [8] [i_1] [i_2] [i_11]) ? var_7 : var_3)) : 1)), -1303418780));
                    }
                    arr_35 [6] |= (min((40225 / var_9), -16384));
                }
            }
        }
    }
    var_33 += ((var_2 ? (!var_12) : (9223372036854775807 > var_7)));
    var_34 += (min((min(var_6, (min(var_11, var_0)))), ((((-9223372036854775807 - 1) <= var_12)))));
    #pragma endscop
}
