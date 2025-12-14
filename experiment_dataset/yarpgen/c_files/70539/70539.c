/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = ((!(!54026)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [3] [i_4] = 62880;
                                var_21 += ((((((arr_7 [i_0 + 1] [i_1] [i_4]) ? (arr_10 [i_4] [i_3] [i_2] [i_1 - 1] [i_0 + 1]) : (arr_10 [i_0] [i_1 + 1] [i_2] [i_0 - 2] [i_4])))) ? 0 : (min((((var_10 <= (arr_8 [i_3] [i_2] [i_0 - 2] [i_0 - 2])))), ((~(arr_2 [i_4])))))));
                                var_22 = ((11510 ? (arr_9 [i_0 - 2]) : (((3405528136 ? (((var_4 > (arr_1 [i_3])))) : 11502)))));
                                arr_14 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(54025, ((min((arr_11 [1] [i_3] [1] [i_3] [i_3]), (arr_11 [i_4] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_0 + 1]))))));
                            }
                        }
                    }
                    var_23 |= (max(0, 1));
                    arr_15 [i_0] [i_1 + 2] [i_2] [i_0 - 1] = var_19;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_30 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] = var_14;
                                var_24 = (min((min((arr_1 [i_6]), (arr_1 [i_8]))), (((arr_1 [i_6]) ? (arr_1 [i_7]) : 1))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_36 [i_11] [i_6] [i_5] = ((((((((var_8 ? var_14 : var_3))) && ((min((arr_29 [i_5] [3] [i_6] [i_10] [i_11]), (arr_17 [i_7]))))))) < (min(((~(arr_33 [i_5] [i_6] [i_7] [i_10] [i_7]))), ((0 ? (arr_17 [0]) : var_12))))));
                            var_25 *= var_0;
                        }

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_26 -= ((3405528136 ? 889439160 : 11502));
                            arr_39 [i_5] [i_6] [i_7] [i_10] [0] &= ((!((max((arr_27 [6] [i_10] [i_7] [6]), (arr_27 [i_5] [i_6] [i_7] [4]))))));
                        }
                        arr_40 [i_6] [8] [i_6] [i_6] = (max((min((arr_17 [i_6]), (arr_6 [i_5] [7] [7] [i_5]))), ((((arr_17 [i_5]) ? (arr_17 [i_5]) : (arr_1 [i_5]))))));
                        var_27 = 5552;
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_28 = ((~(max(1, (arr_6 [i_13] [i_7] [i_6] [i_5])))));
                        var_29 = arr_35 [i_6];

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_46 [i_6] [i_6] = (11509 > 16214621434975064041);
                            var_30 = 879284301;
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_31 = (arr_49 [i_5] [i_6]);
                            var_32 = (min(((-(arr_27 [i_5] [i_5] [i_5] [i_6]))), -98));
                            var_33 = ((12769500209733866151 ? (arr_10 [i_15] [i_13] [i_7] [i_6] [i_5]) : (arr_27 [7] [9] [4] [i_6])));
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            arr_52 [i_6] [i_6] = (((arr_4 [i_6]) ? ((((!(arr_4 [i_5]))))) : (max(33850, (arr_6 [i_5] [i_5] [i_5] [i_5])))));
                            arr_53 [i_6] [i_6] [i_6] [i_13] [i_16] = (arr_4 [i_6]);
                            var_34 = ((889439161 ? ((-((132 ? var_16 : 60284)))) : (min(((var_10 ? -122 : -17296)), (var_16 <= var_6)))));
                        }
                    }
                }
            }
        }
        var_35 = (arr_43 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 11;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 10;i_18 += 1)
        {
            {
                var_36 = ((11 << (((arr_4 [i_17 - 1]) - 27876))));
                var_37 = (((((~(arr_7 [i_17] [i_18] [7])))) && ((max(0, (arr_0 [i_18] [i_17 + 1]))))));
                var_38 = (arr_6 [i_17 - 1] [1] [i_17 - 1] [i_18]);
            }
        }
    }
    var_39 = var_17;

    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        arr_61 [i_19] = (max((((arr_59 [i_19] [i_19]) / (arr_59 [i_19] [i_19]))), ((var_8 ? (arr_59 [i_19] [i_19]) : (arr_59 [i_19] [i_19])))));
        var_40 = ((((((max(var_15, -8129455894842304291))) ? (!var_1) : (arr_10 [i_19] [i_19] [13] [i_19] [i_19]))) != 1));
        arr_62 [i_19] = (((arr_59 [i_19] [i_19]) ? (((-75 ? var_4 : (~var_12)))) : (min((arr_7 [i_19] [i_19] [i_19]), (arr_7 [i_19] [i_19] [i_19])))));
        var_41 = (min(var_41, var_18));
        var_42 = (min(var_42, var_7));
    }
    #pragma endscop
}
