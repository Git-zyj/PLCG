/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (~var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (((((((var_8 ? -1339175328 : var_1)) | (~50)))) ? -2784642731230348726 : -3544088051410132121));
                    var_12 = (arr_4 [i_0] [i_0]);
                    arr_9 [i_0 + 1] [i_0 + 1] [i_0] = 7771650694575374526;
                }
            }
        }
        var_13 = (min(var_13, (!12570)));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_13 [2] = (max(((~(~3216607444))), ((((arr_6 [i_3] [i_3]) + (arr_5 [i_3]))))));
        arr_14 [i_3] = (max((~263914156), (-40 != 3544088051410132116)));
        var_14 = ((166 + (((!var_7) | -263914157))));
        var_15 ^= (((((((1 ? (arr_10 [i_3] [i_3]) : (arr_0 [i_3] [i_3]))) + 126))) ? (-118506823 / 22870) : ((-13185103300977464089 / (((0 ? var_3 : (arr_7 [i_3]))))))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_16 = (min(var_16, (((((min(var_5, (arr_15 [i_4 - 1])))) ? (max(-var_2, ((var_3 ? var_9 : var_2)))) : ((((arr_15 [i_4]) ? ((17992136231847109020 ? 24 : -1339175328)) : var_2))))))));
        arr_17 [i_4] = (((arr_15 [i_4 - 1]) ? -263914184 : 37));
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        var_17 = ((-23892 ? -16645 : var_2));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                {

                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_6] [i_5] [i_8] = var_11;
                        arr_32 [i_5] [i_6] [i_7 - 3] [i_5] = var_2;
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_18 = 102;
                        var_19 = (max(var_19, (((var_9 < ((max(1170248621, 201))))))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_20 ^= (max((~-54), (((arr_4 [2] [i_5 + 2]) * var_1))));
                        var_21 = (((((((~(arr_0 [i_10] [i_5]))) - 27589))) ? ((min((arr_28 [i_5] [i_5] [i_7] [4]), (arr_28 [i_5] [i_6] [i_7 - 4] [i_7 - 2])))) : (!-23895)));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_5 + 2] [i_5] [i_5] [i_5] [5] [i_5] = arr_4 [i_5] [i_6];
                        var_22 ^= -23900;
                    }
                    arr_42 [i_5] = ((~(min(var_5, ((-1 ? 6 : var_0))))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_23 = -6364;
                                var_24 *= ((var_11 ? 4948 : (var_8 ^ var_11)));
                                arr_48 [i_5] [i_5] [i_5] [i_12] [i_5] = (((max((arr_11 [i_5]), (45 / var_7))) * ((((~var_11) <= (((arr_24 [i_7] [i_7] [i_5] [i_7]) ? (arr_46 [i_5] [7] [i_5] [i_6] [i_7] [i_12] [i_13]) : 237)))))));
                                arr_49 [i_5] [i_6] [i_7] [i_5] [i_7] [0] [i_12 - 1] = (max(var_10, ((var_3 + ((min(var_10, (arr_35 [i_13] [i_13] [1] [i_13] [i_13] [i_13]))))))));
                            }
                        }
                    }
                    var_25 = (((((210 ? -38 : 118506823))) || var_10));
                    arr_50 [i_5] [i_5] [i_7] = (((arr_29 [i_5] [i_5] [8] [i_5]) << (max((var_5 != var_9), ((-(arr_0 [i_5] [i_5])))))));
                }
            }
        }
    }
    var_26 = ((!((max(1860663267, var_7)))));
    var_27 = var_11;
    #pragma endscop
}
