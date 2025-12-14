/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80917
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
    var_20 = ((/* implicit */short) ((_Bool) (+(((int) var_12)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) arr_0 [i_0]);
            arr_6 [i_0] [i_0] [i_0] = (~(((/* implicit */int) var_9)));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 -= ((/* implicit */short) ((14570417248700114785ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                    var_23 = ((/* implicit */_Bool) 14570417248700114785ULL);
                    arr_13 [i_0] [9ULL] [i_0] = ((/* implicit */unsigned char) var_5);
                    arr_14 [i_3] [i_3] [i_0] = (+(((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_12 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_6)))))) == ((-2147483647 - 1))));
                                arr_19 [i_0] = ((/* implicit */short) 14570417248700114785ULL);
                                var_25 = ((/* implicit */_Bool) ((long long int) ((short) arr_1 [i_4 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 - 3] [i_6 + 1])) ? (((/* implicit */int) arr_1 [i_6 - 1])) : (((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2]))));
        var_28 = ((/* implicit */int) var_3);
        var_29 = ((/* implicit */_Bool) arr_7 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_30 ^= ((/* implicit */int) arr_7 [i_7] [i_8]);
            var_31 &= ((/* implicit */_Bool) 2147483646);
            var_32 -= ((/* implicit */signed char) ((short) ((int) var_19)));
        }
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_33 ^= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_28 [i_9]) : (arr_28 [i_7]))));
            var_34 &= (+(((/* implicit */int) ((unsigned short) arr_12 [i_7] [i_7]))));
            var_35 = ((((/* implicit */_Bool) ((short) arr_2 [i_7] [i_9] [i_7]))) ? (((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9] [(_Bool)1] [i_9] [22] [9]))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_8)))))))) : (((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_27 [(unsigned char)0] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)63))))));
            arr_30 [i_9] = ((/* implicit */signed char) ((unsigned long long int) ((int) arr_27 [i_7] [i_9] [i_9])));
        }
        for (long long int i_10 = 4; i_10 < 19; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                arr_35 [i_7] [i_7] [i_10] [i_7] = ((/* implicit */int) ((14570417248700114785ULL) | (((arr_24 [i_7] [i_10] [i_11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (arr_5 [i_7] [i_10] [i_10])))))))));
                var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2147483646) : (((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51))))) != (((((/* implicit */_Bool) arr_22 [i_11] [i_7])) ? (2147483646) : (((/* implicit */int) (unsigned char)144))))))) : (((((/* implicit */int) (unsigned char)122)) % (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                arr_36 [i_10] [i_10] = ((/* implicit */short) ((unsigned char) ((int) arr_23 [i_10 + 2])));
                arr_37 [i_10] [i_10 + 2] [i_10] [i_10 - 3] = ((/* implicit */short) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_0 [i_10])), (var_5)))), (((unsigned short) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_26 [i_10 - 3] [i_10 - 3]), (((/* implicit */unsigned char) var_17))))) ? (((/* implicit */int) min((arr_26 [i_10 + 3] [i_13 + 3]), (arr_26 [i_13] [i_11])))) : (max((arr_9 [i_10] [i_13 - 1]), (((/* implicit */int) arr_5 [i_10 - 3] [i_10] [i_7])))))))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 3876326825009436830ULL))) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (133693440) : (((/* implicit */int) (unsigned char)111))))) : (((((arr_3 [i_7]) || (arr_17 [i_7] [i_7] [i_7] [(short)19] [i_7]))) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_7] [i_10] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)110)) : (133693440))))))));
                            var_39 &= ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
                            var_40 = ((/* implicit */short) max((((unsigned int) var_8)), (var_19)));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_6))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        {
                            var_42 = (i_10 % 2 == zero) ? (((/* implicit */signed char) (-(max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)109)))), (((((/* implicit */int) arr_17 [i_7] [i_10 - 1] [i_14] [i_15] [i_16])) << (((arr_11 [i_10] [i_16]) + (5513553187826199846LL)))))))))) : (((/* implicit */signed char) (-(max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)109)))), (((((/* implicit */int) arr_17 [i_7] [i_10 - 1] [i_14] [i_15] [i_16])) << (((((arr_11 [i_10] [i_16]) + (5513553187826199846LL))) - (9000347931543939062LL))))))))));
                            arr_50 [i_16] [i_10] [i_7] [11ULL] [i_14] [i_10] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_10]))) % (4494803534348288LL))) % (arr_2 [i_7] [(short)17] [19LL])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_13)) % (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_17 = 1; i_17 < 20; i_17 += 2) 
                {
                    var_43 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_11 [i_10] [i_10 + 1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) (unsigned char)200))))))) >= (((/* implicit */long long int) arr_31 [i_10]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_55 [i_10] [i_17 - 1] [i_14] [i_10 + 1] [i_10] = ((/* implicit */_Bool) var_6);
                        var_44 = ((/* implicit */unsigned char) (signed char)-6);
                        var_45 = ((/* implicit */int) ((signed char) (unsigned char)193));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_9 [i_7] [i_17])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56814)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_48 [i_7] [i_10] [i_14] [14ULL] [i_18] [i_18]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_4 [(short)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [11LL] [11LL] [i_17] [i_17 - 1] [i_18]))))))))));
                    }
                    for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        arr_58 [i_7] [i_10] [i_10] [i_14] [i_14] [i_10] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)110))) ? (max((3876326825009436830ULL), (((/* implicit */unsigned long long int) var_19)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -4494803534348303LL))))))) ? (arr_11 [i_10] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)255))));
                        var_47 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((arr_18 [i_17] [i_17] [i_17 + 2] [i_17 + 2] [i_17] [i_17] [i_17 + 2]) * (((/* implicit */int) var_0)))) : (((/* implicit */int) var_11))))) == (max((((/* implicit */long long int) (unsigned char)255)), (((long long int) (unsigned char)109))))));
                    }
                    for (int i_20 = 4; i_20 < 18; i_20 += 3) 
                    {
                        arr_63 [i_7] [i_10] [i_10] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_15 [i_7] [i_14] [i_10] [i_17] [i_20 - 4] [i_14])), (-1511349255412475621LL)));
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) arr_33 [i_7] [i_10]))));
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17079089661642391001ULL)) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_9)) - (47759))))) : ((+(((/* implicit */int) arr_1 [i_7]))))))) ? (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))) << (((((/* implicit */int) (short)16128)) - (16103))))) : (((/* implicit */long long int) (+(arr_23 [i_10 - 3]))))));
                        var_50 += ((/* implicit */long long int) ((unsigned long long int) max((var_5), (((/* implicit */short) arr_5 [i_7] [i_7] [i_7])))));
                    }
                    /* LoopSeq 2 */
                    for (short i_21 = 1; i_21 < 21; i_21 += 3) /* same iter space */
                    {
                        arr_67 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_7] [i_10] [i_14] [i_10] [i_10 - 1]))) - (var_19)))) ? (arr_47 [i_7] [i_10] [i_7] [i_17] [14ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (4494803534348288LL))))));
                        arr_68 [i_10] [i_17 + 2] [i_7] [5LL] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 133693446))) ? (((((/* implicit */_Bool) -133693452)) ? (((/* implicit */int) arr_61 [i_10] [i_21 + 1] [i_21] [i_21] [i_21 - 1] [i_21])) : (((/* implicit */int) arr_61 [i_10] [i_21 + 1] [i_21] [(signed char)0] [i_21] [i_21])))) : (((/* implicit */int) arr_61 [i_10] [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21 - 1] [i_21]))));
                    }
                    for (short i_22 = 1; i_22 < 21; i_22 += 3) /* same iter space */
                    {
                        arr_71 [i_10] [i_14] [i_14] [20] [i_22] [i_14] = ((/* implicit */unsigned char) (-2147483647 - 1));
                        arr_72 [i_7] [i_7] [i_10] [i_10] [i_14] [i_10] [i_22] = ((((/* implicit */int) arr_65 [i_7] [i_10] [i_14] [i_17] [i_22])) == (((/* implicit */int) arr_38 [i_7] [i_10 - 3] [i_14] [i_10])));
                        var_51 += min((((((_Bool) var_10)) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)0))))) : ((((_Bool)1) ? (((/* implicit */int) (short)28013)) : (133693430))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-109)) ? (133693443) : (((/* implicit */int) (short)4096)))))));
                    }
                }
                for (int i_23 = 1; i_23 < 21; i_23 += 2) 
                {
                    arr_76 [i_14] [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -133693440)), (arr_62 [(unsigned short)14] [i_10] [(unsigned short)14] [i_23])))) ? (((((/* implicit */_Bool) arr_54 [i_7] [i_10] [i_10] [i_10] [i_23] [(unsigned short)20])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_15))))), (((/* implicit */int) var_15))));
                    /* LoopSeq 2 */
                    for (short i_24 = 3; i_24 < 19; i_24 += 2) 
                    {
                        var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_23 + 1])))));
                        arr_79 [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -133693446)) || (((/* implicit */_Bool) (short)27991)))))));
                        var_53 = ((/* implicit */int) var_19);
                    }
                    for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) 
                    {
                        arr_84 [i_7] [i_7] [i_7] [i_23] [i_7] |= ((/* implicit */unsigned char) -1511349255412475608LL);
                        var_54 = ((/* implicit */short) (+((-(1048544)))));
                    }
                    arr_85 [i_7] [i_7] [i_10] [i_7] = ((/* implicit */unsigned long long int) arr_44 [i_23 - 1] [i_14] [i_10] [i_7]);
                    var_55 = ((/* implicit */long long int) (signed char)120);
                }
                var_56 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 133693440)))) : (((((/* implicit */_Bool) arr_56 [i_7] [i_14] [i_7] [i_10 - 1] [i_7] [i_10] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_7] [i_7] [i_10] [i_14] [i_10]))) : (var_16)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_56 [i_7] [i_10] [i_7] [i_7] [i_7] [i_7] [i_14])), (arr_10 [i_7] [i_10] [i_14])))) ? (((/* implicit */int) (unsigned char)1)) : (((((/* implicit */_Bool) arr_45 [(unsigned char)13] [(unsigned char)13] [i_14])) ? (((/* implicit */int) var_0)) : (arr_31 [i_7]))))) : (((/* implicit */int) ((unsigned char) arr_16 [i_7] [i_10] [i_10] [i_10] [i_10]))));
            }
            for (int i_26 = 4; i_26 < 18; i_26 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_27 = 1; i_27 < 20; i_27 += 2) 
                {
                    arr_91 [i_10] [i_26] [3ULL] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) 18446744073709551591ULL))))));
                    var_57 = max((var_9), (((/* implicit */unsigned short) arr_22 [i_10 + 3] [i_7])));
                    arr_92 [i_7] [i_10] [i_10] [i_7] = ((/* implicit */unsigned long long int) max((-1511349255412475621LL), (((((/* implicit */_Bool) (short)8192)) ? (1511349255412475640LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_93 [i_7] [i_10] [i_10] = ((/* implicit */short) (_Bool)1);
                var_58 = arr_60 [i_7] [i_7] [i_7] [i_7] [i_7];
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 22; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            arr_102 [i_7] [i_10 - 3] [i_10] [2ULL] = ((/* implicit */unsigned long long int) var_12);
                            arr_103 [i_7] [i_10] [i_10] [i_28] [i_29] [i_10] [(short)20] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(var_8))))))) ? (((((/* implicit */_Bool) max((288230376151711743ULL), (arr_24 [i_7] [i_10 + 1] [i_28])))) ? (((unsigned long long int) 18158513697557839872ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_30] [i_10 - 1] [i_10 + 2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27981)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_31 = 1; i_31 < 21; i_31 += 4) /* same iter space */
                {
                    var_59 = ((/* implicit */long long int) var_13);
                    arr_106 [i_7] [i_10] [i_7] [i_31 + 1] = ((/* implicit */unsigned char) ((_Bool) (short)27958));
                }
                for (unsigned char i_32 = 1; i_32 < 21; i_32 += 4) /* same iter space */
                {
                    arr_109 [i_10] [i_28] [i_10] [i_10] [(short)12] [i_10] = ((/* implicit */unsigned long long int) arr_16 [i_10] [i_32] [i_10] [i_10] [i_10]);
                    arr_110 [i_7] [i_10] = ((/* implicit */unsigned char) arr_31 [i_10]);
                }
            }
        }
        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) - (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_97 [19ULL] [i_7] [i_7] [i_7] [i_7])))) : (max((((/* implicit */long long int) (_Bool)1)), (1511349255412475640LL))))))))));
    }
    var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1)))), ((+(((/* implicit */int) (_Bool)1)))))) : (((var_7) << (((var_7) - (1235521940))))))))));
}
