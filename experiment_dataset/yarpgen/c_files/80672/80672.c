/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [0] [i_1] [i_1] = ((var_3 ? ((((var_6 ? var_6 : var_5)) * (var_7 / var_15))) : (((((var_10 ? var_2 : var_17))) ? (max(var_14, var_16)) : (var_3 & var_5)))));
                            arr_12 [i_1] = ((((((((var_9 ? var_3 : var_8))) ? ((min(var_4, var_13))) : (max(var_4, var_6))))) ? ((((!(((var_8 ? var_9 : var_8))))))) : ((((max(var_7, var_17))) ? ((var_4 ? var_4 : var_6)) : var_9))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] = ((((((((var_18 ? var_7 : var_2))) ? (~var_13) : (var_10 ^ var_2)))) ^ (max(((var_10 ? var_15 : var_11)), (((var_0 ? var_13 : var_10)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1 + 1] [i_1 + 1] [6] [i_5 + 3] = var_11;
                            arr_23 [i_1] [i_1] [i_1] [i_1] = ((((((~var_5) ? ((var_0 ? var_3 : var_6)) : (((var_9 ? var_2 : var_4)))))) ? (((((((var_8 + 9223372036854775807) << (((var_7 + 104) - 40))))) ? ((var_4 ? var_13 : var_0)) : ((max(var_0, var_18)))))) : ((var_16 ? (((var_6 ? var_3 : var_7))) : ((var_15 ? var_4 : var_9))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_34 [i_0] [10] [i_6] [10] [i_8] &= ((((max((min(var_15, var_0)), var_0))) ? (((var_7 ^ var_6) ? var_1 : ((var_16 ? var_17 : var_14)))) : ((var_11 ? ((var_1 ? var_11 : var_14)) : (((var_4 ? var_12 : var_17)))))));
                                arr_35 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] = -var_10;
                                arr_36 [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_1] = min((((((var_12 ? var_13 : var_9))) ? (((min(var_2, var_3)))) : (max(var_11, var_14)))), ((((~var_4) * ((min(var_11, var_4)))))));
                                arr_37 [i_1] [i_6 - 1] [i_1] = (((((var_11 | var_5) ? (((var_15 + 9223372036854775807) >> var_11)) : ((var_12 ? var_8 : var_9))))) ? (((((var_4 ? var_15 : var_2))) ? (min(var_7, var_9)) : (var_13 % var_12))) : (((((min(var_2, var_17))) ? ((var_0 ? var_18 : var_5)) : ((var_11 ? var_4 : var_11))))));
                                arr_38 [i_1] [i_1 + 1] [3] [i_1 + 1] [i_1] [i_1] = (((((~((var_2 ? var_2 : var_4))))) ? (((((var_14 ? var_8 : var_6))) ? (min(var_4, var_16)) : ((var_7 ? var_14 : var_16)))) : (((-((min(var_5, var_12))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_48 [i_1] [i_11] [i_10] [i_9] [i_9] [i_1 + 1] [i_1] = ((~(((((var_3 ? var_4 : var_18))) ? ((max(var_4, var_10))) : ((var_1 ? var_6 : var_18))))));
                                arr_49 [i_0] [i_1 + 1] [i_1] [i_0] [i_11] = var_5;
                                arr_50 [14] [i_10] [i_1 - 1] [i_1 - 1] [14] = ((((((var_8 - var_17) ? ((var_15 ? var_10 : var_12)) : var_5))) ? (((((max(var_0, var_2)))) ^ ((var_10 ? var_9 : var_1)))) : ((var_8 ? (min(var_11, var_9)) : var_8))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_62 [i_12] [4] [i_14] &= (max((max(-var_7, var_9)), ((((max(var_2, var_5))) ? ((var_11 ? var_6 : var_11)) : (max(var_14, var_1))))));
                            arr_63 [i_12] [i_12] [i_12] [i_12] = (((((((var_0 ? var_18 : var_15)) * (var_18 / var_8)))) ? (max(((var_8 ? var_9 : var_12)), ((max(var_4, var_7))))) : (((((var_15 ? var_14 : var_12))) ? var_15 : ((var_5 ? var_6 : var_12))))));
                            arr_64 [i_12] [i_14] [i_13] [i_12] = ((((((max(var_7, var_11))) ? (max(var_14, var_15)) : ((var_5 ? var_13 : var_16)))) | ((var_4 ? (var_9 / var_10) : ((var_9 ? var_4 : var_8))))));
                            arr_65 [i_13] [i_12] [i_13] [i_13] [i_13] = ((((((~var_15) ? ((var_15 ? var_8 : var_15)) : ((var_9 ? var_14 : var_1))))) ? -var_5 : (((((var_16 ? var_8 : var_13))) ? (((var_12 ? var_2 : var_5))) : ((var_1 ? var_10 : var_18))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                arr_76 [11] [i_13] [i_16] [i_17] [i_12] [i_16] [10] = ((((((~var_2) ? (((var_1 ? var_13 : var_5))) : ((var_10 ? var_10 : var_15))))) ? (((((var_11 ? var_17 : var_15)) > (min(var_16, var_7))))) : (((((var_11 ? var_3 : var_1)) != (((var_2 << (var_17 - 47352)))))))));
                                arr_77 [i_12 - 1] [i_13] [8] [i_17] [8] [i_17] = (max(((min(((max(var_7, var_17))), (min(var_1, var_1))))), (max((max(var_6, var_11)), ((min(var_12, var_0)))))));
                                arr_78 [i_12] [i_13] [10] [i_13] [i_13] = (((((((max(var_1, var_2))) ^ (max(var_4, var_9))))) ? ((((((max(var_17, var_1))) || (var_3 || var_15))))) : (((!var_7) ? (!var_5) : ((var_13 ? var_11 : var_16))))));
                                arr_79 [i_12] = ((var_10 ? (((min(var_11, var_11)) ? (max(var_18, var_15)) : var_4)) : (((-((max(var_4, var_2))))))));
                            }
                        }
                    }
                }
                arr_80 [i_12] [i_13] = (max((max((var_16 ^ var_11), (((var_3 ? var_0 : var_13))))), var_2));
                arr_81 [8] [i_13] = ((((min(((var_11 ? var_18 : var_8)), (((var_5 ? var_11 : var_3)))))) ? (max(((var_4 ? var_14 : var_7)), (min(var_13, var_8)))) : ((-var_13 ? ((var_6 ? var_0 : var_9)) : (((max(var_0, var_7))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        for (int i_20 = 2; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 23;i_21 += 1)
            {
                {
                    arr_90 [i_19] [0] [i_19] = ((((max((var_16 ^ var_8), (((var_15 ? var_5 : var_12)))))) ? (((((var_17 ? var_1 : var_6))) ? var_10 : ((var_5 ? var_6 : var_0)))) : var_12));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            {
                                arr_97 [3] [i_19] = (var_9 ? ((((max(var_13, var_14))) ? (var_6 ^ var_10) : (max(var_8, var_2)))) : var_14);
                                arr_98 [i_19] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_24 = 1; i_24 < 13;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 14;i_25 += 1)
        {
            {
                arr_105 [i_24 + 1] = ((((((var_3 <= var_0) ? ((var_5 ? var_14 : var_3)) : (max(var_15, var_11))))) ? (min(var_2, ((var_12 ? var_13 : var_8)))) : (((((var_7 ? var_3 : var_16))) ? ((var_11 ? var_14 : var_7)) : (~var_3)))));
                arr_106 [i_24 + 1] [i_25] [i_24 + 1] = ((((((((var_7 ? var_14 : var_14))) ? ((var_8 ? var_16 : var_7)) : (((var_12 ? var_18 : var_17)))))) ? var_2 : ((-((var_8 ? var_4 : var_11))))));
                /* LoopNest 3 */
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        for (int i_28 = 3; i_28 < 13;i_28 += 1)
                        {
                            {
                                arr_114 [i_26] [3] [i_26] [3] [i_24] [i_26] = (max(var_5, (((((var_15 ? var_2 : var_2))) ? var_5 : ((var_10 ? var_0 : var_9))))));
                                arr_115 [i_26] [i_25] [i_26] [10] [i_27] [i_28] = (((((((var_3 ? var_1 : var_14))) || (((var_16 ? var_10 : var_12))))) ? ((((((var_9 ? var_2 : var_15))) ? (((var_0 ? var_5 : var_0))) : ((var_9 ? var_1 : var_4))))) : (((((var_3 ? var_1 : var_0))) ? var_6 : ((max(var_13, var_13)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((((var_18 ? var_17 : var_1))) ? ((var_0 ? var_14 : var_8)) : (((var_7 ? var_13 : var_2)))))) ? (max((((var_3 ? var_18 : var_5))), ((var_16 ? var_6 : var_4)))) : (max(((var_12 ? var_6 : var_3)), ((var_0 ? var_7 : var_8))))));
    #pragma endscop
}
