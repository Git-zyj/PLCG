/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75996
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (short)6917)) == (((/* implicit */int) var_8))))) : ((+(((/* implicit */int) (short)15792))))))) ? (((/* implicit */unsigned int) var_1)) : (min((var_12), (((/* implicit */unsigned int) var_0))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            arr_7 [i_0] [(short)6] [i_1 - 1] = ((short) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_0]))));
            var_21 = ((/* implicit */short) (~(min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_16))))))));
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_15 [i_4] [i_4] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) -1548837811)) ? (arr_9 [i_4] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))))) || (((/* implicit */_Bool) arr_0 [i_3] [(short)9]))));
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_3]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1160069927231091013LL)) ? (max((((/* implicit */unsigned long long int) var_14)), (arr_9 [i_1 - 1] [i_1 + 2] [i_1]))) : (((/* implicit */unsigned long long int) var_12))));
        }
        var_24 |= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)1920)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_18 [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
            var_25 = ((/* implicit */short) 10224927286713025175ULL);
            /* LoopSeq 2 */
            for (short i_6 = 3; i_6 < 11; i_6 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_24 [i_0] [(_Bool)1] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1642472589)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (max((((/* implicit */unsigned int) (short)6557)), (3797881192U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [(short)8] [i_5] [i_6 - 2] [i_7] [i_5]))))) : ((-(arr_9 [i_6 - 2] [i_6 + 1] [i_6])))));
                    var_26 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (497086113U)))), (arr_5 [i_7])));
                }
                for (short i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_8 [i_6] [3LL] [i_6 - 1] [i_6 + 1])))));
                    arr_28 [i_0] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-31325)) ? (((/* implicit */long long int) 2048625714U)) : (288230376151711743LL)));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (-((+(var_1))))))));
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 4294967295ULL))));
                    var_30 = ((/* implicit */int) min((var_30), ((~(((/* implicit */int) arr_0 [i_9 - 2] [i_0]))))));
                }
                for (signed char i_10 = 3; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_31 &= min((((((/* implicit */_Bool) 10224927286713025165ULL)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (short)-12844)))), (arr_1 [i_6 - 2]));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_11]), (max((((/* implicit */long long int) (signed char)-16)), (7249346852091059323LL)))))))))));
                        arr_36 [i_11] [i_5] [i_11] [i_6] [i_11] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)29357)), (((arr_35 [i_6 + 1] [i_10 - 3] [i_11] [i_11]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 1] [i_10 + 1] [(short)9] [(unsigned short)5] [7] [i_10])))))));
                    }
                    var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) 497086095U)) || (((/* implicit */_Bool) (signed char)-119))))), (((short) var_14)))))));
                }
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22801))))) ? (((/* implicit */int) ((short) 5721894262168286264LL))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 - 3] [(short)7] [i_6 - 1] [i_6 - 1] [i_6 - 2]))) == (max((-4627643282126870768LL), (((/* implicit */long long int) (unsigned short)58255)))))))));
                var_35 = ((/* implicit */short) ((arr_27 [(signed char)0] [i_5] [i_5]) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (arr_11 [i_0] [i_6] [i_6] [i_6] [i_6])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                var_36 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 497086095U)), (((12421760590822600841ULL) >> (((2246341603U) - (2246341576U)))))));
            }
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_37 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 3797881206U)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_34 [i_0] [i_5] [i_12] [i_12] [i_0])))));
                /* LoopSeq 2 */
                for (signed char i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    arr_41 [i_13] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) arr_29 [i_0])))), (((((/* implicit */_Bool) (short)4065)) || (((/* implicit */_Bool) arr_3 [i_13])))))) ? (((/* implicit */int) max((arr_0 [i_13 - 2] [i_13 - 2]), (arr_23 [i_0] [i_5] [i_12] [i_13 + 1])))) : (((/* implicit */int) (short)32759))));
                    arr_42 [i_13] [i_13] [6LL] [6LL] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) arr_12 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_12 [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 2])))));
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_38 = ((/* implicit */short) (((_Bool)0) ? (288230376151711739LL) : (288230376151711762LL)));
                    var_39 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_14]))));
                }
            }
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */_Bool) ((arr_39 [i_5] [i_5] [i_5] [i_0]) | (arr_39 [i_0] [i_0] [6U] [i_5])))) ? (arr_32 [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_39 [i_0] [i_0] [i_0] [i_0]))))))));
        }
        for (short i_15 = 3; i_15 < 11; i_15 += 4) 
        {
            arr_49 [i_0] [i_15] = ((((/* implicit */_Bool) min((5791768066730168337LL), (((/* implicit */long long int) (short)3782))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (arr_8 [i_15] [i_15] [i_15 - 3] [i_15 + 1]) : (((/* implicit */long long int) 3603234362U))))));
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_0 [i_15 - 3] [i_15 + 1]), (((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)15842)))))))))))));
            var_42 = ((/* implicit */_Bool) (~((-(((/* implicit */int) ((((/* implicit */int) (short)4065)) == (((/* implicit */int) (short)12288)))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_43 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(short)2] [i_16] [i_16] [i_16]))) == (3797881171U))))));
        var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_16 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))));
        arr_53 [i_16 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)19761))));
    }
    for (signed char i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
    {
        arr_57 [i_17] [i_17] = ((/* implicit */short) max((497086119U), (1512895573U)));
        var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551612ULL)) || (((/* implicit */_Bool) (short)-5118)))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-14582)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_17] [(_Bool)1] [i_17] [i_17] [i_17])) || (((/* implicit */_Bool) (short)-5129)))))))) : (((((/* implicit */_Bool) max((2334392157164352579LL), (((/* implicit */long long int) (signed char)112))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551612ULL)))))));
        arr_58 [i_17] = ((/* implicit */short) arr_1 [(_Bool)0]);
        var_46 = ((/* implicit */_Bool) var_16);
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned short) ((arr_2 [i_18]) == (((/* implicit */long long int) ((/* implicit */int) arr_37 [9LL] [i_18] [i_18] [9LL])))));
        /* LoopSeq 3 */
        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_48 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_18] [i_18] [i_18] [i_18] [i_18]))));
            var_49 = ((/* implicit */long long int) (((~(((/* implicit */int) (short)25905)))) | (((/* implicit */int) var_0))));
            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) arr_9 [8U] [i_19] [9ULL]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_20 = 3; i_20 < 10; i_20 += 4) 
            {
                var_51 = ((/* implicit */short) (~(((arr_9 [i_18] [(_Bool)1] [(_Bool)0]) | (((/* implicit */unsigned long long int) arr_45 [i_18] [i_20 - 2]))))));
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_20 + 2])) || (((/* implicit */_Bool) arr_66 [i_20 - 3]))));
                        var_53 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_18] [i_20 - 3] [i_20 - 3])) || (((/* implicit */_Bool) arr_8 [i_22] [(unsigned short)2] [i_20 + 2] [i_18]))));
                        var_54 = ((/* implicit */short) (-((-(18446744073709551614ULL)))));
                        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_18]))) || (((/* implicit */_Bool) (~(-1LL))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (short)-25906))));
                        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_20 + 1])))))));
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_18] [i_20 + 1] [i_21] [i_23])) ? (arr_5 [i_20 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_18] [i_19] [i_20 + 1] [i_21] [i_21] [i_23])))));
                    }
                    var_59 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                    var_60 *= ((short) arr_45 [i_20 - 3] [i_20 - 3]);
                }
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 11; i_24 += 2) 
                {
                    for (long long int i_25 = 2; i_25 < 8; i_25 += 3) 
                    {
                        {
                            arr_81 [i_25 - 1] [i_19] [i_19] [i_18] &= ((/* implicit */_Bool) ((unsigned int) arr_32 [i_24 + 1] [i_24 + 1]));
                            var_61 = ((/* implicit */_Bool) arr_3 [i_24]);
                        }
                    } 
                } 
                var_62 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_18] [i_19] [i_20 + 1]))));
            }
            for (short i_26 = 3; i_26 < 8; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    for (signed char i_28 = 0; i_28 < 12; i_28 += 3) 
                    {
                        {
                            var_63 = ((/* implicit */unsigned short) arr_25 [(_Bool)1] [i_19] [i_19] [10U]);
                            var_64 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4283789530104109336LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12)))) : (((((/* implicit */_Bool) arr_76 [i_18] [i_18] [i_27] [i_18])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                            var_65 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (arr_26 [(short)8] [i_19] [i_28] [i_26 + 1] [i_28] [(short)8])));
                        }
                    } 
                } 
                var_66 = ((/* implicit */short) arr_26 [(_Bool)1] [i_26 - 1] [8] [i_26 + 4] [i_26] [i_26 - 2]);
            }
            for (unsigned int i_29 = 0; i_29 < 12; i_29 += 2) /* same iter space */
            {
                var_67 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                var_68 = ((/* implicit */short) ((0LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned int i_30 = 0; i_30 < 12; i_30 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                {
                    var_69 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_18] [i_19]))));
                    /* LoopSeq 4 */
                    for (short i_32 = 0; i_32 < 12; i_32 += 4) 
                    {
                        arr_100 [i_18] [i_31] [i_30] [i_31] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_76 [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1])) : (((/* implicit */int) arr_76 [i_31 + 1] [i_31 + 1] [i_31] [i_31 + 1]))));
                        arr_101 [1] [i_18] [i_19] [i_31] [(_Bool)1] [i_31] [i_31] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)448)) : (((/* implicit */int) (short)14916))));
                    }
                    for (int i_33 = 3; i_33 < 11; i_33 += 3) 
                    {
                        var_70 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (2577448876U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_19] [i_19]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_18] [(short)6] [i_18] [i_18] [i_18])))));
                        var_71 = ((((/* implicit */int) (short)0)) | (((/* implicit */int) (short)-20532)));
                        var_72 *= ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_73 = ((/* implicit */unsigned int) max((var_73), (((/* implicit */unsigned int) (!((!(var_18))))))));
                        arr_108 [i_18] [i_31] [i_30] [i_31] [(signed char)1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)448))));
                        var_74 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_13)))) ? (arr_93 [i_18] [i_31 + 1]) : (arr_8 [i_19] [i_30] [i_31 + 1] [i_34])));
                    }
                    for (signed char i_35 = 0; i_35 < 12; i_35 += 3) 
                    {
                        arr_111 [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) arr_96 [i_19] [i_19] [i_31 + 1] [9ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5459981384565578825ULL)));
                        var_75 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1])) ? (-2032206593206747597LL) : (((13LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        arr_112 [i_18] [i_18] [i_30] [i_31] [i_18] [i_31] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_11 [i_19] [i_19] [i_19] [(short)7] [i_19])) : (((/* implicit */int) var_10))));
                    }
                }
                var_76 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_18])) ? (((/* implicit */int) arr_72 [i_18] [i_19] [(short)8] [i_19] [i_19])) : ((~(((/* implicit */int) arr_83 [i_18] [i_19] [i_30]))))));
            }
            var_77 = ((/* implicit */_Bool) min((var_77), (((12396624397461860562ULL) == (((/* implicit */unsigned long long int) ((long long int) arr_92 [(_Bool)1] [i_18] [(_Bool)1])))))));
        }
        for (unsigned short i_36 = 0; i_36 < 12; i_36 += 3) 
        {
            arr_116 [i_36] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) -6428992366939414584LL))) | (((/* implicit */int) ((short) arr_73 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_36])))));
            var_78 -= ((/* implicit */int) ((short) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_11)))));
            var_79 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_59 [i_36])) == (((/* implicit */int) arr_59 [i_18]))));
        }
        for (long long int i_37 = 0; i_37 < 12; i_37 += 3) 
        {
            var_80 = ((/* implicit */long long int) max((var_80), (arr_86 [i_18] [i_18] [i_18] [i_18] [i_18] [(unsigned short)2])));
            /* LoopSeq 2 */
            for (short i_38 = 0; i_38 < 12; i_38 += 4) 
            {
                arr_122 [i_37] [i_37] [i_37] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                var_81 = ((/* implicit */short) max((var_81), (((/* implicit */short) (-(((/* implicit */int) arr_27 [i_38] [i_37] [i_38])))))));
                var_82 = ((/* implicit */short) min((var_82), (((/* implicit */short) 18446744073709551615ULL))));
            }
            for (short i_39 = 0; i_39 < 12; i_39 += 1) 
            {
                var_83 = ((/* implicit */_Bool) (-(arr_73 [i_18] [i_18] [i_18] [i_37] [i_37] [i_39] [i_39])));
                var_84 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_39] [i_39] [i_39] [i_39] [i_39]))));
                var_85 = ((/* implicit */unsigned long long int) var_10);
            }
        }
        var_86 = ((/* implicit */_Bool) min((var_86), (((/* implicit */_Bool) (-((-(1LL))))))));
        arr_125 [i_18] = ((/* implicit */signed char) ((arr_94 [(short)6]) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    var_87 += ((/* implicit */short) ((((_Bool) var_6)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
    var_88 = ((/* implicit */signed char) max((var_88), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)42881)))))));
    var_89 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_12)))))));
}
