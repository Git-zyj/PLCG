/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_4, (max(var_5, var_12)))))) | var_10));
    var_14 = ((((var_6 ? (-31299 ^ var_4) : (var_6 >= var_1))) < (min((var_2 % var_11), var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0 + 1] [i_0] = (arr_3 [i_0] [i_1]);
                arr_9 [i_0] = (((arr_3 [i_0 + 1] [i_1]) << ((((~((31 ? 14715 : 14)))) + 14722))));
                arr_10 [i_0 + 1] [i_0] = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] = var_5;
                                var_15 = (min(var_5, -6485739596941831354));
                                var_16 = (max(var_16, var_8));
                                var_17 = (min(var_17, (arr_11 [i_0] [i_3] [i_0 + 2])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_18 = ((25748 ? -18333 : 12704103853157844538));
                            arr_25 [2] [i_0] [6] [i_6] = (i_0 % 2 == zero) ? ((((((var_7 ? 164 : var_8)) >> (((arr_24 [i_0] [i_1] [i_5] [i_6]) + 116)))) << (((((arr_23 [9] [1] [1] [9] [i_0]) ^ ((var_10 & (arr_7 [i_0] [i_0] [i_0]))))) + 5344)))) : ((((((var_7 ? 164 : var_8)) >> (((((arr_24 [i_0] [i_1] [i_5] [i_6]) + 116)) - 136)))) << (((((arr_23 [9] [1] [1] [9] [i_0]) ^ ((var_10 & (arr_7 [i_0] [i_0] [i_0]))))) + 5344))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, ((((((var_7 ? (var_8 | var_3) : (~var_5)))) ? var_1 : var_3)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_20 = var_9;
                    arr_32 [i_7] [i_8] [15] = -11323;
                }
                arr_33 [i_7] = -var_5;

                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_21 = (((((arr_28 [i_7] [i_10 + 1] [i_11]) << (arr_37 [i_10 - 2] [i_7]))) | 1));
                                var_22 &= ((((var_9 && (~220))) ? (arr_41 [i_7] [i_8] [i_7] [15] [i_8] [i_7]) : ((min((arr_39 [i_10 - 3] [i_11 + 1] [i_7] [i_10 - 3] [i_12 - 1]), ((1 ? (arr_34 [i_7] [i_11 + 1] [9]) : (arr_28 [i_8] [i_8] [2]))))))));
                                var_23 = (min((arr_30 [i_8] [i_8] [i_8] [i_8]), (arr_29 [i_7])));
                            }
                        }
                    }

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_45 [i_7] [i_7] [11] [i_7] [13] = ((((((arr_29 [i_7]) | var_9))) ? ((max((arr_42 [i_13] [7] [i_8] [i_8] [i_7] [i_7] [i_7]), (arr_38 [i_7] [i_8] [i_8] [i_10 - 2] [i_13])))) : ((min((arr_40 [i_13 - 1] [i_8] [i_13 - 1] [i_10 + 1] [i_13]), (arr_40 [i_7] [i_8] [i_13 - 1] [i_10 + 1] [i_7]))))));
                        var_24 = ((((var_1 ? (((min(34474, var_7)))) : ((20498 ? 5687827994807673509 : -126)))) == (((~((min(var_0, (arr_38 [i_13 - 1] [i_13 - 1] [i_10 + 1] [i_8] [2])))))))));
                        arr_46 [i_7] [i_10 - 1] [1] = var_3;
                        var_25 = (((!((((arr_34 [i_7] [i_8] [i_13]) ? var_11 : var_4))))) && ((max(((max((arr_28 [i_7] [i_10] [i_13]), var_0))), ((var_2 | (arr_44 [i_7] [i_7] [i_7] [i_7] [i_10 - 2])))))));
                    }
                    for (int i_14 = 3; i_14 < 15;i_14 += 1)
                    {
                        var_26 = (((((~(arr_40 [9] [i_8] [i_8] [i_8] [14])))) || 4251048742));
                        arr_49 [i_7] [i_10 - 2] [i_8] [i_7] = (((~(((arr_35 [i_7] [i_7] [i_7]) ? (arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_14 + 1] [i_8]) : var_8)))) * ((((!(arr_44 [i_7] [i_8] [i_14 + 1] [i_7] [i_14]))))));
                        var_27 *= (arr_26 [i_8]);
                        var_28 = ((var_4 ? (arr_41 [i_7] [i_7] [i_7] [1] [i_10] [i_14]) : (((arr_42 [i_7] [1] [i_10 - 3] [i_7] [i_7] [i_14 - 3] [i_7]) ? var_10 : (arr_28 [i_7] [i_10 - 1] [i_14 - 1])))));
                    }
                    var_29 -= ((-((max((arr_28 [i_8] [i_8] [i_10]), var_0)))));
                }
                var_30 = (((arr_38 [i_7] [i_7] [i_7] [i_7] [15]) + (arr_36 [i_7] [i_7])));
            }
        }
    }
    #pragma endscop
}
