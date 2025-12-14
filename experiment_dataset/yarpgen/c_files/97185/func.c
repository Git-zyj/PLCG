/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97185
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */int) ((long long int) min((((((/* implicit */int) (unsigned char)94)) & (arr_2 [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_3 - 1] [i_2] [i_2]))))), (((((/* implicit */_Bool) 135537527)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)228))))) : (0ULL)))));
                                var_12 = ((/* implicit */unsigned short) var_10);
                                var_13 = ((/* implicit */short) max((arr_13 [i_0 + 3] [i_1] [i_1] [i_3] [i_4]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_4 [i_1 - 2])))))));
                                arr_16 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = (+(arr_4 [i_0 + 1]));
                            }
                        } 
                    } 
                    var_14 = var_1;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) var_9);
                    arr_23 [i_6] [i_5] = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_14 [i_6])) : (var_9))), (((/* implicit */long long int) ((int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5 - 1] [i_6]))))));
                    var_16 = ((/* implicit */int) ((unsigned long long int) ((arr_8 [i_6] [i_5 - 1] [i_0 + 3] [i_0]) > (arr_1 [i_6] [i_5 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        var_17 = (~(((/* implicit */int) ((arr_10 [i_0] [i_0 - 1] [i_6] [i_7 + 1]) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_5] [i_6] [i_0])) ? (((/* implicit */int) arr_13 [(short)18] [i_7 + 2] [i_6] [i_5] [i_5])) : (arr_7 [i_5]))))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_4 [i_0 + 2])))))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((arr_26 [i_0 - 1] [i_0 + 3] [(signed char)7] [i_0 + 2]) | (var_10))))))));
    }
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_0))))), (min((var_10), (var_1))))) : (((var_7) ? (((var_2) & (((/* implicit */long long int) var_4)))) : (((long long int) var_0))))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_21 = var_1;
                            arr_38 [i_11] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) arr_29 [i_11 - 1]);
                            var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (arr_30 [i_8] [i_8] [i_8])))), (((unsigned long long int) arr_31 [i_11] [i_10] [i_8]))));
                            /* LoopSeq 2 */
                            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                            {
                                arr_41 [i_11 + 1] [(short)23] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_12] [i_9])) ? (((/* implicit */long long int) 3486453611U)) : (2243003720663040LL)))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (min((arr_35 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1]), (arr_35 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])))));
                                var_23 = ((/* implicit */int) ((((long long int) var_4)) > (((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_8] [19LL] [i_10] [i_11 + 1] [i_8])) - (((/* implicit */int) arr_40 [i_8] [i_9] [i_10] [i_11 + 1] [i_10])))))));
                                var_24 = arr_32 [i_11 - 1] [i_11 - 1] [i_11 - 1];
                            }
                            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                            {
                                arr_46 [(signed char)4] = ((/* implicit */unsigned char) ((int) arr_36 [i_10]));
                                var_25 = ((/* implicit */unsigned char) arr_32 [(short)23] [(unsigned char)19] [(short)16]);
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6777243226307829406LL)) ? (808513684U) : (((/* implicit */unsigned int) -979326211))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        arr_50 [i_14] = ((/* implicit */short) var_0);
        arr_51 [i_14] [(short)1] = ((/* implicit */int) arr_48 [i_14]);
        arr_52 [i_14] = ((/* implicit */short) var_9);
    }
    for (long long int i_15 = 2; i_15 < 20; i_15 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_17 [i_15 - 1] [i_15])) ? (((/* implicit */int) arr_45 [3U] [(short)22] [13] [i_15] [i_15])) : (((/* implicit */int) var_8)))))) - ((~(((/* implicit */int) (short)-586))))));
        arr_57 [i_15] = ((/* implicit */_Bool) min((((unsigned char) ((((/* implicit */_Bool) -4165982470367407095LL)) || (((/* implicit */_Bool) 0ULL))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_48 [i_15 - 1])))))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 22; i_16 += 2) 
        {
            for (unsigned short i_17 = 1; i_17 < 20; i_17 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)96)) ? (((((/* implicit */_Bool) 1073733632U)) ? (((/* implicit */int) (unsigned char)165)) : (-135537544))) : (((/* implicit */int) (unsigned short)6144))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 3; i_19 < 22; i_19 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (min((arr_12 [i_19 - 1] [i_18] [i_17 - 1] [i_15]), (arr_4 [(short)7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_18] [(short)15] [(short)15] [i_19] [i_19 + 1])))))))));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_15 - 1] [i_15 - 1] [i_15])))))))))));
                                arr_71 [i_19] [i_18] [17LL] [(unsigned short)17] [i_16] [i_15] [i_19] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_8)) > (arr_7 [i_15 + 3]))) ? (arr_12 [i_16 + 1] [i_16] [i_16 + 1] [i_16]) : (((((/* implicit */_Bool) arr_5 [i_17] [i_18] [i_19])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                                var_31 = (+(var_9));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) min((arr_8 [i_15] [i_16 - 1] [i_17] [i_16]), (((/* implicit */long long int) ((int) arr_8 [i_15 + 2] [i_16] [i_16 + 1] [i_17])))));
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 21; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 3; i_21 < 19; i_21 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */int) min((((((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_28 [i_15] [i_16])))) | (min((var_2), (((/* implicit */long long int) arr_24 [(signed char)16])))))), ((~(arr_49 [i_17 - 1])))));
                                var_34 *= ((((((/* implicit */_Bool) arr_67 [i_15] [i_17] [i_15])) ? (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_20]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15] [i_16] [i_17 + 1] [20U] [i_21 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_22 = 2; i_22 < 20; i_22 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) arr_80 [i_22]);
        /* LoopSeq 2 */
        for (short i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            arr_83 [i_22] = ((/* implicit */_Bool) (+((+((~(((/* implicit */int) var_8))))))));
            var_36 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_32 [i_22 + 2] [i_22 + 1] [6LL])), (var_4)))), (((unsigned int) arr_13 [18] [i_22 + 2] [i_22] [i_22 + 1] [i_22 - 2]))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 23; i_25 += 2) 
            {
                for (short i_26 = 0; i_26 < 23; i_26 += 2) 
                {
                    {
                        arr_90 [i_22 + 1] [i_22 + 1] [i_25] = ((/* implicit */unsigned long long int) ((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)585))))) + (((((/* implicit */_Bool) arr_44 [i_22] [21] [i_26] [i_26] [i_25] [i_22 + 2])) ? (((/* implicit */unsigned int) arr_5 [i_22 + 2] [i_24] [i_25])) : (arr_44 [i_24] [i_24] [i_24] [(unsigned char)9] [i_26] [i_22 + 2])))));
                        var_37 = ((/* implicit */int) arr_22 [i_22 + 3] [i_22 - 2] [i_22 - 1]);
                        arr_91 [i_25] [i_26] = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 2 */
                        for (int i_27 = 0; i_27 < 23; i_27 += 2) 
                        {
                            var_38 = ((/* implicit */int) arr_87 [i_22] [i_24] [i_25] [i_26]);
                            var_39 = ((/* implicit */unsigned int) arr_13 [i_22 + 1] [i_24] [i_27] [i_26] [i_27]);
                        }
                        for (int i_28 = 4; i_28 < 22; i_28 += 2) 
                        {
                            arr_96 [i_25] [4] [i_25] = ((/* implicit */unsigned long long int) var_4);
                            arr_97 [(short)13] [i_24] [i_25] [i_25] [i_28 - 3] = ((/* implicit */_Bool) var_3);
                            var_40 = ((/* implicit */int) arr_29 [i_22 + 2]);
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_22 - 2])) ? ((~(var_3))) : (var_3)));
                        }
                        arr_98 [i_26] [i_25] [i_24] [i_22 - 2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_9 [i_22 + 3] [i_22 + 3] [i_22])))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_58 [i_22] [i_24] [i_25])) : (var_10))))));
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned int) var_2);
        }
        var_43 *= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_76 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 2])) || (((/* implicit */_Bool) arr_76 [i_22 + 2] [i_22 - 2] [i_22 + 1] [i_22] [i_22 + 2])))));
        /* LoopNest 3 */
        for (unsigned int i_29 = 0; i_29 < 23; i_29 += 2) 
        {
            for (int i_30 = 0; i_30 < 23; i_30 += 2) 
            {
                for (unsigned char i_31 = 0; i_31 < 23; i_31 += 2) 
                {
                    {
                        arr_107 [i_22] [i_29] [i_30] [i_29] [i_31] [i_22] = ((/* implicit */unsigned int) min((min((((unsigned long long int) arr_55 [i_31])), (((/* implicit */unsigned long long int) ((unsigned int) arr_93 [i_31] [i_30] [i_29] [i_22] [i_22] [i_22]))))), (((/* implicit */unsigned long long int) var_10))));
                        arr_108 [i_22] [i_22] [(signed char)9] [i_30] [i_31] [i_31] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_70 [i_22]))))), (min((((/* implicit */long long int) arr_78 [i_29] [i_30])), (var_10)))));
                        var_44 = ((/* implicit */long long int) min((((/* implicit */int) arr_32 [i_22] [i_31] [i_22])), ((-(var_4)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_32 = 0; i_32 < 23; i_32 += 2) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned long long int) arr_67 [i_22 + 2] [i_29] [i_32]);
                            var_46 = ((/* implicit */unsigned long long int) arr_82 [i_22] [i_22]);
                            var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (~(((long long int) 135537518)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_33 = 0; i_33 < 23; i_33 += 2) /* same iter space */
                        {
                            var_48 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (arr_47 [i_30])))) ? (((/* implicit */long long int) arr_85 [(unsigned char)20])) : (var_1)));
                            arr_114 [i_22 + 2] [i_29] [i_30] [i_31] [i_33] = ((/* implicit */unsigned int) ((((arr_22 [i_29] [i_30] [i_33]) | (((/* implicit */long long int) arr_101 [i_33] [i_33] [i_30] [i_31])))) & (((/* implicit */long long int) ((int) var_1)))));
                            var_49 = ((/* implicit */int) arr_112 [i_30] [i_31] [i_33]);
                            arr_115 [i_22] [(unsigned short)20] [i_29] [2] [i_30] [7] [i_33] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_22 + 2]))));
                            var_50 = ((/* implicit */unsigned char) (~(arr_17 [i_33] [i_22 + 3])));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_34 = 2; i_34 < 20; i_34 += 2) /* same iter space */
    {
        var_51 = ((/* implicit */int) arr_92 [i_34] [i_34 + 3] [i_34] [i_34] [i_34 + 2] [i_34] [i_34 + 1]);
        arr_118 [i_34] = ((/* implicit */long long int) ((((int) ((unsigned int) arr_33 [1ULL] [i_34] [i_34 + 3]))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_34 - 1] [i_34 + 2])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-586))) - (7401542650675929392ULL)))))))));
        arr_119 [14U] [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_34 + 1]))) || (((((/* implicit */long long int) ((/* implicit */int) (short)14336))) > (-82400752581330247LL)))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) var_4))));
        arr_120 [i_34 + 2] [i_34 + 2] = ((/* implicit */long long int) ((min((((int) var_0)), (((/* implicit */int) ((16ULL) == (((/* implicit */unsigned long long int) 7915421795796124086LL))))))) - ((+(((/* implicit */int) min((arr_36 [i_34 - 1]), (((/* implicit */unsigned char) var_0)))))))));
    }
}
