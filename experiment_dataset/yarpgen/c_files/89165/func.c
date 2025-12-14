/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89165
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
    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(10805513653486780039ULL)))) ? (((/* implicit */int) ((signed char) var_0))) : (1402743455)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((signed char) (~((-(((/* implicit */int) (unsigned short)0)))))));
                var_21 = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (~((-(var_10)))));
                            arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((signed char) max(((-(var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)66))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14806))))) ? (((((/* implicit */int) var_16)) / (((-163832982) / (((/* implicit */int) var_8)))))) : (max(((+(((/* implicit */int) (unsigned short)63928)))), ((+(((/* implicit */int) (short)-14806)))))));
                                arr_14 [(short)5] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) arr_4 [i_4]);
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10805513653486780034ULL)))))));
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1] [i_3] [i_4])), (arr_13 [i_2 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 2])));
                            }
                        }
                    } 
                } 
                arr_15 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)103))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */short) (+(min(((~(((/* implicit */int) var_17)))), (469234301)))));
        var_26 = ((/* implicit */unsigned long long int) arr_0 [i_5]);
        arr_20 [i_5] &= ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_4 [(short)4]))))))));
        arr_21 [i_5] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [18U] [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_5 [i_5] [i_5] [(signed char)22] [i_5]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42569))) | (15124790314678905783ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_4)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 16; i_8 += 4) /* same iter space */
            {
                arr_29 [i_6] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6] [i_7 - 2] [i_8] [i_7 + 2] [14LL])) ? (((/* implicit */int) var_4)) : ((+(1957621353)))));
                arr_30 [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((int) var_8));
            }
            for (int i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
            {
                arr_35 [i_6] [i_7] [i_9] = (-(7291084749575049525LL));
                var_27 = ((/* implicit */int) (~(((525672704U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))))));
            }
            var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7 + 2] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
        }
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_25 [i_6])) || (((/* implicit */_Bool) arr_38 [i_6] [i_10]))))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6] [i_10] [i_10] [i_10] [i_10])) / (163832982)));
            arr_39 [i_6] [i_10] [10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) & (((/* implicit */int) arr_5 [i_6] [i_6] [i_6] [i_10]))));
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_11] [i_12] [i_11] [i_12] [i_12])) ? (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (unsigned char)255)))))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    for (unsigned int i_14 = 1; i_14 < 19; i_14 += 1) 
                    {
                        {
                            arr_49 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14070)) | (((/* implicit */int) var_6))));
                            var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((-(arr_46 [i_6] [i_12] [i_13] [i_12])))))), ((-((~(7641230420222771579ULL)))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [(unsigned short)12] [i_14 + 1] [i_13] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */unsigned int) -103721842)) : (2147483648U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_14 + 1] [i_14 + 1] [i_13 + 2] [i_13 + 1])) > (((/* implicit */int) arr_5 [i_14 + 1] [i_14 + 1] [i_13] [i_13 + 1]))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                arr_52 [i_11] [i_15] = ((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-23))))), (max((((/* implicit */long long int) (short)14806)), (9223372036854775807LL))))));
                var_34 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((10851202500456077586ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92)))))))));
                var_35 = ((/* implicit */short) 3746012562038921103LL);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) 10805513653486780030ULL);
                var_37 = ((/* implicit */unsigned short) ((unsigned int) (((_Bool)1) ? (arr_51 [i_6] [i_6] [i_16] [i_16]) : (((/* implicit */unsigned int) arr_17 [i_16])))));
            }
            var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_11] [i_11])) ? (((/* implicit */int) arr_48 [i_6] [15] [i_11] [15] [2ULL])) : (min((((((/* implicit */_Bool) var_13)) ? (arr_41 [i_11] [i_11]) : (((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [i_6])))), (((int) arr_6 [i_6]))))));
            /* LoopSeq 3 */
            for (long long int i_17 = 3; i_17 < 19; i_17 += 1) 
            {
                arr_57 [i_6] [i_17 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((unsigned short)245), (var_14))))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    arr_62 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    /* LoopSeq 3 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) var_18))))))))));
                        arr_65 [i_6] [(unsigned short)10] = ((/* implicit */int) (unsigned short)14);
                    }
                    for (int i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (arr_26 [i_17 + 1] [i_17 - 3] [i_17 + 1] [i_6]))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6])) ? (-5251338181487026992LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                        arr_68 [i_6] [i_18] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_11 [i_17 - 2] [i_17 + 1] [i_17 + 1] [i_17 - 3] [i_17 + 1] [i_17 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-30138))))));
                        arr_69 [i_6] [i_11] [i_20] = ((/* implicit */short) -8923371659969336406LL);
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_6] [i_17 + 1]))))) ? (((unsigned long long int) ((unsigned int) 4294967295U))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_11] [i_17 + 1]))) * (min((arr_67 [i_6] [i_11] [i_17] [i_18] [i_20] [i_20] [19ULL]), (((/* implicit */unsigned long long int) var_10))))))));
                        var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)14811))) / (var_10)));
                    }
                    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        var_43 = ((/* implicit */short) var_15);
                        var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))))) == (((unsigned long long int) (-(((/* implicit */int) var_8)))))));
                    }
                }
            }
            for (short i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                var_45 = ((/* implicit */short) ((1041214541478490696ULL) + (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) (unsigned short)2047)))))));
                arr_77 [i_22] = ((/* implicit */_Bool) min((max((((10805513653486780038ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_11] [i_11] [i_11]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) & (var_12))))))));
                var_46 ^= ((/* implicit */short) (-(-6998941436073628728LL)));
                var_47 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) & (7641230420222771582ULL)));
                arr_78 [i_22] [i_6] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (short)24133)))) + ((+((~(arr_31 [i_22])))))));
            }
            for (long long int i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                arr_82 [(unsigned char)0] [(unsigned char)0] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-2043373987) : (-372835642)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24133))))) : (((var_17) ? (var_9) : (arr_18 [i_6] [i_6]))))) & (max((((/* implicit */int) arr_34 [i_6] [i_11] [i_23] [i_6])), (((1093331028) / (((/* implicit */int) (signed char)19))))))));
                /* LoopSeq 4 */
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    arr_85 [i_24] [5U] [i_11] [i_6] [i_6] = ((/* implicit */signed char) var_7);
                    arr_86 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_24] [i_23] [i_11] [i_6]));
                    arr_87 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_31 [i_6]), (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_3)))))))) * (((((unsigned long long int) arr_40 [i_6] [i_23] [(signed char)17])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                }
                for (unsigned short i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    var_48 = ((/* implicit */unsigned char) ((max((-9057968453344999605LL), (((/* implicit */long long int) 1810724426)))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_59 [i_11] [i_11] [i_11] [i_6])), (var_2)))))));
                    arr_90 [i_11] [i_23] = ((/* implicit */signed char) ((short) (~((~(arr_38 [i_6] [i_11]))))));
                    var_49 = ((/* implicit */int) max((var_49), (((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) + ((-(((/* implicit */int) (short)18244)))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (5834515986090040408ULL)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)157))))))));
                    var_50 = ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_1))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (signed char)6)))))))) ? (((/* implicit */int) var_3)) : ((~((-(((/* implicit */int) var_5)))))));
                    arr_91 [i_6] [i_11] [2LL] [i_25] = ((/* implicit */signed char) ((short) (-(5615994265289345396ULL))));
                }
                for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    var_51 = (((~((~(7641230420222771582ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6] [i_11] [i_23] [i_26])) % (((/* implicit */int) min(((unsigned char)12), (arr_93 [(unsigned char)15] [i_11] [(unsigned char)15] [i_26] [i_11] [i_11]))))))));
                    var_52 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        arr_96 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((unsigned int) var_6)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)28802)), ((unsigned short)36423))))))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) arr_42 [i_23] [i_26])) : (((/* implicit */int) (unsigned char)196))))), ((((_Bool)1) ? (13244987163162866694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))))));
                        var_53 = (~(2));
                        var_54 = var_2;
                    }
                    for (short i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        var_55 = ((/* implicit */int) arr_55 [i_23] [i_28]);
                        var_56 = ((/* implicit */short) 16011356526349004947ULL);
                    }
                }
                for (int i_29 = 0; i_29 < 20; i_29 += 2) 
                {
                    arr_104 [i_6] [i_6] [i_11] [i_23] [i_29] = ((/* implicit */int) ((arr_89 [15] [i_23] [i_6] [i_6]) || (((/* implicit */_Bool) arr_93 [i_6] [i_11] [i_11] [i_11] [i_29] [i_29]))));
                    var_57 = ((/* implicit */int) ((short) arr_5 [i_6] [i_11] [i_23] [i_29]));
                    arr_105 [i_6] [i_29] = ((/* implicit */short) ((unsigned char) ((7742610931992467028ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50332))))));
                    var_58 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (16777215LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                }
            }
        }
        for (unsigned char i_30 = 0; i_30 < 20; i_30 += 4) /* same iter space */
        {
            arr_108 [i_6] [i_30] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_30] [i_6] [i_6] [i_6]))));
            var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) arr_61 [4LL] [i_30] [i_30] [i_30] [i_30]))));
            /* LoopNest 3 */
            for (unsigned int i_31 = 2; i_31 < 18; i_31 += 1) 
            {
                for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 2) 
                {
                    for (long long int i_33 = 2; i_33 < 19; i_33 += 4) 
                    {
                        {
                            var_60 |= ((/* implicit */_Bool) arr_71 [i_6]);
                            var_61 = ((/* implicit */unsigned short) ((min((((1073741312) | (((/* implicit */int) (short)-1)))), (((/* implicit */int) (unsigned char)0)))) / ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_115 [i_33] [i_32] [i_31] [i_30] [i_6])) || (((/* implicit */_Bool) arr_95 [i_33] [i_30] [i_30] [i_6])))))))));
                            arr_117 [i_6] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_6] [i_6] [i_6] [i_6])))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_12 [i_33 - 2] [i_6] [i_31 + 1] [i_6] [i_6]))))) / (((/* implicit */int) var_3)))))));
                            var_62 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)194)), (-641398375)))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) + (arr_114 [i_30] [i_31]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((-472687435) + (472687454))))))));
                        }
                    } 
                } 
            } 
        }
        arr_118 [i_6] = ((/* implicit */long long int) var_18);
    }
    var_63 = ((/* implicit */unsigned char) var_13);
}
