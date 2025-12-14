/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 ^= 83;
                    var_12 ^= (min(-84, (((min(var_8, -8)) - ((max(var_1, 84)))))));
                    arr_8 [i_0] [20] [13] [i_1] = (max(((var_10 - (arr_4 [i_0 + 1] [i_0 + 1]))), ((min(((max((arr_0 [i_1]), (arr_7 [i_0 + 1])))), ((~(arr_2 [i_0]))))))));
                    var_13 = (min(((((92 <= (arr_1 [i_0]))) ? var_9 : var_9)), -92));
                    var_14 = (max(var_14, ((((min((min((arr_5 [i_0 + 1] [i_1]), (arr_3 [i_0] [i_2]))), (((~(arr_0 [i_0]))))))) ? (((93 < ((-8 ? 83 : -93))))) : ((253 ? var_4 : (var_0 % 49)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_22 [2] [2] [i_5] [i_3] = 70;
                        var_15 = -80;
                        arr_23 [i_3] [i_4] [i_5] [i_6] [i_5] [8] = ((((((arr_9 [i_3]) ? (arr_9 [i_4]) : var_0))) && var_7));
                    }
                }
            }
            arr_24 [i_3] [i_3] = (((arr_3 [i_3] [i_4]) > -40));
        }
        var_16 = (arr_20 [i_3] [i_3] [i_3] [i_3]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] [1] = (max(((51 | (arr_26 [i_7] [i_7]))), (((-88 ? 80 : 120)))));
        arr_30 [i_7] = (max(18, (((var_3 ? var_2 : var_8)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 17;i_9 += 1)
        {
            {
                arr_38 [i_9] = (min(-59, var_7));
                var_17 = (~362610696);
                var_18 = (arr_31 [0] [i_9]);
            }
        }
    }
    var_19 = (~var_7);
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 22;i_11 += 1)
        {
            {

                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_20 = ((((-(((arr_27 [i_10]) ? (arr_25 [i_10]) : var_8)))) >> ((((65535 << (((((arr_40 [1] [i_14]) ? var_4 : var_9)) - 4905)))) - 1073725419))));
                                arr_52 [i_10] [4] [4] [i_10] [i_13] [7] = (((~((max(var_7, var_10))))));
                                var_21 = (min(var_21, ((((min((max(-192274357, (arr_43 [i_10]))), (((arr_44 [i_11]) ? var_0 : (arr_45 [i_10] [i_11]))))) | 21)))));
                            }
                        }
                    }
                    arr_53 [i_10] [i_11 - 1] [i_12] = 135;
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_22 = ((((((max(var_8, (arr_56 [i_15] [i_11] [i_10])))) ? (((arr_42 [i_10]) ? (arr_42 [i_15]) : 80)) : ((min(-61, 103))))) < (arr_46 [i_10] [i_11 - 2] [15])));
                    arr_57 [i_10] [i_11 + 1] = 3689337404904830501;
                    var_23 = (min(var_23, -96));
                }
                arr_58 [i_10] [i_11] = ((((min(13, -1196414953))) ? (min(((min(108, -69))), (((arr_25 [i_10]) ? -85 : -14)))) : ((max(1, var_3)))));
            }
        }
    }
    #pragma endscop
}
