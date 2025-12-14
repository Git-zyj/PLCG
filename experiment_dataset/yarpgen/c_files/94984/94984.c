/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_11, -var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] = ((((((arr_5 [i_0 - 1] [i_1] [i_2] [i_2]) ? 255 : 1516703949))) ? (arr_1 [i_0 - 1]) : -var_15));
                    arr_9 [i_2] [i_2] = ((-(arr_5 [i_0] [i_0] [i_2] [i_1 + 1])));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((((((((-1 ? var_17 : 536870911))) ? ((((arr_10 [i_3] [i_1 - 3] [i_0]) < -1765))) : 0))) && var_0)))));
                    var_20 ^= (((arr_10 [i_0 - 1] [i_0 + 2] [i_0 + 2]) ? 0 : (-17 && 27471)));
                    var_21 += -22009;
                    var_22 ^= -var_1;
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_23 -= (max(var_2, -27471));
                    arr_14 [i_4] [i_1] [i_4] = (((((((-(arr_4 [i_0] [i_0]))) | (arr_10 [i_1] [i_1 - 2] [8])))) ? var_1 : -0));
                    var_24 = -29294;
                    var_25 = ((((max(-var_16, (((255 ? var_15 : (arr_6 [i_0] [i_1 + 1] [i_4] [4]))))))) ? var_14 : (((255 ? 27471 : 176)))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_26 = (((~250) != (arr_7 [i_1] [i_1] [i_1] [i_1])));
                                arr_21 [i_6] [i_5] = (arr_1 [i_5]);
                                var_27 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_28 = (arr_10 [i_1] [i_1 + 2] [i_1]);
                                arr_27 [i_0 + 2] [i_1 + 3] [i_5] [i_8] [i_9] = ((var_9 ? (((-818314451 ? 255 : (arr_11 [i_0] [i_0] [i_0] [i_0])))) : 27465));
                                arr_28 [i_0] [i_0] [i_0] [6] [i_8] [i_9] = (-(((((var_3 ? var_10 : 11))) ? ((max((arr_10 [i_5] [i_8] [i_8]), (arr_23 [i_9] [i_5] [i_5] [i_1])))) : 134)));
                            }
                        }
                    }
                    var_29 = ((1152780767118491648 ^ (((var_11 + (arr_4 [i_1] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_35 [i_0] [0] [i_0] [i_0] [i_0] [i_0] = (((((250 ? 255 : (arr_26 [i_1 - 3])))) ? -6 : (max(var_5, (arr_6 [i_5] [i_0 - 1] [i_10] [i_1 + 1])))));
                                arr_36 [1] [i_11] [i_5] [i_10] [i_11] = ((min(242, (-2147483647 - 1))) % 446166957);
                                arr_37 [i_11] [i_10] [i_5] [8] [i_0] = (((arr_17 [i_0] [i_1] [i_5] [i_10] [i_10]) ? ((((((0 ? 27487 : 255))) ? (arr_15 [i_0 + 2] [i_1 + 3]) : (arr_29 [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))) : (arr_22 [i_0] [i_0 + 2] [i_0] [i_0 - 1])));
                                arr_38 [i_0 - 1] [i_1] [i_5] [i_10] [i_11] [9] [i_1 - 3] = ((255 ? ((255 ? 5 : -783280517)) : ((((2146435072 ? 14813 : var_12)) + ((max(249, -127)))))));
                            }
                        }
                    }
                    arr_39 [i_5] [i_0] [i_0] = -1;
                }
                arr_40 [i_0] [9] = 1048575;
                var_30 = (min(var_30, (((-((-((min(var_0, var_13))))))))));
            }
        }
    }
    #pragma endscop
}
