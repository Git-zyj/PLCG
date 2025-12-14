/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95696
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (7444095938741484943ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-1524)) == (((/* implicit */int) (unsigned char)162))))) + (((/* implicit */int) (unsigned char)12)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */short) var_9);
                            var_19 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (arr_7 [i_0] [i_1 + 1] [(unsigned short)12]))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_12 [i_1] [i_3])) : (var_6)))) ? (((/* implicit */int) ((signed char) (unsigned char)3))) : (((/* implicit */int) ((signed char) (unsigned char)162)))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_1])) ? (arr_7 [i_2 - 2] [i_1 + 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_1] [i_2] [i_1]))));
                            var_23 = ((/* implicit */signed char) (((+(arr_3 [i_1] [i_1 + 2] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2])))));
                        }
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_2 - 1] [i_1 + 1] [i_1]));
                            var_25 = ((/* implicit */unsigned int) ((short) (unsigned char)245));
                        }
                        var_26 = var_9;
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) 4294967295U));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_4))) > (((((/* implicit */int) (signed char)15)) + (((/* implicit */int) (unsigned char)151))))));
            var_29 = ((/* implicit */unsigned short) ((unsigned char) (short)697));
        }
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            var_30 = arr_13 [i_0] [2U] [i_0];
            var_31 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)160))));
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) ((unsigned char) var_7));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) | (((/* implicit */int) var_2))));
                var_34 = ((unsigned int) arr_14 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 1]);
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((((-2147483640) + (2147483647))) << (((252316968318318573LL) - (252316968318318573LL))))) : (var_3)));
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_36 &= ((/* implicit */unsigned short) var_1);
                var_37 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5636274363379755347LL)) || (((/* implicit */_Bool) var_8))));
            }
        }
        var_38 *= ((/* implicit */short) (~(((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) << (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0])) + (26188)))))));
        var_39 = ((/* implicit */unsigned char) (short)-3806);
    }
    for (long long int i_11 = 3; i_11 < 19; i_11 += 2) 
    {
        var_40 = ((/* implicit */long long int) max((((/* implicit */short) (signed char)48)), (arr_33 [i_11])));
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_41 *= ((/* implicit */unsigned short) (unsigned char)152);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                var_42 = ((/* implicit */long long int) ((signed char) arr_36 [i_11 - 1]));
                var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_11 + 3] [i_12]))));
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_2))));
            }
            var_45 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_11] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) arr_35 [i_11] [i_11 + 2] [i_11 - 3])) : (((/* implicit */int) (signed char)-55)))) <= (((/* implicit */int) arr_36 [i_11]))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 2; i_14 < 19; i_14 += 2) 
        {
            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)34)) / (((/* implicit */int) (signed char)96)))))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                var_47 -= ((/* implicit */short) ((long long int) (+(arr_37 [i_11] [i_11] [i_11]))));
                var_48 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)31110)) : (((/* implicit */int) (short)-31110))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_16 = 3; i_16 < 20; i_16 += 2) 
            {
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_14 - 1] [i_14])) ^ (((/* implicit */int) arr_45 [i_14 + 1] [19U]))));
                var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((int) arr_34 [i_11 - 3])))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 3; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) (+(((/* implicit */int) (short)22943))));
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((unsigned int) arr_46 [i_18 - 1] [i_18 - 1] [i_18] [i_17] [i_17])))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */short) var_2);
                /* LoopSeq 2 */
                for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_14 + 1])) & (((/* implicit */int) arr_33 [i_14 + 1]))));
                    var_55 = ((/* implicit */unsigned int) ((signed char) arr_31 [i_11 - 3]));
                }
                for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    var_56 = ((/* implicit */signed char) arr_35 [i_11] [i_20] [i_16 - 2]);
                    var_57 = var_11;
                }
            }
            var_58 = ((/* implicit */short) (signed char)-96);
        }
    }
    /* vectorizable */
    for (short i_21 = 4; i_21 < 22; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_23 = 2; i_23 < 19; i_23 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_24 = 3; i_24 < 22; i_24 += 2) 
                {
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_24] [i_24] [i_24])) ? (1384147651497079437LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_63 [i_24 - 1])) : ((+(((/* implicit */int) var_2))))));
                    var_60 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)22963)) : (((/* implicit */int) (short)-31106))));
                    /* LoopSeq 2 */
                    for (short i_25 = 2; i_25 < 21; i_25 += 2) 
                    {
                        var_61 *= ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)8))))));
                        var_62 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_73 [(unsigned char)12] [i_22] [(unsigned char)12] [i_22] [i_25] [i_23] [(unsigned char)12]) : (arr_73 [i_21] [i_25] [22U] [i_22] [i_21] [i_24] [i_24])));
                        var_63 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 3301697898U)) ? (((/* implicit */int) (short)31109)) : (((/* implicit */int) (short)-31313)))));
                        var_64 = ((signed char) arr_60 [i_21 - 1]);
                    }
                    for (unsigned int i_26 = 0; i_26 < 23; i_26 += 2) 
                    {
                        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_24 + 1] [i_24 - 1] [(signed char)1] [i_24] [i_22 + 1])) ? (arr_72 [i_24 + 1] [i_23] [i_22] [i_22 + 1] [i_22 + 1]) : (arr_72 [i_24 + 1] [i_24] [i_23 + 3] [i_23] [i_22 + 1])));
                        var_66 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) >> (((((((/* implicit */_Bool) arr_68 [i_21] [i_21 - 1] [i_21] [i_21] [i_21])) ? (((/* implicit */int) (short)-21584)) : (((/* implicit */int) var_11)))) + (21593)))));
                        var_67 = ((/* implicit */long long int) ((signed char) arr_75 [i_24 - 2] [i_21] [i_23 + 3] [i_24] [i_22]));
                        var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (signed char)64))))))));
                        var_69 = ((/* implicit */unsigned int) (+(((arr_61 [i_21 - 1]) & (((/* implicit */unsigned long long int) arr_69 [i_26] [i_26] [i_23] [12ULL]))))));
                    }
                    var_70 = ((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_24])) ? (((/* implicit */int) arr_67 [i_21] [i_22])) : (((/* implicit */int) var_5))));
                }
                for (short i_27 = 0; i_27 < 23; i_27 += 2) /* same iter space */
                {
                    var_71 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_68 [i_21 - 2] [i_21] [i_21 - 1] [i_21 - 2] [i_21 - 1])) / (((/* implicit */int) var_2))));
                    var_72 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_22] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_23 + 3]))) : (var_15)));
                    var_73 |= ((/* implicit */unsigned char) arr_66 [i_23]);
                    var_74 = ((/* implicit */signed char) ((unsigned long long int) arr_77 [i_27] [i_27] [i_23] [i_27] [i_27] [i_27]));
                    var_75 = ((((/* implicit */_Bool) (short)-22950)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65512))) : (18446744073709551615ULL));
                }
                for (short i_28 = 0; i_28 < 23; i_28 += 2) /* same iter space */
                {
                    var_76 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_28] [i_23 - 2] [i_22 + 1] [i_21 - 3]))) >= (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_28] [i_23] [i_22 + 1] [i_21])))))));
                    var_77 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_22 + 1] [i_23 - 1] [i_21 + 1])) ? (arr_64 [i_22 + 1] [i_23 + 3] [i_21 - 4]) : (var_8)));
                    var_78 = ((/* implicit */unsigned long long int) arr_69 [i_21] [i_21] [i_23] [i_28]);
                }
                var_79 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_68 [i_21] [i_22] [i_23] [i_21 - 3] [i_21]));
                /* LoopSeq 1 */
                for (short i_29 = 2; i_29 < 22; i_29 += 2) 
                {
                    var_80 = ((/* implicit */short) ((unsigned int) arr_80 [i_23 + 2] [i_22] [i_22] [i_22 + 1]));
                    var_81 = ((/* implicit */unsigned long long int) ((unsigned short) arr_68 [i_22 + 1] [i_22] [i_23] [i_23 - 1] [i_21 - 4]));
                    var_82 = ((unsigned char) arr_81 [i_29] [i_23 - 2] [i_22 + 1]);
                    var_83 = ((/* implicit */unsigned short) max((var_83), (((/* implicit */unsigned short) ((((4294967282U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_21 + 1] [i_21 + 1] [i_21] [i_21 + 1] [(signed char)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_29] [i_29]))) : (arr_64 [i_23 + 1] [i_23 - 1] [i_23 + 1]))))));
                }
            }
            for (unsigned char i_30 = 0; i_30 < 23; i_30 += 2) /* same iter space */
            {
                var_84 -= ((/* implicit */unsigned char) 24U);
                var_85 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_65 [i_21] [i_21 + 1] [i_22 + 1] [i_21 + 1])) : (((/* implicit */int) arr_65 [i_21] [i_21 - 3] [i_22 + 1] [i_21 - 3]))));
                var_86 = ((/* implicit */signed char) ((((((/* implicit */int) arr_65 [i_21 - 4] [(short)5] [i_22 + 1] [(short)5])) << (((((/* implicit */int) var_13)) + (21731))))) / (((/* implicit */int) arr_67 [i_22 + 1] [i_21 - 3]))));
            }
            for (unsigned char i_31 = 0; i_31 < 23; i_31 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_32 = 3; i_32 < 22; i_32 += 2) 
                {
                    var_87 = ((((/* implicit */_Bool) arr_77 [i_32] [i_32] [i_32] [(signed char)19] [i_22] [i_21 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_22] [i_21 - 3]))) : (((((/* implicit */_Bool) arr_79 [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_22] [i_22]))) : (var_9))));
                    var_88 = ((((/* implicit */_Bool) arr_61 [i_21 - 3])) ? (((/* implicit */unsigned int) ((((var_3) + (2147483647))) << (((var_8) - (3954243458U)))))) : (((((/* implicit */_Bool) arr_86 [i_32] [i_22] [i_22] [i_21])) ? (2276584384U) : (((/* implicit */unsigned int) var_3)))));
                    var_89 = ((signed char) (~(var_9)));
                }
                for (unsigned char i_33 = 0; i_33 < 23; i_33 += 2) 
                {
                    var_90 = ((signed char) (unsigned short)38405);
                    var_91 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_33] [i_31] [i_22 + 1] [i_21] [i_21])) ? (arr_72 [i_33] [i_21 - 3] [i_22 + 1] [i_21 - 2] [i_21 - 3]) : (((/* implicit */int) var_11))));
                    var_92 = ((/* implicit */unsigned char) min((var_92), (((/* implicit */unsigned char) arr_71 [i_21] [i_22] [i_33]))));
                    /* LoopSeq 3 */
                    for (signed char i_34 = 0; i_34 < 23; i_34 += 2) 
                    {
                        var_93 = ((/* implicit */unsigned long long int) var_5);
                        var_94 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (17003927642930563129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_33])))));
                        var_95 = ((/* implicit */int) ((((/* implicit */int) arr_75 [i_31] [i_22 + 1] [i_31] [i_33] [i_22])) != (((/* implicit */int) arr_87 [i_22 + 1]))));
                    }
                    for (unsigned char i_35 = 1; i_35 < 22; i_35 += 2) 
                    {
                        var_96 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_21] [i_22 + 1] [i_31] [i_33] [i_35 - 1])) ? (((/* implicit */int) arr_68 [(unsigned char)21] [(unsigned short)8] [i_31] [i_22] [i_21 - 4])) : (((/* implicit */int) arr_68 [(signed char)1] [i_31] [i_31] [i_31] [i_31]))));
                        var_97 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (-707431363) : (((/* implicit */int) arr_75 [i_21] [i_21] [i_21] [i_33] [i_22]))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_83 [(unsigned char)7] [i_22] [i_31])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))));
                        var_98 = ((/* implicit */signed char) (unsigned short)5277);
                    }
                    for (long long int i_36 = 1; i_36 < 22; i_36 += 2) 
                    {
                        var_99 = ((/* implicit */short) ((unsigned int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_21] [i_22 + 1] [10U] [10U]))))));
                        var_100 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)132))) ? (((/* implicit */long long int) 1354907587U)) : (var_15)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_37 = 0; i_37 < 23; i_37 += 2) 
                    {
                        var_101 = ((/* implicit */short) var_0);
                        var_102 = ((/* implicit */short) min((var_102), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_92 [i_22])))) & ((~(var_9))))))));
                        var_103 = ((/* implicit */int) ((unsigned int) arr_71 [i_21 - 2] [i_22] [i_22 + 1]));
                        var_104 = ((((/* implicit */_Bool) 2756672612U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (24U));
                    }
                    for (unsigned int i_38 = 0; i_38 < 23; i_38 += 2) 
                    {
                        var_105 |= ((/* implicit */short) ((unsigned long long int) 4294967272U));
                        var_106 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_70 [i_22 + 1] [i_22] [i_22 + 1] [i_21 - 1])) <= (((/* implicit */int) arr_70 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_21 - 3]))));
                        var_107 = ((/* implicit */unsigned int) min((var_107), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_21]))))) > (var_15))))));
                    }
                }
                for (short i_39 = 0; i_39 < 23; i_39 += 2) 
                {
                    var_108 = ((/* implicit */unsigned char) var_6);
                    /* LoopSeq 1 */
                    for (short i_40 = 0; i_40 < 23; i_40 += 2) 
                    {
                        var_109 = ((/* implicit */long long int) (+(((/* implicit */int) arr_91 [i_39] [i_22] [i_31] [(unsigned char)16] [i_40]))));
                        var_110 = ((/* implicit */short) (-(((/* implicit */int) arr_62 [i_22] [i_22 + 1]))));
                    }
                }
                var_111 = ((/* implicit */short) arr_91 [i_31] [i_22] [i_22 + 1] [i_22] [i_21]);
            }
            for (unsigned char i_41 = 0; i_41 < 23; i_41 += 2) /* same iter space */
            {
                var_112 = ((/* implicit */unsigned char) min((var_112), (((unsigned char) 2005353066))));
                var_113 = ((/* implicit */unsigned int) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
                var_114 = ((/* implicit */short) ((((/* implicit */_Bool) arr_87 [i_21 - 3])) ? (((/* implicit */int) arr_87 [i_21 - 2])) : (((/* implicit */int) arr_60 [i_22 + 1]))));
            }
            var_115 = ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_112 [i_21] [i_21] [i_22] [i_21] [(unsigned short)1])));
        }
        var_116 *= ((/* implicit */short) ((((/* implicit */int) arr_101 [i_21] [i_21] [i_21] [i_21 - 3] [i_21] [12U] [i_21])) << (((/* implicit */int) arr_101 [i_21] [i_21] [i_21] [i_21 - 2] [i_21] [(signed char)8] [i_21]))));
        /* LoopSeq 1 */
        for (unsigned char i_42 = 3; i_42 < 19; i_42 += 2) 
        {
            var_117 -= ((/* implicit */unsigned short) var_10);
            var_118 -= ((/* implicit */unsigned int) (unsigned short)31674);
        }
    }
    var_119 = ((/* implicit */unsigned long long int) min((var_119), (((/* implicit */unsigned long long int) var_11))));
}
