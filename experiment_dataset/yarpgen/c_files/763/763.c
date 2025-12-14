/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_1 [i_2 - 2])));
                    var_17 &= var_13;
                    arr_6 [i_1] = ((((((arr_0 [i_1] [i_0]) ? (arr_3 [i_2 - 2] [i_2] [i_2]) : (arr_3 [i_2] [i_2 + 2] [i_2])))) ^ (~var_13)));
                    var_18 = (~658365511);
                    var_19 *= (max(((var_9 ? (arr_5 [5] [i_1] [i_1]) : -var_15)), 1015808));
                }
            }
        }
    }
    var_20 = (max((~-8051243747697021602), (-2147483647 - 1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_21 = (((((((((-8051243747697021602 ? 3388807233752105286 : 1015799))) ? (arr_7 [i_3] [i_3]) : (min(0, 1015808)))) + 2147483647)) << (((min(var_8, (arr_7 [i_4] [i_4]))) - 18204273588813935625))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_22 = ((((((((arr_13 [i_3] [i_4] [i_6]) > var_1)) ? var_8 : (arr_13 [i_6] [i_5] [i_4])))) ? (min((max(-8051243747697021602, (arr_10 [i_4] [i_5]))), var_6)) : (((min(var_12, (arr_9 [i_6 - 1] [i_6 - 1])))))));
                        var_23 = var_15;
                        var_24 = ((((!0) || ((max(var_12, var_5))))) || var_8);
                        arr_16 [i_6] [i_3] [i_3] [i_3] = var_6;
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        arr_20 [i_3] [i_4] = (max(((~(66 | var_4))), (arr_18 [i_3])));
                        var_25 = arr_8 [i_3];
                        var_26 *= (min(var_12, ((1015808 ^ ((var_6 ? (arr_15 [i_5] [i_5] [i_4] [i_3]) : var_3))))));
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] = (((min((max(var_0, (arr_12 [i_3]))), -13)) - (((+((max((arr_17 [i_4]), 65535))))))));
                        arr_24 [i_8 + 2] [4] [i_8] [4] [4] [4] = ((((arr_15 [i_4] [i_4] [i_4] [i_4]) - (min((arr_7 [i_3] [i_4]), (arr_11 [17] [i_3] [17]))))) >= ((max(var_10, var_7))));
                        var_27 += var_6;

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_28 -= (arr_9 [i_3] [i_3]);
                            var_29 = (arr_13 [12] [11] [11]);
                            var_30 &= (((0 / (arr_9 [i_9] [i_9 - 1]))));
                            var_31 ^= (max((arr_21 [i_9] [i_9 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), 0));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_32 = (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_33 = (min((((((var_6 ? (arr_21 [i_10] [i_8 + 1] [i_5] [i_3] [i_3]) : (arr_18 [i_3])))) ? (max(var_9, var_0)) : 112)), var_10));
                            arr_30 [i_3] = var_10;
                            var_34 = (max((arr_18 [i_10]), ((min((arr_17 [1]), (arr_18 [i_5]))))));
                            arr_31 [i_3] [i_3] [i_4] [i_5] [i_8 + 2] [i_10] &= (((((arr_26 [i_10] [i_8 - 1] [i_5] [i_4] [i_3]) - var_2)) / var_12));
                        }
                        var_35 ^= var_1;
                    }
                    var_36 = (~(arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]));
                    var_37 = ((-6911 ? 0 : 55587));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_38 = (((arr_29 [i_4] [i_4]) % var_5));
                    arr_36 [i_11] = ((var_1 ? 251 : 66));
                    var_39 = var_15;

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_39 [18] [1] [i_3] [i_12] [i_11] = (~185);
                        var_40 ^= (((arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [17]) ? (arr_12 [i_12]) : 1));
                    }
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_41 = (min(var_41, (((((arr_32 [i_4] [14] [14]) || (((var_5 / (arr_40 [i_3] [i_4] [4]))))))))));
                    var_42 = (max(var_42, (arr_29 [i_3] [i_4])));
                    var_43 = var_14;
                    var_44 = 1;

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_45 = 1634463775;
                        var_46 = (~0);
                        arr_46 [i_3] [19] [19] [i_14] [i_3] [i_13] = (min(((-1293338879 ? (arr_7 [i_3] [i_14]) : (arr_35 [i_3] [i_4]))), ((var_0 ? 1422 : var_10))));
                        var_47 = (~-1015802);
                    }
                }
                var_48 = (min((((min(var_1, var_15)) ^ var_11)), (((var_8 && ((max(var_15, var_0))))))));
            }
        }
    }

    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_49 = var_6;
        var_50 &= (((((arr_47 [i_15]) ? (arr_48 [i_15]) : var_3)) + (((arr_47 [i_15]) ? (arr_47 [i_15]) : var_4))));
        arr_49 [1] [i_15] = var_10;
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] [i_16] = ((+(max((arr_50 [i_16]), (arr_48 [i_16])))));
        arr_53 [i_16] = (min(-14389, 12891));
        var_51 = var_3;
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    var_52 = (max(var_52, ((min(86, -1634463776)))));
                    var_53 = (min(var_53, (arr_51 [i_17 - 1] [i_17 + 2])));
                    arr_60 [i_18] [9] [i_16] = ((((var_13 ^ ((1 ? 1 : 8974569207981851362)))) | (((max((max(1, (arr_55 [i_16] [i_17] [i_18]))), var_3))))));
                }
            }
        }
        var_54 ^= ((var_3 ? ((((var_10 != ((64114 ? var_8 : (arr_47 [i_16]))))))) : (max((max(-712628324, (arr_54 [i_16]))), (var_6 || 45035)))));
    }
    for (int i_19 = 0; i_19 < 21;i_19 += 1)
    {
        var_55 = (var_15 % var_0);
        var_56 = (min(((min(var_2, (arr_56 [i_19] [i_19] [i_19])))), (~3767633508)));
        var_57 = var_15;
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        var_58 = (max(var_10, (min(-11, (max((arr_51 [i_20] [1]), var_0))))));
        arr_67 [i_20] &= (~(max(((min(-1, (arr_9 [i_20] [i_20])))), var_9)));
        var_59 += ((2582039685287956901 ? (((arr_51 [18] [i_20]) ? (arr_32 [i_20] [i_20] [i_20]) : (arr_1 [i_20]))) : var_0));
        var_60 &= (arr_37 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    var_61 = ((-((((var_2 ? var_8 : var_6))))));
    #pragma endscop
}
