/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    arr_6 [i_2] [i_1 - 2] [i_0 - 1] = (max((min(117, (var_8 / var_7))), (((arr_3 [i_0 - 1] [i_1 + 1]) ? var_1 : (arr_1 [i_0 - 1])))));
                    var_13 = (min(((((-116 * (arr_1 [i_0 - 1]))) / ((min((arr_3 [i_0 - 1] [i_1 - 2]), (arr_4 [i_2] [i_1 - 1] [i_0 - 1])))))), ((((~46) != (var_4 != var_8))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_2] = ((-21 / (arr_10 [i_3] [i_3 + 4] [i_3 + 4] [i_3])));
                        arr_12 [i_0] [i_1 - 2] [i_3] [i_3 + 3] = ((~(arr_10 [i_3 + 3] [i_3] [i_3 + 3] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_14 &= (min(((~(-33 != -47))), 81));
                        var_15 = (max(var_15, (((var_0 ? (var_6 != var_8) : ((((max(58, 4))) * 86)))))));
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_17 [i_5 + 1] [i_2 - 1] [i_1 + 1] [i_0] = arr_3 [i_0 - 1] [i_0];
                        arr_18 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1] = -1;
                        arr_19 [i_5 + 1] [i_2] [i_1] [i_0 - 1] = ((30 != 127) != ((0 ? 1 : 1)));
                        var_16 |= (min(((max(-80, 1))), -var_2));
                    }
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_17 = ((-62 ? (((arr_20 [i_0 - 1] [i_0] [i_6]) / var_8)) : ((~(arr_8 [i_6 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0 - 1])))));
                    arr_23 [i_6] = var_11;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_18 = (arr_13 [i_0 - 1] [i_1 - 1] [i_1] [i_7] [i_7 - 2]);
                    arr_27 [i_0 - 1] = (1 != 117);
                    arr_28 [i_7] [i_0] = (~13);
                    arr_29 [i_7 - 2] [i_7] [i_1 - 2] [i_0] = ((1 ? (((arr_4 [i_7] [i_7 - 1] [i_7 - 2]) ? (arr_0 [i_7 - 2] [i_1]) : 1)) : (20 / var_9)));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    arr_34 [i_8 - 2] = (((arr_32 [i_8 + 2] [i_1 - 2] [i_1 + 1] [i_0 - 1]) != ((0 ? -115 : 93))));
                    arr_35 [i_0] [i_0 - 1] [i_0 - 1] = ((((((arr_20 [i_0] [i_1 - 1] [i_1]) ? (arr_2 [i_0 - 1]) : (arr_14 [i_0] [i_1 - 2] [i_8])))) ? (!var_11) : (arr_21 [i_1] [i_1])));
                    arr_36 [i_8 + 2] [i_0 - 1] [i_8 + 1] = 1;
                    var_19 = ((arr_25 [i_0] [i_1 - 1]) != (arr_5 [i_0] [i_1 - 1] [i_8 + 1] [i_0 - 1]));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_20 = ((~((-((var_8 ? var_10 : (arr_39 [i_0 - 1] [i_1])))))));
                                var_21 = (((arr_10 [i_0] [i_1 + 1] [i_9] [i_1]) ? var_5 : -88));
                            }
                        }
                    }
                }
                arr_46 [i_0 - 1] [i_1 + 1] = (~var_6);
                arr_47 [i_0 - 1] [i_1] = ((((max(-120, 1))) / (((var_11 != (arr_4 [i_0] [i_1 - 1] [i_1 - 2]))))));
                var_22 = (((((((min((arr_44 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]), var_11))) ? var_9 : ((var_3 ? (arr_30 [i_0 - 1] [i_0] [i_1 - 2] [i_1 + 1]) : 0))))) ? ((((~(arr_4 [i_0] [i_0] [i_1 - 2]))) * ((-(arr_3 [i_1 + 1] [i_0 - 1]))))) : ((((var_5 ? (-127 - 1) : (arr_33 [i_1 - 2] [i_1 - 2] [i_0]))) / ((min((arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 2]), 63)))))));
            }
        }
    }
    var_23 |= var_2;
    #pragma endscop
}
