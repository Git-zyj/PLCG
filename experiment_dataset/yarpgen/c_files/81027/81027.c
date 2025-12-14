/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 ^= ((116 ? 68719476735 : 1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = var_1;
                    var_13 = (((var_7 - 195) - (arr_1 [i_0] [i_1])));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_14 = (max((((arr_2 [i_5 + 1] [i_0 - 1]) ? (arr_2 [i_5 - 2] [i_0 - 1]) : (arr_2 [i_5 + 2] [i_0 - 2]))), ((var_6 / (arr_2 [i_5 + 4] [i_0 - 1])))));
                                var_15 *= ((((((((var_4 ? 116 : 975888566))) ? 0 : 126))) || (arr_2 [i_1] [i_1])));
                            }
                        }
                    }
                    var_16 ^= var_1;
                    var_17 ^= (((((~(11955 >> 1)))) * var_7));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_6] [i_3] [i_0] [i_0] [i_0] [i_0 - 1] = (((max((arr_18 [i_0 - 1]), ((var_2 ? var_8 : var_7)))) << ((((max(116, 1))) - 102))));
                        var_18 = (arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 1]);

                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, (!115)));
                            arr_26 [i_1] [i_1] [i_1] &= ((219 ? (arr_1 [i_0] [i_6]) : (((!(1 && -1885749838))))));
                            var_20 *= var_5;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_21 = -1885749837;
                            var_22 += ((((((var_0 & 1) ? (arr_12 [i_0] [i_1]) : ((var_4 ? var_5 : (arr_20 [i_0 + 1] [i_1] [i_3] [i_6] [i_8])))))) ? (((((((arr_1 [i_3] [i_3]) ? (arr_23 [i_0] [i_1] [i_0] [i_6] [i_8] [i_8] [i_8]) : var_9))) <= var_10))) : (arr_25 [i_1] [i_0] [i_1] [i_3] [i_6] [i_6] [i_8])));
                            var_23 = (max(var_23, ((171 ? 1 : -3517))));
                            var_24 = (max(var_24, 4294967295));
                        }
                        var_25 &= ((((11956 <= (arr_11 [i_0] [i_0] [i_0 - 2] [i_1]))) ? 219 : ((var_6 - (arr_11 [i_0] [i_1] [i_0 - 1] [i_1])))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_26 ^= -1938073597;
                        var_27 = (max(var_27, var_1));
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_28 += ((!(((3828632457 ? 2802297123 : 2)))));
                                arr_40 [i_0 - 2] [i_1] [i_0] [i_11] [i_12] [i_12] = (((((!var_5) ? (!1) : 1))) != (min(var_10, (arr_25 [i_0] [i_1] [i_12 + 1] [i_12] [i_12 - 4] [i_12] [i_12 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((((min(var_7, (!var_1)))) ? (arr_52 [i_13] [i_14] [i_13] [i_16] [i_17] [i_13]) : (3828632457 & var_0))))));
                                var_30 = 0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        {

                            for (int i_20 = 1; i_20 < 10;i_20 += 1)
                            {
                                arr_61 [i_18] [i_20] = 1;
                                var_31 ^= (max((arr_31 [i_20 + 2] [i_18] [i_13] [i_13]), (arr_9 [i_14] [i_19] [i_14] [i_20])));
                            }
                            var_32 = (max(156, (-106 & 140737487306752)));
                            var_33 = ((((((((arr_28 [i_14] [i_18] [i_14] [i_13] [i_13]) << (139 - 121))) + (1 || 84)))) ? -693292465 : var_5));

                            for (int i_21 = 0; i_21 < 13;i_21 += 1)
                            {
                                arr_64 [i_18] = (-((-45 ? -17944 : 33)));
                                var_34 |= ((((((((-(arr_46 [i_13])))) ? (arr_60 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13] [i_14 + 2] [i_21] [i_21]) : (((arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 - 1]) ? var_8 : var_7))))) ? ((((!var_4) ? (arr_53 [i_14] [i_14] [i_14] [i_14] [i_14]) : (((arr_20 [18] [i_14] [i_18] [i_19] [i_21]) ? 182 : 30))))) : (((70368744177663 / -512) / var_3))));
                            }
                            for (int i_22 = 1; i_22 < 9;i_22 += 1)
                            {
                                var_35 = ((-(~-284)));
                                var_36 ^= (arr_56 [i_13] [i_14] [i_18]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
