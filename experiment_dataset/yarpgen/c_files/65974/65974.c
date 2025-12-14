/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-((-((min(-113, (arr_5 [i_0] [i_1 + 1])))))))))));
                arr_6 [i_0] [i_1] [i_0] = ((!(min(((-11029 || (arr_2 [i_1 + 2]))), ((!(arr_4 [i_0])))))));

                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    arr_11 [i_0] |= ((((((((arr_1 [i_1] [i_2]) == 11025)) ? (~var_10) : ((max((arr_4 [i_0]), 86)))))) ? ((-((((arr_3 [i_0]) <= var_6))))) : ((~((6223 ? var_0 : (arr_10 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (((arr_8 [i_2 - 2] [i_1 + 1]) | (arr_8 [i_2 - 2] [i_1 + 1])));
                        arr_14 [i_3] = (((-16459 * var_14) ? (var_13 & -15) : ((var_8 ? (arr_4 [i_0]) : 5))));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_22 = (min((((arr_3 [i_2 + 1]) - (arr_3 [i_0]))), var_6));
                        arr_19 [i_4] [i_4 + 1] [i_2 + 1] [i_4] = arr_2 [i_2];
                        var_23 = (min(((-((max((arr_18 [i_1] [i_1] [i_2] [i_4 - 1] [i_4] [i_4 + 2]), (arr_9 [i_1] [i_2] [i_4])))))), (((((-1 ? 16458 : (arr_13 [i_0] [i_1] [i_2 + 1] [i_2] [i_4])))) ? (arr_0 [i_1 + 1] [i_1 + 2]) : ((115 ? (arr_16 [i_0] [i_4] [i_2] [i_4]) : 80))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_24 = -5;
                        arr_23 [i_0] [i_5] [i_2] [i_5] = ((-(((((arr_20 [i_0] [i_0] [i_1 + 1] [i_5]) + 2147483647)) >> (((arr_8 [i_0] [i_1]) - 26518))))));
                        var_25 = ((max(-19311, 92)));
                    }
                    var_26 = (((((11 && -1) ? (16458 >= -22947) : ((max(var_9, var_8))))) < (arr_4 [i_2])));
                    var_27 = ((((min((arr_12 [i_2] [i_2] [i_2 - 4] [i_1 + 2]), (arr_20 [i_2] [i_2] [i_2 + 1] [i_2])))) - (((arr_20 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2 - 1]) + var_7))));
                }
            }
        }
    }
    var_28 = var_13;
    var_29 = (~var_8);
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_30 = (min(var_30, (~-29)));
                        var_31 = arr_5 [i_6] [i_8];
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((~(-32767 - 1)));
                                var_32 = (((((~(arr_8 [i_10] [i_7])))) ? (arr_22 [i_11 + 3] [i_11 - 1] [i_11 + 3] [i_11 + 2]) : (arr_28 [i_11] [i_8])));
                                var_33 += ((((((max(13853, (arr_28 [i_6] [i_7])))) ? ((min(-11029, -9))) : var_13)) | (~var_8)));
                            }
                        }
                    }
                    var_34 = (min(var_34, ((min((~var_12), (arr_4 [i_8]))))));
                }
            }
        }
    }
    var_35 = ((var_7 < ((-89 ? var_11 : ((-1 ? var_7 : var_1))))));
    #pragma endscop
}
