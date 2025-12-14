/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = min(((((min(var_0, var_13))) ? 47 : var_9)), (arr_2 [i_0]));
        arr_4 [i_0] = min(var_12, ((((193 ^ var_13) != (((~(arr_2 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = ((((arr_10 [i_1] [16] [i_1] [i_1]) ? var_11 : ((var_5 ^ (arr_10 [i_3] [i_3] [i_2] [i_1 + 1]))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((((((max(var_8, var_11))) ? 209 : (((arr_10 [i_3] [i_2] [i_1 - 1] [i_1]) ? 191 : 148))))) / (arr_0 [i_1] [i_1]));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] = (max(33, 1));
                        var_18 = (max(var_18, ((((var_5 ? var_4 : (arr_5 [i_1 - 2] [1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_1] [i_2] [i_1] [i_1] = ((((var_10 ? var_5 : 0)) / (~var_3)));
                        arr_22 [i_1] [i_1] [i_3] = (((((var_5 ? var_7 : var_14))) <= ((-1513553631 ? var_3 : -1752108497779212123))));
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_19 = (max(var_19, (((17681 / ((((var_11 ? var_14 : (arr_23 [i_1] [i_1] [16] [16] [8] [i_6]))) % (max(var_4, var_7)))))))));
                        var_20 = (max(var_20, (((min(-7635506254013372008, var_13)) | (((arr_18 [i_6 - 1] [i_6 + 1] [i_6 - 1] [5] [i_6] [i_6 - 1]) ? (var_15 % var_7) : (var_13 / var_12)))))));
                        arr_26 [i_1] [i_1] [i_3] [i_6 - 1] [11] = ((((min(((max((arr_23 [i_1] [i_1] [i_1] [i_1 + 3] [5] [i_1 + 1]), 51))), (~var_14)))) ? (((((min(2161, 11302)))) + (max((arr_24 [i_1] [1] [i_3] [i_3] [i_3]), var_4)))) : -7360191153703580082));
                        arr_27 [i_1] [i_6] = (2147483642 - 215);
                    }
                    var_21 += ((((max(1, 23))) ? (arr_0 [i_1 + 2] [i_1 + 3]) : 2147483642));

                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        arr_31 [i_1] = (min((((((min(var_8, 1))) && ((((arr_1 [i_7]) | var_12)))))), (~-4993)));
                        arr_32 [i_1] [10] [i_2] [4] [i_7 + 1] &= ((var_7 ? ((((max(1, var_2))) + var_9)) : (((1 % 2) % 209))));
                    }
                }
                arr_33 [i_1] [19] = ((209 ? ((var_8 ? (max(2147483630, var_12)) : (min(3, var_14)))) : -727494665));

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_22 = (arr_6 [i_1]);
                    arr_36 [i_1 + 2] [i_2] [i_1] = (min(((-(var_15 - -23))), ((max((max(1, var_15)), (arr_1 [i_1 + 3]))))));
                    arr_37 [i_1] = ((((max(((var_6 ? 115 : 8109507591718590779)), ((min(var_6, var_1)))))) ? (((arr_13 [i_1 - 1] [i_1 + 2] [i_1] [1] [i_1 + 2]) ? var_3 : (var_15 == 167))) : (min((((55 ? var_6 : (arr_15 [i_1] [i_1] [3] [i_8])))), ((0 ? (arr_11 [i_1] [i_1] [1]) : var_15))))));
                }
            }
        }
    }
    #pragma endscop
}
