/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max((arr_2 [i_0]), (((arr_5 [i_0 - 2]) ? ((min(1, 1))) : 1))));
                arr_6 [i_0] [i_0 - 1] = var_8;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_18 = (arr_3 [i_0]);
                            var_19 = 18100461564770535436;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((var_3 ? (!1) : 16));
                            var_21 = ((var_4 ? ((((arr_1 [i_0]) | (arr_13 [i_5 - 1] [i_3] [i_2] [i_1] [i_0 + 1])))) : var_4));
                            var_22 = (arr_12 [i_5] [i_1] [i_1 - 1] [i_5] [1] [i_5]);
                        }
                        arr_15 [i_2] [2] [i_2] [i_0] = arr_12 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 3] [i_3];
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        arr_19 [i_6] = ((+(((arr_0 [i_1 - 1]) ? 240 : var_0))));
                        arr_20 [i_6] [i_0] = (((~0) | (arr_9 [i_6] [i_6 - 1] [i_6] [i_0] [i_0 - 2] [i_1])));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_17 [i_6 - 1] [i_6] [i_6 - 1] [8] [i_6 + 1]) ? (arr_14 [i_6 - 1] [i_6] [i_6] [10] [i_6] [i_6] [4]) : (arr_17 [i_6 - 1] [7] [i_6] [i_6] [i_6]));
                        var_23 ^= ((((var_5 || (arr_17 [i_6] [i_2] [i_2] [i_1 + 1] [i_0])))));
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_24 [1] [i_2] [i_1] [i_1] [i_0] = (((((arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0]) > 3379786789)) ? (((3379786801 ? var_14 : 1177625656))) : 4991937052676317303));
                        var_24 ^= 17130;
                        arr_25 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] |= 8648936641420600825;
                        arr_26 [i_0] [i_0 - 2] = ((!(((48415 ? var_14 : var_15)))));
                        arr_27 [i_0] |= (arr_14 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 + 2]);
                    }
                    var_25 = (((arr_14 [i_0] [6] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0]) || (arr_17 [i_0 + 2] [i_0] [0] [i_0 - 1] [i_0 + 1])));
                }
            }
        }
    }
    var_26 = min((max((var_10 & -4414), ((-7212430404511519176 ? var_16 : var_11)))), var_3);

    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        var_27 = (((var_9 >= 8504) ? ((var_4 ? (arr_29 [i_8 + 1] [i_8 - 1]) : 15222629434897931019)) : (((116 ? -32634 : 27)))));
        arr_30 [i_8 - 2] = (arr_28 [i_8] [i_8]);
        var_28 = (((((arr_29 [i_8 + 1] [i_8 + 1]) / (arr_29 [i_8] [i_8 - 2]))) * 63));
        var_29 = (!var_15);
        var_30 = ((((((arr_29 [i_8 + 1] [i_8 + 1]) ? 64159 : (arr_29 [i_8] [i_8 - 1])))) ? (-64 | 2091586191) : (arr_29 [i_8] [i_8])));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_31 = 10479448230509310952;
        arr_33 [i_9] [i_9] = (arr_31 [i_9]);
        var_32 = (min((arr_32 [i_9]), -255));
    }
    var_33 = max(3, var_11);
    var_34 = (min(var_34, -32749));
    #pragma endscop
}
