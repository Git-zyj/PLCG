/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98400
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
    var_18 = ((/* implicit */short) var_17);
    var_19 = var_16;
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (-1))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (657100685701362128LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) (unsigned char)3))));
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_23 ^= ((/* implicit */unsigned char) (signed char)-89);
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((long long int) (_Bool)1));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) min(((unsigned char)17), ((unsigned char)19)))) : (((/* implicit */int) (unsigned char)255)))));
                            var_25 = ((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)14))));
                            var_26 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)6)), (18446744073709551615ULL)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)122)))))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */_Bool) (unsigned char)19)) ? (var_7) : (-107779807)))))) ? (0ULL) : (((/* implicit */unsigned long long int) 2147483647))));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                var_29 ^= arr_12 [i_1 + 1] [i_1 + 1] [i_6 + 1] [10LL];
                var_30 = ((/* implicit */short) (((_Bool)1) ? (-7690614337547814277LL) : (((/* implicit */long long int) -1784398691))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 3; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) (unsigned char)255)) || ((_Bool)1));
                            arr_25 [i_1] [(signed char)2] [i_7] [i_1] [i_1] = var_0;
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) (-(((max((606835284356730886LL), (((/* implicit */long long int) var_7)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((_Bool) (unsigned char)3)))));
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_35 = (+(((/* implicit */int) (signed char)-9)));
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) : (((((/* implicit */_Bool) (signed char)-113)) ? (896810098319725635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))))));
                var_36 = ((/* implicit */int) ((unsigned short) (signed char)-20));
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-123)) | (((/* implicit */int) (signed char)58))));
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        arr_36 [i_1] [i_1] [i_1] [i_12 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 701794590796010442ULL))));
                        var_38 = ((/* implicit */signed char) ((int) (signed char)-111));
                    }
                    var_39 = ((int) (signed char)-1);
                    var_40 = ((/* implicit */unsigned char) ((-1171578581) | (((/* implicit */int) (signed char)-65))));
                    var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32749)))) * (((/* implicit */int) (unsigned char)76))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_42 = ((/* implicit */signed char) max((var_42), ((signed char)0)));
                var_43 = ((/* implicit */unsigned long long int) ((833825204) / (((/* implicit */int) (signed char)19))));
                var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [2ULL] [10LL] [10LL] [2ULL])) || (((/* implicit */_Bool) arr_5 [4] [i_13]))));
            }
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((17549933975389825980ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))))))))));
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46937))));
            /* LoopSeq 1 */
            for (int i_15 = 3; i_15 < 8; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    var_47 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1003206936))));
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18605)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned short)46937)))))));
                        var_49 = ((/* implicit */signed char) 8954388438413622357ULL);
                        var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) 793408674))));
                    }
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) + (-833825202)));
                        var_52 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 2) 
                    {
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)-115))));
                        var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-11))));
                        var_55 ^= ((/* implicit */long long int) var_12);
                        var_56 = ((/* implicit */short) var_3);
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    var_57 ^= ((/* implicit */unsigned char) (unsigned short)54253);
                    var_58 = ((/* implicit */signed char) var_16);
                }
            }
        }
        for (short i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
        {
            var_59 |= (-(((/* implicit */int) (signed char)-123)));
            /* LoopSeq 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_60 = ((/* implicit */signed char) (_Bool)1);
                var_61 = ((/* implicit */int) ((unsigned char) (unsigned char)48));
                var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)255)))))));
            }
            for (unsigned short i_23 = 3; i_23 < 9; i_23 += 3) 
            {
                var_63 = ((/* implicit */_Bool) (-(-1634776379)));
                /* LoopSeq 4 */
                for (int i_24 = 0; i_24 < 12; i_24 += 2) /* same iter space */
                {
                    arr_72 [i_1] [i_21] [i_23] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3087455461600708508LL)) ? (((((/* implicit */int) (unsigned short)1016)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)134))));
                        var_65 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
                        var_66 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [(unsigned char)6] [i_1]))) : (2886552616474616148LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1019))))) : (((/* implicit */int) (unsigned char)15)));
                        var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)163)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)9856)) : (((/* implicit */int) (short)24369)))))));
                    }
                    var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10854731783289291441ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1016))));
                }
                for (int i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
                {
                    var_69 = ((/* implicit */int) (short)-13688);
                    var_70 = ((((/* implicit */_Bool) -5337475042396578682LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_66 [i_1 - 1] [i_1] [i_1]));
                }
                for (unsigned long long int i_27 = 2; i_27 < 11; i_27 += 3) 
                {
                    var_71 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)-91)), ((unsigned char)79)));
                    /* LoopSeq 3 */
                    for (unsigned short i_28 = 0; i_28 < 12; i_28 += 3) 
                    {
                        var_72 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) (unsigned short)65535))));
                        var_73 = ((/* implicit */unsigned char) max((var_73), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(-1LL)))))))));
                    }
                    for (int i_29 = 2; i_29 < 9; i_29 += 3) 
                    {
                        var_74 = ((/* implicit */long long int) var_6);
                        arr_84 [i_1] = ((/* implicit */signed char) max(((unsigned short)1016), (((/* implicit */unsigned short) (unsigned char)232))));
                        var_75 = ((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1]);
                        var_76 = ((/* implicit */short) (+(((/* implicit */int) (short)15105))));
                    }
                    for (signed char i_30 = 2; i_30 < 9; i_30 += 3) 
                    {
                        var_77 = ((/* implicit */int) var_0);
                        var_78 = ((/* implicit */_Bool) min((var_78), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_88 [i_1 - 1] [i_1] [i_23 + 3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)254))));
                        var_79 = ((/* implicit */short) min((var_79), (((/* implicit */short) (+(((/* implicit */int) (signed char)127)))))));
                        var_80 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)32766)) : (((/* implicit */int) (signed char)109))));
                    }
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    arr_91 [i_21] [i_21] [i_23] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_4)));
                    var_81 = ((/* implicit */int) var_12);
                }
                /* LoopSeq 3 */
                for (long long int i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_33 = 1; i_33 < 10; i_33 += 2) 
                    {
                        var_82 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12725))));
                        var_83 |= ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)32769)))));
                        var_84 = ((/* implicit */signed char) max((var_84), (((/* implicit */signed char) arr_14 [i_1] [i_21] [(unsigned short)4] [i_32] [i_21] [i_1] [i_23 - 1]))));
                        var_85 = ((/* implicit */signed char) var_6);
                    }
                    var_86 = ((/* implicit */int) max((var_86), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-91)) ? (-5562706956539748014LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (long long int i_34 = 0; i_34 < 12; i_34 += 3) 
                {
                    var_87 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)222))));
                    var_88 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (unsigned short)6232))));
                    arr_101 [(signed char)8] [i_1] [i_1] [(signed char)0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_23 - 2] [(unsigned char)11] [i_1 + 1]))));
                    var_89 = ((/* implicit */unsigned char) max((var_89), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-101)))))));
                }
                for (unsigned char i_35 = 2; i_35 < 10; i_35 += 3) 
                {
                    var_90 = (+(((/* implicit */int) (signed char)-23)));
                    var_91 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)32782)) + (((/* implicit */int) (unsigned char)243))));
                }
            }
            var_92 = ((/* implicit */long long int) max((var_92), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_12)))))));
            var_93 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) arr_68 [i_1 + 1] [i_21] [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_86 [i_21] [i_21] [i_1] [i_1] [i_21] [i_21] [(unsigned short)1]))))));
            /* LoopSeq 1 */
            for (signed char i_36 = 1; i_36 < 11; i_36 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_37 = 0; i_37 < 12; i_37 += 3) /* same iter space */
                {
                    var_94 = ((/* implicit */signed char) max((var_94), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)255)), ((((-(((/* implicit */int) (signed char)-1)))) - ((-(436082856))))))))));
                    var_95 = ((/* implicit */unsigned char) ((long long int) (unsigned char)121));
                }
                /* vectorizable */
                for (unsigned char i_38 = 0; i_38 < 12; i_38 += 3) /* same iter space */
                {
                    var_96 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -526058026)) ? (((/* implicit */int) (unsigned short)32769)) : (((/* implicit */int) (_Bool)1))));
                    var_97 = ((/* implicit */signed char) (!((_Bool)1)));
                    /* LoopSeq 1 */
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        var_98 = ((/* implicit */unsigned char) min((var_98), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 5944563764810661326LL)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3376)))))))));
                        var_99 = ((/* implicit */signed char) max((var_99), (((/* implicit */signed char) var_16))));
                    }
                    var_100 = ((/* implicit */unsigned char) max((var_100), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2907191872651767437ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60168)))))));
                }
                arr_119 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_45 [i_1 + 1]);
            }
        }
    }
}
