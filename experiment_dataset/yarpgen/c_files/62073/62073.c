/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = var_7;
                                var_20 = 4294967295;
                                var_21 = (arr_8 [i_0] [9] [i_0]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] = (max(((-((var_6 ? 14897 : (arr_0 [i_1 - 1]))))), var_18));
                    var_22 ^= (arr_4 [i_2] [6] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = ((((((14900 <= var_11) + (~14912)))) ? var_19 : (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) * ((-14915 ? var_4 : var_18))))));
                                var_24 = (min(var_24, (((((min((((var_16 ? var_3 : var_9))), ((14909 ? var_5 : 549751619584))))) ? (arr_10 [i_0] [i_5 - 1] [i_2] [i_1] [i_0]) : (arr_9 [i_6] [i_2 + 1] [15] [i_5 + 1]))))));
                                arr_24 [i_6] [i_1] [i_2] [i_1] [19] = ((-((72 ? (arr_3 [i_6] [i_5 - 1] [i_1 + 1]) : 14882))));
                                arr_25 [i_0] [i_0] [i_2] [i_5 + 1] [i_6] = var_12;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, (((~(min(((-24 ? 478410740 : var_15)), var_12)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [10] [i_0] [i_0] [10] [i_8] [i_0] = ((((~(var_6 <= 19))) != (((((-14930 ? var_16 : 237))) ? ((min(var_14, 1))) : -14934))));
                                arr_33 [i_1] [12] [i_8] [i_1] [i_1] = (((~var_12) <= 1562375830));
                                var_26 -= var_9;
                            }
                        }
                    }
                    arr_34 [i_7 - 1] [i_1] [i_1] [i_0] = (max(((max(((max(14919, (arr_21 [i_0] [i_0] [i_7] [i_7] [i_0] [i_1])))), 2147483642))), (((arr_2 [i_7 - 1] [i_1 - 2]) ? ((~(-9223372036854775807 - 1))) : (~var_5)))));
                }
                for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_27 = (arr_10 [i_0] [i_0] [i_0] [i_11] [i_0]);
                                var_28 += (((max(32, ((max(var_9, var_13))))) != 2147483642));
                                arr_45 [2] = (((var_10 <= (((arr_10 [i_0] [i_0] [i_10] [i_11] [i_12 - 1]) ? 14611200188973563400 : 63)))));
                            }
                        }
                    }
                    var_29 = var_9;
                    arr_46 [i_0] [i_0] [i_0] [i_0] = -var_14;
                }
                arr_47 [i_0] [i_0] [18] = var_9;
                arr_48 [i_0] = ((14905 ? (min((arr_31 [1] [1] [i_1] [1] [i_1 + 1]), var_10)) : (min((arr_31 [12] [i_1] [i_1] [i_1] [i_1 + 1]), (arr_31 [i_1] [i_1 - 3] [16] [i_1 - 3] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_30 = ((((max((arr_49 [i_0] [i_1] [i_13]), (1 <= 7)))) < ((min(var_18, 14902)))));
                                var_31 = (((arr_4 [i_0] [i_0] [i_0]) == (((~((7007 ? var_1 : (arr_2 [i_14] [i_15]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (min(var_14, var_15));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 17;i_17 += 1)
        {
            {
                arr_61 [i_16] = (((var_16 ? -3737018278834874369 : (arr_60 [i_16] [i_17]))));
                arr_62 [i_16] = (arr_3 [i_17 - 1] [i_17] [i_17 - 1]);
                arr_63 [i_16] [i_16] = var_12;
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        {
                            arr_68 [i_16] [i_17] [i_17] = (((((-((var_18 ? -5 : -834306486767212081))))) ? var_4 : ((((((arr_41 [i_18] [i_17]) ? 237 : var_4)) <= var_1)))));
                            var_33 = (max(var_33, 6));
                            arr_69 [i_16] [i_16] [i_16] [12] = (min(((min(var_15, var_16))), (29710 < var_13)));
                            var_34 &= ((((max(var_6, ((max(65518, var_12)))))) ? 4584221456749034761 : 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
