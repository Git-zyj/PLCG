/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (!(~var_5));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [i_3] [i_1] [i_1] [i_3 - 1] [i_4] = 16631;
                                arr_19 [i_3] [i_3] = (!var_10);
                            }
                        }
                    }
                }
                var_15 *= var_12;
                arr_20 [i_0] [i_1] = (arr_7 [i_0] [i_0] [4]);
                var_16 = arr_17 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [6] [i_0];
            }
        }
    }
    var_17 = var_10;
    var_18 = (48905 <= 48905);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_19 = (min(var_19, var_0));
                    arr_30 [4] [i_7] = var_1;
                }

                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_20 = var_7;
                        var_21 -= 48888;
                    }
                    arr_38 [7] [i_8] = (((((arr_26 [i_5]) < (var_5 <= 48905))) ? (arr_35 [i_6] [i_6] [i_6] [4]) : (((max(var_7, var_11))))));

                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        arr_41 [i_5] [i_10] = arr_33 [i_5] [i_6] [0];
                        arr_42 [i_10] [3] [i_8] [i_10 + 2] [i_5] [3] = var_9;
                        arr_43 [i_5] [i_10] = (+-47);
                        var_22 = (((((arr_32 [i_5] [i_5] [7]) ? var_9 : (~var_1)))) ? (~16623) : (arr_28 [i_5] [i_5] [i_5] [i_10]));
                    }
                    var_23 = var_1;
                    var_24 = (max(var_24, (((var_5 ? (min(var_2, var_13)) : (var_2 || var_6))))));
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    var_25 &= (((-((max(var_2, var_2))))));

                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        var_26 = (((arr_27 [i_5]) ? (((-114 <= (max(var_14, var_1))))) : (arr_40 [i_12] [i_6])));
                        var_27 = (max(var_27, ((92 ? (8144413097553195561 / 48901) : (arr_47 [i_5] [i_6])))));
                        var_28 = var_6;

                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            arr_51 [i_5] [i_6] [4] [i_5] [i_12] [i_5] = var_1;
                            arr_52 [4] [i_6] [i_12] [i_13] = var_1;
                            var_29 = (((arr_27 [i_13]) ? -109 : -69));
                            var_30 = ((var_7 ? var_2 : ((8 ? -92 : 0))));
                            arr_53 [2] [i_12] = var_8;
                        }
                    }
                    for (int i_14 = 4; i_14 < 11;i_14 += 1)
                    {
                        var_31 = ((var_0 ^ (16623 || 59)));
                        arr_56 [5] [11] [i_11] [i_14] [i_6] = var_14;
                    }
                    var_32 = var_10;

                    for (int i_15 = 3; i_15 < 11;i_15 += 1)
                    {
                        var_33 = ((!((((1 ? var_5 : (-9223372036854775807 - 1))) <= 67))));
                        var_34 = 9223372036854775789;
                    }
                    var_35 = (max(var_35, ((((((arr_22 [i_11]) <= (arr_25 [i_5] [i_5]))) || (!114))))));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_36 ^= var_0;
                    var_37 = (min(var_37, (var_12 ^ 1)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_38 = ((~(var_0 ^ var_10)));
                                var_39 = 62;
                            }
                        }
                    }
                    arr_70 [3] [i_6] [i_6] [i_5] = (((arr_49 [i_6] [i_5] [8] [i_5] [i_16]) && var_8));
                }
                var_40 = (min(var_40, (((-(arr_35 [i_5] [i_5] [11] [i_6]))))));
                var_41 = (arr_54 [i_5] [i_5] [i_5] [i_5] [i_5]);
            }
        }
    }
    #pragma endscop
}
