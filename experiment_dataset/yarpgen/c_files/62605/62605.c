/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_8 [4] [i_2] [i_1] [i_0] [i_0] = (~112);
                        arr_9 [i_3 - 1] = ((var_4 ? ((81 ? (-1243562061 / 81) : var_7)) : ((((100 != -1) == 65533)))));
                        arr_10 [i_0] [i_1] [i_1] [13] [20] = ((var_6 + (max(((9223372036854775807 ? 65533 : 3050853623850601758)), -1243562061))));
                        arr_11 [13] [22] [i_0] = ((((min(1735632896, (arr_7 [i_2] [i_1] [i_2])))) == (arr_5 [i_0] [i_1])));
                        arr_12 [7] [7] [i_1] [7] = min(255, 2559334399);
                    }
                }
            }
        }
        arr_13 [4] = ((-(max(((max(65528, (arr_2 [7])))), ((-(arr_3 [i_0] [i_0] [9])))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_17 [i_0] = arr_14 [i_0] [5] [i_0];
            arr_18 [i_0] = (arr_4 [20] [i_4] [5] [i_4]);
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = (((((arr_5 [i_5] [i_5]) < ((((arr_1 [i_5]) ? 1 : (arr_1 [i_5])))))) ? 65535 : (max((arr_20 [12]), -9223372036854775784))));
        arr_22 [i_5] [10] = (((((((var_6 || (arr_5 [12] [7])))) >= 12926655454368946178)) ? 913224987 : (((~(arr_20 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = ((!((max(-913224983, ((1798 ? var_5 : var_8)))))));
        arr_27 [13] = (min(0, (var_6 && 762382009)));
        arr_28 [i_6] [i_6] = ((var_11 ? var_9 : -6520244020235545748));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    arr_39 [i_8] = var_12;
                    arr_40 [i_8] = ((+(max((var_7 > 3), (max((arr_38 [i_8]), (arr_1 [16])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_47 [i_8] = ((((min((arr_37 [i_7] [i_8] [i_9]), (arr_35 [i_8])))) ? (min((arr_44 [i_9 + 1] [i_9] [3] [i_8 - 1] [i_7]), (arr_3 [i_7] [i_7] [i_7]))) : var_5));
                                arr_48 [i_8] = ((!(!var_2)));
                                arr_49 [i_7] [i_10] [i_9] [2] [i_7] &= (arr_42 [i_10] [15] [i_8 + 3]);
                                arr_50 [i_7] [i_8] [i_8] = ((((max((!-913225005), (((arr_38 [i_8]) * (arr_33 [6] [i_8 + 1] [i_7])))))) ? (((((((arr_16 [i_7]) ? (arr_29 [i_7]) : 1)) > ((var_2 ? var_10 : (arr_36 [i_8]))))))) : (max(var_1, -6520244020235545748))));
                                arr_51 [i_7] [i_8] [i_7] [i_7] [i_8] [i_7] |= ((min((arr_44 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 2]), (min((arr_20 [1]), 913224987)))));
                            }
                        }
                    }
                }
            }
        }
        arr_52 [10] |= ((-(~-4614022761380997826)));
    }
    var_13 = ((var_1 ? (((((var_12 ? var_11 : var_10))) ? var_2 : ((var_1 ? var_9 : var_12)))) : (((min(0, -1))))));
    #pragma endscop
}
