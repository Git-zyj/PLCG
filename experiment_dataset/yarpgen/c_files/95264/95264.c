/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = -946591152;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((154 / (((arr_10 [i_4] [i_2] [i_2] [i_4] [i_4] [i_4] [i_2]) ? var_8 : var_6)))) < ((((var_5 >= ((var_0 ? var_10 : var_13))))))));
                                arr_12 [i_0] = (var_14 + 811942109474275326);
                                var_19 = ((((((-2301821762474129764 >= var_6) ? ((148556951 ? (arr_10 [i_2] [i_2] [i_2] [i_3] [6] [i_3] [i_2]) : var_15)) : ((min(var_0, var_5)))))) ? (((arr_3 [i_1]) ? (var_0 - var_13) : (((arr_2 [i_2]) ? (arr_11 [i_3]) : (arr_5 [i_0 - 1] [i_0 - 1]))))) : var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = (~-var_10);
                                var_20 = (i_0 % 2 == zero) ? ((((((var_14 ? ((9223372036854775807 - (arr_7 [i_0] [i_0] [i_2]))) : -var_1))) ? ((-(((arr_14 [i_0] [i_0] [i_0] [i_5] [i_6 + 1] [i_6]) ? 2192258541976839779 : (arr_1 [i_0] [i_6]))))) : ((var_1 ? (0 / var_9) : (arr_14 [0] [0] [i_2] [i_1] [i_0] [i_0])))))) : ((((((var_14 ? ((9223372036854775807 + (arr_7 [i_0] [i_0] [i_2]))) : -var_1))) ? ((-(((arr_14 [i_0] [i_0] [i_0] [i_5] [i_6 + 1] [i_6]) ? 2192258541976839779 : (arr_1 [i_0] [i_6]))))) : ((var_1 ? (0 / var_9) : (arr_14 [0] [0] [i_2] [i_1] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 -= ((((((min(72057594037927936, 26320))) ? var_6 : var_14)) != 192));
    var_22 = (min(((((var_2 & -178777356) < ((73 ? var_15 : var_4))))), (((28704 + 7606024140425717133) ? var_0 : ((9376676317293941453 ? var_13 : 32764))))));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_33 [i_8] [i_8] = (((var_11 | var_14) ? var_15 : ((((arr_28 [i_7 - 3] [i_7] [14] [19] [i_7 - 4]) ? (arr_31 [1] [i_7] [i_7] [i_7] [1]) : (arr_27 [5] [i_10 - 2] [i_8] [18]))))));
                                var_23 = ((-(arr_27 [3] [i_9] [i_9] [17])));
                            }
                        }
                    }
                    var_24 = (((~15494) ? (((var_10 ? var_4 : (arr_29 [i_7] [i_8] [i_7] [i_9])))) : (((arr_30 [i_9] [i_8] [i_8] [i_7]) ? var_14 : (arr_28 [5] [i_9] [i_7] [i_7] [i_7])))));
                    var_25 = (max(var_25, (~var_2)));
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 22;i_12 += 1)
                {
                    var_26 = ((-((15731730492341797893 ? var_8 : var_5))));
                    var_27 = (min(var_27, var_5));
                    var_28 ^= (((var_7 / var_2) * ((-1545193119 ? -13877 : 2966203495058381165))));
                }
                arr_38 [i_7] [i_8] [i_7] = -27900;
                arr_39 [i_7] [i_7] = (min(var_0, (((((var_0 ? (arr_32 [i_7 - 3] [i_8] [i_8] [i_8] [i_7] [8]) : (arr_36 [i_7] [i_8] [0] [i_8])))) ? ((min(-16537, (arr_31 [i_7] [7] [i_8] [i_7] [i_7])))) : (((arr_26 [i_7 + 1] [i_7 - 1] [i_8] [i_8]) ? var_3 : var_11))))));
                var_29 = ((~(((((var_2 << (((var_4 + 11603) - 12))))) ? ((-(arr_34 [i_7 - 3] [i_8] [i_8]))) : ((min(-1295732479, var_3)))))));
                arr_40 [i_7 + 1] [i_7] = (arr_37 [i_7] [i_7] [i_7]);
            }
        }
    }
    #pragma endscop
}
