/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((((var_14 / var_18) << (((!(arr_3 [i_0]))))))) == var_9));
                var_20 ^= ((-(arr_0 [i_0 - 4] [i_1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (-(((!(((18446744073709551615 ? var_12 : 0)))))));
                        var_22 = (max(var_22, ((((2157704535964655464 != -1497750774045483167) ? ((((arr_0 [i_0 - 1] [i_1]) / (arr_0 [i_0 - 4] [i_1])))) : (max((arr_7 [i_0 - 3] [i_3] [i_2] [i_3] [i_1] [i_2]), var_6)))))));
                    }
                    arr_9 [i_2] [i_1] [i_0] = (((arr_0 [i_0] [i_0]) * (!2)));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_23 = ((((arr_11 [i_0 - 4] [i_0 + 1] [i_1] [i_4]) ? var_14 : (arr_5 [i_4] [i_1] [i_0 - 4] [i_0 - 4]))));
                    arr_14 [i_0] [i_0] = 7318;
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_24 = (151 >= 1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_25 -= ((((((-109 / 118) ? (!var_13) : (arr_10 [i_7] [i_7 + 1] [i_7])))) ? ((max(var_2, 639944103))) : (((arr_12 [i_0] [i_1] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_7 + 1]) : (min(3904680814126109445, 7318))))));
                                var_26 ^= 19;
                                var_27 = (max(var_27, ((((var_8 ? (arr_5 [i_0] [i_6] [i_0] [i_0]) : 8388576))))));
                                var_28 = var_1;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_29 = 9223372036854775807;
                                arr_31 [i_0 + 1] [i_1] [i_8] [i_9] [i_10 + 1] = (!(arr_7 [i_9] [i_0 + 1] [i_10 + 2] [i_9] [i_9] [i_1]));
                                var_30 = (min(var_30, (((!((min(-3326300167475827399, (((-(arr_0 [7] [i_8]))))))))))));
                                var_31 = 7318;
                                arr_32 [i_8] [i_1] [i_8] [i_9] [i_10] = ((((-(arr_24 [i_0] [i_1] [i_8] [i_10 - 2] [i_10 + 1] [i_9])))) ? 6 : (arr_11 [i_10] [i_9] [i_1] [i_0 - 1]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_32 = (min(3649341536661770550, -43));
                                var_33 ^= var_17;
                                arr_38 [i_0] [i_0 - 4] [i_0] [i_0 - 4] [i_8] [i_0 - 4] [i_11] = (!var_16);
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = var_17;
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                {
                    var_35 = (max(var_35, var_3));
                    var_36 = (~0);
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_52 [i_13] [i_13] [i_13] = var_5;
                                var_37 = var_4;
                                var_38 -= ((var_8 ? ((((arr_47 [i_14 - 3] [i_15 + 3] [i_16 + 1] [i_17 - 1]) > ((var_7 ? var_6 : (arr_44 [i_14 + 1] [i_14 + 1] [i_13])))))) : ((var_12 ? (((!(arr_47 [i_13] [i_16] [i_14 + 2] [i_17])))) : (min(var_4, var_14))))));
                                var_39 = (~88);
                                var_40 = ((var_1 ? (((!(arr_51 [i_13])))) : ((((min(73, (arr_43 [i_17 - 2] [i_15] [i_13])))) ? ((max((arr_40 [i_13] [i_13]), (arr_45 [i_13] [i_14 - 3] [i_15 - 1] [i_16])))) : (((arr_41 [8] [i_14] [i_13]) ? (arr_51 [i_13]) : -1))))));
                            }
                        }
                    }
                    var_41 = (max(var_41, (((var_12 ? var_0 : (max((arr_46 [17] [i_14] [i_15 + 3] [i_14 + 2]), (arr_46 [i_13] [i_14] [i_15 - 1] [i_14 + 2]))))))));
                }
            }
        }
    }
    var_42 = var_4;
    #pragma endscop
}
