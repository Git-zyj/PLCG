/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65475
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((int) (unsigned char)166))) : (((unsigned int) var_4))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) var_1);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_11 [18U] [(unsigned short)13] [i_1] [18U] |= ((/* implicit */int) var_11);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))));
                        arr_12 [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((_Bool) var_8));
                    }
                } 
            } 
            var_19 -= min((2713534853U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(unsigned char)17] [18U])));
        }
        var_20 += ((/* implicit */unsigned char) ((_Bool) max(((unsigned char)12), (arr_6 [i_0] [6U] [(unsigned short)11] [i_0]))));
    }
    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) var_6);
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            arr_18 [i_4] [i_4] [(short)13] = ((/* implicit */_Bool) 0ULL);
            var_23 = ((/* implicit */int) arr_7 [(unsigned char)17] [i_5] [i_5]);
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((int) arr_3 [i_4 - 1] [i_4 - 2]));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) var_11);
                        arr_26 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
            arr_27 [(_Bool)0] [16U] [(short)5] &= ((/* implicit */int) var_9);
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (short)-23401))))));
            arr_28 [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((int) var_8)) : (((/* implicit */int) arr_0 [6]))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_9 = 4; i_9 < 18; i_9 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
        {
            var_26 = var_14;
            var_27 = ((/* implicit */short) var_0);
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)84)), (0ULL)))) ? (-1834292031) : (((/* implicit */int) var_14))))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [20U] [12] [i_10] = ((/* implicit */unsigned char) var_6);
                            arr_44 [18U] [i_10] [i_11] [i_11] [19U] = ((/* implicit */_Bool) arr_38 [(_Bool)1] [(_Bool)1] [(unsigned short)5] [i_10]);
                        }
                    } 
                } 
            }
            arr_45 [i_10] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9] [(unsigned char)17] [i_9] [i_9])) ? (2058491641) : (((/* implicit */int) var_11))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            var_29 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33678)) ? (((/* implicit */int) (unsigned char)79)) : (arr_42 [7] [4] [4] [(unsigned short)20] [i_9 - 1] [i_9] [(_Bool)1])))), (((unsigned long long int) var_6)))));
        }
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) var_0);
            var_31 = ((/* implicit */unsigned short) ((int) var_2));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) var_10))) ? (3017044583U) : (4294967295U))), (((/* implicit */unsigned int) (_Bool)0))));
                            var_33 = ((/* implicit */_Bool) min((max((max((1508563337U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_4))));
                            arr_57 [i_9] [(unsigned short)3] [i_16] [i_9] = ((/* implicit */unsigned int) -1209451747);
                            arr_58 [i_9] [i_16] [i_9] [i_9] [(unsigned short)18] = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
            {
                arr_65 [(_Bool)1] [i_18] = ((/* implicit */unsigned char) arr_64 [i_9 - 1] [i_9 + 2] [i_9 + 3]);
                arr_66 [i_9] [i_9] [i_18] = ((/* implicit */_Bool) ((unsigned char) var_8));
                var_34 = ((/* implicit */int) var_7);
            }
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((arr_51 [i_20]) ? (((/* implicit */unsigned int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_13)) : (arr_36 [i_21 + 1]))))))));
                    var_36 = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
                    arr_72 [i_9] [11U] [(unsigned char)18] [i_18] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_41 [i_9 + 1] [i_9])));
                    arr_73 [20ULL] [i_18] [i_18] [i_18] = ((unsigned short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        arr_76 [(short)8] [20U] [i_18] [7] [i_21] [i_21] = ((/* implicit */short) var_0);
                        arr_77 [i_18] [i_18] [(_Bool)1] [i_18] [i_18] [11] [i_18] = ((/* implicit */int) var_4);
                        arr_78 [(unsigned char)0] [4U] [i_18] [13U] [16U] [19] = ((/* implicit */_Bool) arr_74 [(unsigned short)9] [i_18] [i_18] [20] [i_18] [18U] [i_18]);
                    }
                }
                var_37 = ((/* implicit */_Bool) var_2);
                var_38 = ((/* implicit */_Bool) arr_49 [i_9] [7U] [i_9]);
            }
            arr_79 [i_18] [i_9] = ((/* implicit */_Bool) min((var_3), (((int) (unsigned char)79))));
            arr_80 [i_18] [(unsigned short)13] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
            var_39 = (+(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_1))))));
        }
        /* vectorizable */
        for (unsigned short i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                arr_88 [i_23] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)0);
                var_40 = ((/* implicit */unsigned long long int) var_7);
                var_41 = ((/* implicit */unsigned int) var_14);
                var_42 += ((/* implicit */unsigned int) (unsigned char)72);
            }
            var_43 = ((/* implicit */unsigned short) var_4);
            arr_89 [i_23] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (unsigned short)3219)))));
            var_44 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2821623969343798533ULL)) ? (1834292031) : (((/* implicit */int) var_12))))));
        }
        arr_90 [4ULL] [i_9] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) max((((/* implicit */short) var_6)), ((short)-26819)))));
    }
    /* vectorizable */
    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (unsigned char i_27 = 1; i_27 < 22; i_27 += 2) 
            {
                {
                    arr_98 [i_26] [i_26] [i_27] [i_26] = ((/* implicit */_Bool) var_10);
                    var_45 = ((unsigned int) ((int) var_4));
                    arr_99 [i_27] [i_26] [i_26] = ((/* implicit */_Bool) ((unsigned char) arr_95 [i_26] [6] [i_26] [i_26]));
                    var_46 += ((/* implicit */unsigned int) 1728296172);
                }
            } 
        } 
        arr_100 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_8)))));
        arr_101 [7] [i_25] = ((/* implicit */int) var_15);
        /* LoopSeq 2 */
        for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 4) 
        {
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 24; i_29 += 1) 
            {
                for (unsigned int i_30 = 0; i_30 < 24; i_30 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((unsigned long long int) var_1)))));
                        var_48 = 1165528291;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_31 = 0; i_31 < 24; i_31 += 3) 
            {
                for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                {
                    {
                        arr_119 [17U] [i_25] [i_25] [(unsigned short)20] = ((/* implicit */unsigned int) var_14);
                        arr_120 [i_25] [i_25] [(unsigned short)22] [i_25] [(unsigned short)22] [(unsigned char)14] = ((/* implicit */unsigned short) ((unsigned int) arr_114 [i_28] [(unsigned short)3]));
                        var_49 = ((/* implicit */_Bool) ((unsigned int) var_12));
                    }
                } 
            } 
            var_50 = var_4;
        }
        for (short i_33 = 2; i_33 < 21; i_33 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_34 = 3; i_34 < 23; i_34 += 3) 
            {
                var_51 = ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        {
                            arr_130 [6] [i_34] [i_34 - 2] [i_34] [i_34] = ((/* implicit */unsigned long long int) arr_110 [(short)1] [(_Bool)1] [i_35] [(_Bool)1]);
                            arr_131 [i_35] [17] = ((/* implicit */_Bool) ((int) var_3));
                            var_52 = ((/* implicit */unsigned char) var_3);
                            arr_132 [i_25] [6] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) ((arr_91 [(short)6] [i_35]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)122))));
                        }
                    } 
                } 
            }
            for (short i_37 = 0; i_37 < 24; i_37 += 2) 
            {
                arr_136 [i_25] [22U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_92 [i_25])) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((unsigned long long int) var_8))));
                var_53 = -1834292032;
                arr_137 [1] [i_33] [i_33] [10] = ((unsigned int) var_2);
            }
            var_54 = ((/* implicit */int) 0ULL);
            var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) arr_127 [i_25] [i_25] [i_25] [i_25]))));
            arr_138 [(unsigned short)2] [(unsigned short)2] [15ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
        }
        arr_139 [i_25] = var_13;
    }
    for (unsigned long long int i_38 = 0; i_38 < 24; i_38 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_39 = 0; i_39 < 24; i_39 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                arr_147 [4U] [(_Bool)1] [(unsigned char)3] [i_38] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                arr_148 [i_38] [i_38] [i_38] = ((/* implicit */unsigned int) var_8);
            }
            for (int i_41 = 0; i_41 < 24; i_41 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_42 = 0; i_42 < 24; i_42 += 4) 
                {
                    var_56 = ((/* implicit */unsigned int) ((_Bool) (short)27081));
                    /* LoopSeq 1 */
                    for (unsigned int i_43 = 4; i_43 < 23; i_43 += 3) 
                    {
                        var_57 = ((/* implicit */int) 3321855542631911787ULL);
                        var_58 += ((/* implicit */unsigned long long int) var_6);
                        arr_158 [(_Bool)1] [0] [i_41] [16] [(unsigned char)3] [i_38] = ((_Bool) (_Bool)1);
                        arr_159 [23] [i_38] [i_42] [16U] [23] [i_38] = ((/* implicit */_Bool) (unsigned char)25);
                        var_59 = ((/* implicit */unsigned long long int) 2285530988U);
                    }
                }
                var_60 = ((/* implicit */unsigned short) ((unsigned int) var_10));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_44 = 0; i_44 < 24; i_44 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_45 = 0; i_45 < 24; i_45 += 2) 
                    {
                        var_61 += ((/* implicit */unsigned long long int) 2644395661U);
                        var_62 = ((/* implicit */unsigned char) ((int) var_13));
                        var_63 = ((int) 4294967295U);
                        arr_165 [(_Bool)1] [i_41] [(unsigned short)21] [i_41] [i_38] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_128 [i_38] [i_38] [i_38] [i_38] [4U])) ? (arr_102 [i_38]) : (((/* implicit */int) var_1))));
                        var_64 = ((unsigned char) (unsigned char)226);
                    }
                    var_65 = ((/* implicit */unsigned int) arr_140 [(_Bool)1] [(unsigned char)13]);
                    var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) ((unsigned short) 3321855542631911787ULL)))));
                }
                for (unsigned short i_46 = 4; i_46 < 22; i_46 += 4) 
                {
                    var_67 += ((/* implicit */unsigned int) (-(arr_117 [i_38] [(unsigned char)23] [21U] [i_38] [(unsigned char)23])));
                    arr_168 [i_38] [i_38] [11U] [(short)3] [i_38] [i_38] = var_11;
                    arr_169 [(unsigned char)5] [i_38] [(_Bool)0] [i_46] [i_46] = ((/* implicit */unsigned int) max((((int) var_12)), ((+(((/* implicit */int) arr_95 [i_38] [(unsigned char)8] [(unsigned char)21] [i_38]))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_47 = 2; i_47 < 20; i_47 += 2) 
            {
                for (_Bool i_48 = 0; i_48 < 1; i_48 += 1) 
                {
                    {
                        arr_174 [i_38] [(unsigned short)2] [i_38] [i_38] = ((/* implicit */_Bool) ((unsigned short) ((var_14) ? (((unsigned int) 1860241952)) : (((/* implicit */unsigned int) (~(1774989724)))))));
                        /* LoopSeq 1 */
                        for (int i_49 = 0; i_49 < 24; i_49 += 1) 
                        {
                            var_68 = ((/* implicit */unsigned long long int) var_5);
                            arr_178 [i_38] [i_39] [i_39] = ((/* implicit */short) max((((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (arr_142 [i_38])))), (((/* implicit */int) ((unsigned short) min((var_3), (660331165)))))));
                            var_69 = var_14;
                        }
                        var_70 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)0))))))))));
                    }
                } 
            } 
        }
        var_71 = ((/* implicit */unsigned short) ((int) max((((unsigned int) var_8)), (((/* implicit */unsigned int) 1774989724)))));
        arr_179 [i_38] = max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (2009436292U)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))));
    }
    var_72 = ((/* implicit */unsigned short) max((var_72), (((/* implicit */unsigned short) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_50 = 0; i_50 < 11; i_50 += 3) 
    {
        for (unsigned char i_51 = 0; i_51 < 11; i_51 += 3) 
        {
            for (unsigned char i_52 = 0; i_52 < 11; i_52 += 4) 
            {
                {
                    var_73 = 1741685948;
                    var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_2)) ? (1834292030) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                    var_75 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) (unsigned char)25)) ? (max((13812778407188553152ULL), (((/* implicit */unsigned long long int) 3276867163U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)107)), ((unsigned short)4100)))))))));
                }
            } 
        } 
    } 
}
