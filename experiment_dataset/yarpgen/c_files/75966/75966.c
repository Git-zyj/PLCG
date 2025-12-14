/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ^ ((1 ? 4294967281 : 1))));
    var_21 = ((((min(((max(var_4, var_3))), ((1 ? 1 : 1))))) ? var_4 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(((((var_7 ? var_15 : var_1)) % (((var_15 >= (arr_5 [i_1])))))), ((min(1, 244)))));
                var_22 = ((var_15 ? (((min(var_12, (arr_0 [i_0] [i_1]))) ? var_3 : (((1 <= (arr_6 [i_1])))))) : ((((min(var_5, (arr_3 [i_0])))) ? ((var_11 ? 7 : var_13)) : ((1 ? var_9 : var_7))))));
                arr_8 [9] [i_1] [i_1] = (((((((var_16 ? 1 : (arr_1 [i_0]))) - var_15))) ? (max(((128 ? 1 : var_10)), ((1 ? var_10 : var_11)))) : var_12));
            }
        }
    }
    var_23 = var_10;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = var_7;
        var_24 = (((min(var_2, (1 + 1))) % ((min(35955, 1)))));
        var_25 = 19;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_26 = var_3;
        arr_14 [i_3] = ((255 ? 255 : 3848507170));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                {
                    var_27 = ((((((arr_20 [i_5] [i_4] [i_5 + 2]) ? 24 : 1))) ? (((((1 ? 1 : 1))) ? (~93) : (((arr_10 [i_4] [i_4]) + var_14)))) : var_12));
                    arr_23 [i_4] [i_5] [i_4] = (max(var_9, ((((var_10 ? var_1 : (arr_21 [i_4] [i_4] [i_4]))) ^ ((var_10 ? var_12 : (arr_17 [i_4])))))));
                    arr_24 [i_4] = ((((min(((1 ? 1 : (arr_15 [i_4]))), 68))) ? ((min((min(1, (arr_12 [i_5 + 2] [i_5 + 2]))), (((1 >= (arr_16 [i_6]))))))) : 0));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_28 = (min(var_28, (min(((((((var_1 ? (arr_29 [i_7] [2] [i_8] [14] [i_9] [i_9]) : var_9))) ? 1 : ((min((arr_20 [i_7] [i_9] [i_9]), (arr_28 [i_9] [1] [i_8] [i_9]))))))), (((arr_15 [i_9]) ? ((1 ^ (arr_13 [i_8]))) : var_4))))));

                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_29 = ((((((max(var_16, var_3))) != ((min(var_7, (arr_31 [i_4 - 1] [6] [i_8] [i_4] [6])))))) ? ((min(var_19, (arr_20 [i_9] [i_4] [i_4 - 1])))) : (min((((arr_10 [i_4 - 1] [i_4 - 1]) + (arr_17 [i_10 - 1]))), ((var_17 ? var_5 : var_6))))));
                            arr_33 [i_4] [i_8 + 2] [i_9] = (((((36 >= 1) ? ((42009 ? var_0 : 1610612736)) : ((((var_15 >= (arr_18 [i_4]))))))) % ((max((((arr_28 [i_4] [i_8 + 1] [i_9] [i_10 - 1]) ? 40 : var_1)), (arr_25 [i_4 - 1]))))));
                            arr_34 [i_4] [i_4] [7] [i_4] [i_4] [i_4 - 1] = ((((94 ? 23527 : 84)) - (((arr_13 [i_4 - 1]) ? 1 : (arr_27 [i_4 - 1] [i_8 + 1])))));
                            arr_35 [i_4] [i_8 + 3] = min((min((arr_28 [i_4] [i_10 - 1] [i_8] [i_8 - 1]), (arr_28 [i_4] [i_10 + 1] [i_10 + 1] [i_8 - 1]))), (arr_32 [i_4] [i_7] [i_8] [i_7] [i_7] [6]));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_30 = (((((((var_18 ? (arr_19 [i_4] [i_4]) : 1)) * ((var_3 * (arr_27 [i_4] [i_11])))))) ? (max((((arr_32 [i_7] [i_9] [i_8] [i_8 + 2] [i_7] [i_4]) ? var_13 : var_4)), var_7)) : ((((4276457882 ? 1 : var_2)) & (arr_12 [i_9] [i_11])))));
                            var_31 = (max((arr_38 [i_4] [i_7] [i_7] [i_8] [i_8] [i_9] [i_11]), ((((((arr_10 [i_7] [i_11]) ? 30 : var_11)) >= ((max(var_9, var_9))))))));
                            arr_40 [i_4] [i_4] = ((((min(0, var_15))) ? (max((arr_38 [i_11] [i_7] [i_8] [i_8] [i_7] [i_4 - 1] [i_4]), ((216 ? var_18 : var_3)))) : (arr_19 [i_4] [i_8])));
                            arr_41 [i_4] [i_11] [i_9] [i_7] [i_4 - 1] [i_7] [i_4] = ((min(var_18, ((63 % (arr_10 [i_4] [i_4]))))));
                            var_32 = (((var_2 - var_15) + (((1 ^ 3435681011) % var_13))));
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_33 = var_0;
                            var_34 = 50001;
                        }
                        for (int i_13 = 2; i_13 < 13;i_13 += 1)
                        {
                            var_35 = max((arr_10 [i_4] [i_7]), 41);
                            arr_48 [i_7] [i_7] [i_7] [i_4] [i_7] [i_7] = ((((((((var_1 ? (arr_10 [i_4] [i_4]) : (arr_31 [i_4] [i_7] [i_8] [i_4] [i_13])))) ? (arr_31 [i_13 + 2] [i_4] [i_9] [i_4] [i_8 + 3]) : ((3435681011 ? var_8 : var_12))))) % ((((((arr_18 [i_4]) ? var_8 : 4))) ? var_10 : ((var_4 ? var_19 : 16777215))))));
                            var_36 = (((1 >= 3435681027) ? ((((44 ? 1 : 120)) % -var_19)) : ((((min(var_12, 37182))) ? var_17 : (arr_45 [i_4 - 1] [i_4 - 1] [i_8 + 3] [i_9])))));
                        }
                        var_37 = (((arr_26 [i_7] [1] [i_7]) ? (min((1 & 169), (min((arr_39 [i_4]), 115)))) : 1));
                        var_38 = 1;
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_39 = ((1 ? (((((arr_45 [i_14] [i_14 - 1] [i_14] [i_14 - 1]) ? var_1 : (arr_45 [i_14] [1] [1] [i_14]))) ^ (var_17 ^ var_1))) : (((((var_7 << (71 - 57)))) ? ((var_8 ? var_18 : 222)) : ((max((arr_22 [i_14]), 235)))))));
        var_40 = (min((184 + 1), 0));
        arr_52 [i_14] = ((((((((1 ? var_16 : var_13))) ? (arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1]) : ((var_8 ? (arr_46 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] [i_14] [i_14]) : var_4))))) ? var_10 : (1 >= var_5)));
    }
    #pragma endscop
}
