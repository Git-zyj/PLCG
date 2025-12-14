/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, (((var_0 ? 57 : (((var_3 < (arr_6 [i_3] [i_2 - 3] [i_1])))))))));
                                var_11 = (((((min(123, var_2))))) ? (max(((var_6 ? var_1 : var_4)), var_6)) : ((((var_8 < ((-121503712607488096 ? 57 : 3372684429738859927)))))));
                                var_12 = (min(var_12, (((121503712607488095 >> ((((4998907362473562164 ? 948635640 : 5329499585661699357)) - 948635614)))))));
                                var_13 = var_7;
                            }
                        }
                    }
                    var_14 = (arr_0 [i_0] [i_0]);
                    var_15 = var_4;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_16 = (min((((~var_1) ? ((~(arr_6 [i_0] [i_0] [i_5]))) : (arr_1 [i_2 - 2] [i_0 + 2]))), ((((!-948635662) || var_1)))));
                        var_17 = (min(var_17, (((~((((-1699826745363309828 ? var_7 : var_4)) - (!var_4))))))));

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_18 = (max(var_18, ((((-121503712607488096 | 5) < (((((var_8 ? (arr_13 [i_6 + 2] [0] [i_2] [i_0]) : var_7))) ? (((var_2 / (arr_7 [i_1] [i_2 - 1] [i_1])))) : (min(var_2, -4501569593267167990)))))))));
                            var_19 = (((((arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 3]) ^ var_4)) - ((((var_6 * var_0) - ((min(var_7, var_5))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_20 = var_0;
                                var_21 = ((~(((var_8 + 2147483647) << (((var_5 | var_6) - 159))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            {
                var_22 ^= ((((((max(var_8, var_7))) ? (((var_1 ? var_2 : var_0))) : (-121503712607488095 | 4501569593267167990))) == (((var_6 ? var_9 : var_1)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_35 [i_10 - 2] [i_11] [i_10 - 2] [i_9] = (((!var_7) ? (arr_1 [i_12] [i_12]) : 9));
                            arr_36 [i_11] = (arr_34 [i_9] [0] [i_12 + 1] [i_12 + 1]);
                            var_23 = (max(var_23, (((((min(var_3, 84))) ? (max(var_4, (arr_10 [i_9] [i_12] [i_11] [i_12] [i_10] [i_10]))) : (((var_0 ? var_0 : var_2))))))));
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {

                    for (int i_14 = 3; i_14 < 10;i_14 += 1)
                    {
                        arr_43 [i_14 + 2] [i_13] [i_10] [i_9] [i_9] [i_9] = (((((var_5 ? var_5 : 1))) | (((57 ? ((var_8 ? var_2 : var_3)) : 142)))));
                        var_24 &= (((((1 | ((var_6 ? var_9 : -121503712607488090))))) || (((~((47 ? -4501569593267167990 : 45)))))));
                    }
                    arr_44 [i_9] [i_9] [i_13] &= ((((max(var_2, (arr_20 [i_10 + 1] [i_10] [16])))) * (((arr_5 [i_10] [i_10 + 1] [i_10]) / var_9))));

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_25 = (min(var_25, (((var_9 * ((var_7 ? var_8 : var_4)))))));

                        for (int i_16 = 4; i_16 < 11;i_16 += 1)
                        {
                            arr_49 [i_9] &= (((((var_8 / var_3) ? (((arr_6 [i_13] [i_10] [i_9]) ? var_2 : 237)) : (arr_46 [i_9] [i_10 + 2] [i_15] [i_16 + 2]))) << (var_5 - 18)));
                            arr_50 [i_9] [i_9] [i_13] [i_13] [i_9] [i_9] = var_3;
                        }
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            arr_54 [i_17] [i_15] [10] [i_13] [6] [6] [i_9] = (((var_0 / (((var_5 < (arr_5 [i_17] [i_13] [i_15])))))) | var_6);
                            var_26 = ((var_5 > ((max((arr_13 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2]), var_8)))));
                        }
                        var_27 = var_4;
                        arr_55 [i_15] [i_9] [i_10] [i_9] = (max((max(var_4, 1)), (~var_3)));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_62 [i_9] [0] [i_10] [9] [9] [i_19] [i_19] = (min((var_9 ^ var_3), (((max(var_6, 5329499585661699351)) ^ var_4))));
                                arr_63 [i_9] [i_9] [i_9] = var_0;
                                arr_64 [i_9] [i_10 + 2] [i_9] [i_18] [i_19] = (min(((((arr_12 [i_10] [i_10] [i_10 + 1] [i_10 + 1]) % (arr_12 [i_9] [i_9] [i_10] [i_10 - 2])))), 8070450532247928832));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
