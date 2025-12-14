/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((~((max((arr_3 [i_0] [i_0]), (arr_0 [i_1]))))))))));
                                arr_13 [i_0] [i_1] [3] [i_4] [i_4] [i_0] = ((+((max((arr_12 [i_1 - 1] [i_1 - 2]), var_8)))));
                            }
                        }
                    }
                    var_18 ^= (((arr_4 [i_1]) ? (((!((max(13857536245350391897, 12)))))) : (((((4190387435 ? 246 : (arr_8 [i_0] [i_2] [i_2] [i_2])))) ? (arr_4 [i_1 + 1]) : (arr_1 [i_2 - 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_19 = var_6;
                        arr_21 [i_6] [i_6] [i_6] = ((!((!((max((arr_7 [i_0] [i_5] [4] [4]), var_15)))))));
                        arr_22 [i_6] [i_0] [i_6] [i_5] [i_6] = (max((((var_11 ? (arr_2 [i_0]) : (!var_11)))), ((~(arr_3 [i_7] [i_5])))));
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = (max(((((~10) > (arr_0 [i_0])))), ((9 ? var_10 : (arr_9 [8])))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_26 [i_0] [i_8] [12] = (((((arr_19 [i_8] [i_0] [i_0] [i_0]) - (((240 && (arr_4 [i_8]))))))) ? (arr_20 [i_0] [i_0] [i_0] [13] [i_0]) : ((((((arr_9 [i_8]) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : 1315439548656231845))) ? ((255 - (arr_25 [i_8]))) : var_7)));
            arr_27 [i_0] [i_0] = 1258885663;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_20 = (max((arr_34 [i_0] [12] [12] [i_12]), ((~(((arr_41 [i_0] [i_0] [13] [i_0] [i_0] [i_0]) + (arr_15 [i_0] [i_0])))))));
                            arr_42 [3] [i_12] [11] [i_12] [3] = (max((((arr_15 [i_0] [i_9]) ? (arr_16 [i_12] [3] [i_10]) : (((var_8 ? -107 : (arr_24 [i_10] [i_11 + 2] [i_12 + 2])))))), ((max(107, -107)))));
                            var_21 += (max((arr_14 [i_0]), (((arr_35 [12] [i_10 - 1] [i_12 - 1] [13] [i_12 - 1] [i_10]) ? 14 : (!var_0)))));
                        }
                    }
                }
            }
            arr_43 [i_0] [i_9] [i_9] = var_2;
            arr_44 [i_0] [i_9] [9] = (((((-(arr_30 [i_0] [i_9])))) ? (((-(arr_4 [i_0])))) : (arr_28 [i_9] [i_9])));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            arr_48 [i_13] = (arr_11 [i_0] [i_13] [i_0] [i_0] [i_0]);
            arr_49 [i_0] [i_0] [i_13] &= ((((9027 && (arr_24 [i_0] [i_0] [i_13]))) ? (arr_24 [0] [4] [i_0]) : (arr_28 [i_0] [i_0])));
        }
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        arr_53 [10] = ((((((arr_51 [i_14] [i_14]) + (arr_50 [i_14])))) ? var_7 : ((min((arr_51 [i_14] [i_14]), (arr_50 [i_14]))))));
        arr_54 [i_14] &= ((((max((~10), ((max(0, 7)))))) ^ ((~(min(var_3, var_9))))));
        arr_55 [i_14] [i_14] = (((arr_51 [i_14] [i_14]) ? (17 + 3885) : ((((max((arr_50 [i_14]), var_3))) ? ((min(61999, var_2))) : ((var_1 - (arr_52 [i_14])))))));
        arr_56 [i_14] = (~-var_12);
    }
    var_22 = (max(((-((var_2 ? 17293822569102704640 : var_7)))), (var_6 < var_11)));
    #pragma endscop
}
