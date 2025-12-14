/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((max(var_6, 4294967295)) >> (((var_4 < (83 <= 1))))));
    var_20 -= (var_9 <= -var_15);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (max(var_21, -65));
        var_22 += var_7;
        var_23 = (219 != var_11);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_24 = (min(var_24, (((var_1 >= (((min(1, var_3)))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 = ((((((min(var_6, var_15)) * ((min(var_6, var_4)))))) ? (((max((arr_5 [i_4]), var_14)) * (((var_13 ? (arr_10 [i_4] [i_4]) : var_0))))) : var_2));
                            var_26 += (((((~((max(var_5, 1)))))) ? (min((min(var_10, var_15)), (var_17 > var_3))) : (((((((arr_2 [i_1] [i_1]) ? (arr_6 [i_1] [i_2] [0] [i_1]) : var_0))) ? var_4 : var_5)))));
                            var_27 = (((var_4 < 58) <= (((~var_13) ? var_15 : ((var_0 ? var_7 : var_0))))));
                            var_28 = var_10;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_29 = (arr_9 [i_6] [i_4] [i_4] [i_2]);
                            var_30 -= (max((max(((4294967292 ? 1206151908 : 11270812181099606600)), (((~(arr_7 [i_3])))))), var_10));
                            var_31 -= ((((((arr_9 [i_1] [i_1] [i_1] [i_1]) ? (arr_9 [0] [i_1] [i_3] [i_3]) : var_6))) ? ((((var_6 ? var_11 : var_17)))) : (min(var_7, (max(var_9, var_15))))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_32 = (((~-398452329) >> (((arr_4 [i_1] [6] [i_1]) - 8368421031551019778))));
                            var_33 = ((+((min((arr_14 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] [i_4]), var_3)))));
                            var_34 = ((var_4 ? (max((arr_10 [6] [i_4]), (((-398452340 ? 2648466079 : (arr_11 [i_7] [i_4] [i_3] [i_2] [i_1] [i_1])))))) : ((max((((var_6 ? (arr_8 [i_1] [i_1] [i_2] [i_3] [i_4] [i_7]) : var_9))), ((13697885514130204961 ? 6 : (-127 - 1))))))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_35 -= ((((((((arr_2 [i_8] [i_8]) ? var_14 : var_16))) ? (var_4 | var_12) : (1 | -541661942)))) ? (((((1 + (arr_10 [i_1] [i_8])))) ? (arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] [i_8]) : (max(var_13, var_7)))) : var_3);
                            var_36 = 64393;
                            var_37 = (max(var_7, ((((max(36, 1))) >> 10))));
                        }
                        var_38 = (max(var_38, (((4194240 % ((4294967290 ? 1 : 1)))))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_39 ^= ((var_10 | (((var_11 ? var_15 : (max(var_9, var_11)))))));
                            var_40 = (((((+((1 ? (arr_1 [i_1] [i_1]) : 1))))) ? ((((var_7 >= (((arr_0 [i_1]) ? var_3 : var_17)))))) : (((arr_10 [i_2] [i_4]) ? (arr_1 [i_2] [i_1]) : var_9))));
                            var_41 = var_5;
                            var_42 = ((((max(83, 1))) >> ((((min(-32432, 39))) + 32433))));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_43 = (-(var_2 - var_8));
                            var_44 = (127 ? 4294967275 : 3897);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_45 *= 1639631837;
                            var_46 = (max(var_46, (((1452193557 >> (60 - 36))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_47 = ((((var_16 ? 1979799537 : (arr_13 [i_1] [i_2] [i_2] [i_4] [1]))) <= (arr_8 [i_1] [i_1] [i_2] [i_3] [1] [i_12])));
                            var_48 = ((~(arr_24 [i_4])));
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_49 = (((((arr_31 [i_13]) >= (arr_31 [i_13]))) ? (max(var_9, var_14)) : (((arr_30 [i_13]) ? (arr_30 [i_13]) : (arr_30 [i_13])))));
        var_50 = ((-6555071136993280879 ? (((max((arr_31 [i_13]), var_7)))) : (max(4, 18446744073709551607))));
        var_51 += ((!((((min(var_3, (arr_31 [i_13]))) ? (max((arr_30 [i_13]), 8137378284122316793)) : (((var_4 ? var_2 : 195))))))));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        var_52 *= ((max(var_14, (~var_12))));
        var_53 = (((((((var_2 ? (arr_30 [i_14]) : var_3))) ? -15848 : var_17))) / (((var_13 <= 1370849901) ? (((var_4 ? 1 : var_9))) : (arr_32 [i_14]))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    var_54 = (var_3 ? (((~((((arr_30 [i_14]) || var_5)))))) : ((1 ? 1133524811 : 8137378284122316795)));

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_55 = var_18;
                        var_56 = (((max((((var_0 ? (arr_0 [i_15]) : var_8))), var_2)) < (arr_0 [i_14])));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_57 = (arr_0 [i_18]);

                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            var_58 = (((arr_48 [i_14] [i_14] [i_16] [i_18] [i_19]) ? (arr_48 [i_14] [i_14] [i_16] [i_18] [i_19]) : (arr_48 [7] [i_15] [i_15] [i_15] [i_15])));
                            var_59 = var_15;
                        }
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            var_60 = ((var_6 ^ (arr_32 [i_14])));
                            var_61 = (~var_8);
                        }
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_62 = ((~(7 <= var_6)));
                            var_63 = 5263220890582090315;
                            var_64 = (((arr_45 [i_14] [i_14] [i_16] [i_18] [i_21]) ? (arr_45 [i_21] [i_14] [i_16] [i_14] [i_14]) : (arr_45 [i_21] [i_14] [i_16] [i_14] [i_14])));
                            var_65 += var_7;
                            var_66 = 3;
                        }
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            var_67 = var_10;
                            var_68 = (min(var_68, -var_1));
                            var_69 = var_14;
                        }
                        var_70 |= (var_17 ? var_1 : var_2);
                        var_71 &= -var_1;
                    }
                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 15;i_23 += 1)
                    {
                        var_72 = (max(var_72, var_9));
                        var_73 = var_16;
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 15;i_25 += 1)
                        {
                            {
                                var_74 = ((3505078345 ? (max(-8763768309305627010, (((1 ? 27115 : -398452329))))) : 1405651869));
                                var_75 = (max(var_75, ((max((max(var_11, (arr_61 [i_15] [i_16] [i_24]))), (max(var_1, (arr_61 [i_16] [i_24] [5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_26 = 0; i_26 < 16;i_26 += 1)
    {
        var_76 = ((var_1 ? (((arr_30 [i_26]) ? (~var_7) : ((var_0 ? (arr_67 [i_26]) : var_2)))) : 1));
        var_77 -= var_8;
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 16;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 16;i_28 += 1)
            {
                {
                    var_78 *= var_2;
                    var_79 = ((((min((arr_67 [i_26]), var_16))) ? var_11 : (arr_67 [i_26])));
                    var_80 = max(((var_2 ? var_18 : (arr_67 [i_27]))), var_9);
                }
            }
        }
    }
    #pragma endscop
}
