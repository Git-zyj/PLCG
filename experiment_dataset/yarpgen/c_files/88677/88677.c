/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_0, var_4))) ? (min(var_3, (var_9 - 22167))) : ((((19 ? 6519920285060954287 : var_15)) + -var_3))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 67;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_0 - 1] = ((185 ? (((!(arr_1 [i_0 + 1] [i_0])))) : ((min((arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]), (max((arr_1 [i_0] [i_1]), (arr_4 [i_3] [i_2] [i_1]))))))));

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_18 [i_0] = ((max((268434944 & 939789191), var_0)));
                            arr_19 [i_1] [i_3] = (max((min((!0), var_15)), 65535));
                            arr_20 [i_4] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 1] = -31739;
                            arr_21 [i_4] [i_0] [i_1] [i_0] = (((arr_17 [i_1] [i_1]) ? ((var_0 >> (var_6 - 2733794824))) : (arr_5 [i_0] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_26 [i_0] = (max(((((arr_24 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_3] [i_3] [i_3]) >> (((arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) - 3322334982))))), (max((arr_24 [i_0 - 2] [i_5] [i_0 - 2] [i_3] [i_3] [i_3] [i_0]), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2])))));
                            arr_27 [i_3] [i_3] [i_2] [i_1] [i_0] = ((((((((var_2 ? (arr_23 [i_0] [i_1] [i_2] [i_3] [i_2]) : var_7))) ? (min(var_4, var_9)) : 188))) ? (arr_22 [i_0 - 2] [i_0] [i_0 - 2]) : (((arr_25 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2]) ? var_11 : (arr_25 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1])))));
                            arr_28 [i_0] [i_1] [i_2] [i_3] |= ((((((((arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_5]) ? 65535 : 535822336))) ? (~-48) : 1152919305583591424))) ? (arr_12 [i_5] [i_3] [i_1] [i_1] [i_0 - 2] [i_0 - 2]) : ((-(min((arr_17 [i_5] [i_1]), (arr_24 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] [i_0]))))));
                            arr_29 [i_0] [i_1] [i_0] [i_3] [i_5] = (((((~(arr_17 [i_0] [i_0 - 2])))) ? var_13 : (((min(var_10, (max(65516, var_0))))))));
                        }
                        arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] |= (-((+(((arr_17 [i_1] [i_2]) ? var_13 : (arr_4 [i_0] [i_2] [i_2]))))));
                        var_18 = (min(var_18, ((min((((arr_7 [i_0 - 2] [i_0 + 1]) ? (arr_16 [i_0] [i_0]) : ((min(var_0, (arr_0 [i_0])))))), var_9)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_19 *= (max((min((arr_31 [i_7]), ((1 ? (arr_34 [i_7]) : (arr_32 [i_6] [i_7]))))), (((!(arr_32 [i_6 + 1] [i_8]))))));
                    arr_39 [i_7] [i_7] [i_6] [i_7] = 0;
                    arr_40 [i_6] [i_6] [i_7] [i_8] = (arr_33 [i_6]);
                    arr_41 [i_6] = (arr_36 [i_6] [i_7]);
                    arr_42 [i_6] [i_6] = arr_38 [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1];
                }
            }
        }
    }
    var_20 = ((~((((min(var_2, 2))) ? 25 : (~var_10)))));
    #pragma endscop
}
