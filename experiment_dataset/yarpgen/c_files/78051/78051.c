/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((127 << (52 - 51)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max((arr_3 [i_1 - 1] [i_1 + 1]), 3));

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [14] = (((arr_3 [i_2] [i_1]) ? ((((min(123, 1))) ? (~73) : 83)) : (arr_0 [i_0 + 1])));
                    arr_9 [i_0] = 244;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_21 = ((65 ? ((max(51, (arr_3 [i_0 + 1] [i_3])))) : (arr_15 [i_0 - 1] [i_1 - 1] [i_3] [i_4] [i_5 - 2])));
                                var_22 = (min((arr_6 [i_0] [i_4]), (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_3] [i_4 - 2] [16]) : (164 | 255)))));
                                arr_18 [i_5] [i_0] [i_4] [i_3] [i_0] [i_0 + 1] = ((((!(arr_14 [i_5] [i_4] [i_3] [15] [i_0]))) ? ((-(arr_14 [i_4 - 3] [i_4] [i_4 - 3] [i_4] [i_4]))) : var_6));
                                var_23 = (min(243, 250));
                            }
                        }
                    }
                    arr_19 [i_0 + 1] [i_0] = 149;

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_24 = (!12);
                        arr_22 [i_0] [i_0] = (((arr_12 [18] [19] [i_3] [i_6] [8]) ? 64 : (arr_11 [i_6] [i_3] [8] [i_0 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0 + 1] = ((((max((min(25, 118)), (arr_11 [i_0] [i_1] [i_0] [i_7])))) ? var_14 : -1));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_25 = (((arr_27 [i_0 + 1] [i_0]) || var_10));
                            var_26 = (arr_11 [i_0] [i_0] [i_0 + 1] [i_1 + 1]);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_31 [i_1 + 1] [i_0] = arr_14 [i_9] [i_7] [i_3] [i_1] [i_0];
                            arr_32 [i_0] [i_0] = (((((~((124 ? 125 : 52))))) ? ((((((arr_0 [10]) ^ 117))) ? 190 : (arr_7 [i_0 + 1] [i_0] [i_0] [i_0]))) : ((min((arr_10 [i_0] [i_1] [i_3] [i_7]), var_9)))));
                            var_27 = arr_24 [i_0] [11] [i_7] [i_7];
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_3] [i_7] [i_10] [i_0] = 12;
                            arr_37 [i_0] [15] [i_1] [i_3] [i_0] [i_10] = ((-((((121 / (arr_1 [i_0])))))));
                            var_28 = 252;
                        }
                        var_29 = arr_6 [i_0] [i_0];
                        arr_38 [i_0] [i_1] [i_0] [i_7] = (((~252) <= 171));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_41 [i_0] [i_0] = (arr_28 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_0 + 1]);
                            var_30 = arr_5 [i_1] [15];
                        }
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            arr_45 [i_0] [i_1] [i_0] [i_7] [i_12] = arr_16 [i_0 + 1] [i_0] [i_3] [i_7] [22];
                            arr_46 [i_0] [i_0] [i_1 + 1] [i_3] [14] [i_7] [i_12] = min((arr_7 [i_0] [10] [i_0] [i_0 + 1]), (arr_25 [i_1] [i_1] [i_3] [i_7] [i_12 + 1] [i_7]));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_4;
    var_32 = 169;
    #pragma endscop
}
