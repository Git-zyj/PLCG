/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~3062007716611397960);
    var_12 = ((((-(~var_9))) != ((((min(6901778998647815851, 251)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = ((!(var_10 % 4)));
                                var_14 = var_1;
                                var_15 = (23688 ? -var_3 : (2 / var_4));
                                var_16 = (max(var_16, (((!-var_7) ? -124 : ((((((var_6 ? var_2 : var_0))) || (var_10 | var_1))))))));
                            }
                        }
                    }
                }
                var_17 ^= ((~(~-var_2)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] = ((((!((min(56524, (arr_22 [20] [i_6] [9] [i_8])))))) ? (((var_6 ? -var_1 : var_4))) : (arr_21 [i_5] [i_6])));
                            var_18 = (max(var_18, var_1));
                            var_19 = (max(var_19, (((-(min(((0 ? var_3 : var_9)), (~var_2))))))));
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    arr_28 [i_5 + 1] [i_9] = var_8;
                    arr_29 [i_9] [i_6] [i_9] = ((var_6 ? (((arr_25 [i_5]) ? var_10 : ((((arr_20 [i_5 + 3] [0] [19]) ? 124 : var_4))))) : (((~(((var_8 < (arr_12 [i_6])))))))));
                    var_20 = ((!(~var_4)));
                    var_21 ^= 2042451995050909482;
                }
                for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        var_22 = (min(var_22, var_9));
                        arr_34 [i_10] [i_10] = (!var_10);
                        var_23 ^= (arr_21 [i_5 + 2] [i_10 + 1]);
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_24 = var_5;
                        arr_37 [i_10] [i_10] [i_6] [i_10] = (!1308036104277887053);
                        var_25 = var_9;
                    }
                    arr_38 [i_10] = ((((-(arr_25 [i_10])))));
                }
                var_26 = (+(((((max((-32767 - 1), var_2)))) % var_10)));
                var_27 = ((((min((max(var_10, 127)), ((var_8 ? (arr_26 [i_5] [i_5] [i_6]) : var_1))))) ? var_1 : 4379489733029919443));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 4; i_15 < 21;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_28 ^= ((!(((-(!var_9))))));
                                arr_54 [i_13] [i_14] [i_15] [i_14] [i_14] [i_13] = var_3;
                                var_29 = (((arr_25 [i_15 + 1]) ? (arr_12 [i_17 - 1]) : var_4));
                                var_30 = (((var_6 ? (arr_44 [i_16 + 1] [i_16 + 1] [i_15 - 3]) : var_5)));
                            }
                        }
                    }

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_31 ^= (((((var_4 & (arr_26 [0] [7] [i_15 - 3])))) ? (~146) : ((((((arr_31 [i_13] [i_13]) ? (arr_48 [i_13] [i_14] [i_14] [i_18]) : var_2)) >= ((253 ? var_3 : var_0)))))));
                        var_32 = ((-(((~-124) ? 226 : -124))));
                        var_33 ^= ((((((1 ? var_7 : var_6))) ? -var_7 : ((var_0 ? var_0 : var_1)))) * (~64));
                        var_34 ^= ((-((var_10 ? var_8 : 54061))));
                        var_35 = (((~var_1) ? (((((var_1 ? var_4 : var_3))) ? (arr_20 [0] [i_14] [i_14]) : var_0)) : ((((var_4 / (arr_47 [i_13] [i_13] [i_13])))))));
                    }
                    var_36 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
