/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72618
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-113)) * (((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 -= ((/* implicit */unsigned char) var_16);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_14))) << (((((/* implicit */int) (short)(-32767 - 1))) + (32784)))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (signed char)83))));
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_17)))) << (((((/* implicit */int) (signed char)112)) - (84)))));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (signed char)-109))));
                            var_26 = ((/* implicit */_Bool) arr_10 [i_0] [i_3]);
                            arr_20 [i_0 - 1] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)61))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (signed char)-119))) <= (((/* implicit */int) ((signed char) var_1)))));
                var_28 = ((/* implicit */unsigned char) ((short) var_6));
            }
            arr_21 [i_3] |= ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) min(((signed char)-119), ((signed char)127)))), (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))));
            arr_22 [i_3] = ((/* implicit */long long int) (_Bool)1);
            arr_23 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((arr_13 [i_0 - 1] [i_3] [i_0] [i_0 - 1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-74), (((/* implicit */signed char) var_19)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) -2536778305666691207LL))))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                var_29 = ((/* implicit */long long int) max((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_3] [i_7] [i_7])), (arr_9 [i_0])))), ((+(((/* implicit */int) arr_8 [i_0])))))), (((/* implicit */int) var_14))));
                var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned char) (signed char)-113))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_14))))) : (((((/* implicit */int) (signed char)-67)) & (((/* implicit */int) (signed char)-125))))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_29 [i_0 - 1] [i_8] [i_0 - 1] = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 4 */
            for (long long int i_9 = 3; i_9 < 23; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_18))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_6))))))));
                        arr_38 [(_Bool)1] [(unsigned short)23] [i_9] [i_10] [(_Bool)1] = ((/* implicit */signed char) (-(((unsigned long long int) var_8))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) var_13);
                        var_34 = ((/* implicit */_Bool) var_1);
                        arr_42 [i_0] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) var_7))))));
                        var_35 &= ((unsigned long long int) (short)32746);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_36 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)85)))))));
                        arr_46 [i_9] [i_8] [i_9 - 1] [i_10] [i_8] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)34924));
                        arr_47 [i_9] = ((/* implicit */short) ((signed char) var_13));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) >> (((/* implicit */int) var_19))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((unsigned int) arr_7 [i_0 - 1] [i_0 - 1] [i_14])) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
                    }
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) >> (((2199021158400LL) - (2199021158383LL))))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_40 = ((/* implicit */unsigned short) var_3);
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 4167519402U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4058383866U))))) : ((+(((/* implicit */int) (short)32767))))));
                    arr_52 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) ((unsigned char) (short)-9231)))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_42 = ((/* implicit */short) var_9);
                    var_43 = (unsigned char)254;
                    var_44 |= -6651900670956312150LL;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        var_45 = ((/* implicit */_Bool) -770418670483673124LL);
                        arr_59 [i_0 - 1] [i_9] [i_16] [i_17] = ((/* implicit */_Bool) var_9);
                    }
                    for (short i_18 = 3; i_18 < 23; i_18 += 3) 
                    {
                        var_46 = ((short) ((((/* implicit */int) (short)23016)) % (((/* implicit */int) (unsigned char)255))));
                        arr_62 [i_16] [i_8] [i_8] [i_9] [i_8] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((signed char) ((long long int) 16LL)));
                        var_47 = ((((/* implicit */int) ((unsigned short) arr_8 [i_16]))) == (((/* implicit */int) ((unsigned short) 6651900670956312147LL))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_67 [i_0] [i_0] [i_0] [i_9] [i_0] = (!(((/* implicit */_Bool) 8388607U)));
                        var_48 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)16651)))))));
                        var_49 = ((/* implicit */_Bool) ((429702899U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    }
                    arr_68 [i_0] [(_Bool)1] [i_9] [(short)5] [i_9] [i_0] = ((/* implicit */unsigned char) (-(4072606292U)));
                }
                for (signed char i_20 = 4; i_20 < 21; i_20 += 3) 
                {
                    var_50 = ((arr_24 [i_0] [i_0] [i_0 - 1]) ? (-6651900670956312151LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))));
                    var_51 = 7723076355337774732LL;
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        arr_73 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_9] [i_0 - 1] = ((/* implicit */_Bool) ((arr_31 [i_0 - 1]) ? (((/* implicit */int) arr_31 [i_0 - 1])) : (((/* implicit */int) var_7))));
                        var_52 = ((/* implicit */unsigned int) var_7);
                        arr_74 [i_21] [i_20 - 4] [i_9] [(_Bool)1] [i_0 - 1] = ((/* implicit */_Bool) var_8);
                        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (-(4286578702U))))));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_22 = 4; i_22 < 23; i_22 += 2) 
                {
                    var_54 = ((/* implicit */long long int) (unsigned short)15064);
                    arr_78 [i_0] [i_9] [i_22] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 4294967289U)) : (-1LL))));
                }
                /* LoopSeq 1 */
                for (long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    var_55 = ((/* implicit */unsigned short) (unsigned char)55);
                    var_56 = ((/* implicit */unsigned int) min((var_56), (4294967295U)));
                }
            }
            for (short i_24 = 2; i_24 < 23; i_24 += 4) 
            {
                var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((long long int) -5083582595410640828LL)))));
                arr_85 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((long long int) arr_6 [i_0 - 1] [i_8] [(unsigned short)22])) : (((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50472))))))));
                var_58 *= ((/* implicit */long long int) var_17);
            }
            for (signed char i_25 = 0; i_25 < 25; i_25 += 4) 
            {
                var_59 = ((/* implicit */unsigned char) ((signed char) var_3));
                arr_89 [(short)0] [i_8] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17683974582139593296ULL)) ? (-3003934332714596064LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_18) >= (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))));
                var_60 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
            }
            for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((((unsigned long long int) arr_1 [i_26] [i_26])) == (((/* implicit */unsigned long long int) var_13)))))));
                var_62 = ((/* implicit */unsigned int) ((signed char) var_6));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            var_63 = ((/* implicit */unsigned char) (~(389773461059974844LL)));
            var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6599746170859832721LL)))))));
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_30 = 0; i_30 < 25; i_30 += 4) 
                    {
                        var_65 = ((/* implicit */unsigned char) ((signed char) var_11));
                        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5240231534545681977LL)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_15))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_104 [i_0] [i_0 - 1] [i_27] [i_28] [i_29 + 1] [i_27] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) 17683974582139593296ULL)))) | (arr_37 [i_29 + 1] [i_29 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        var_67 = ((/* implicit */unsigned long long int) var_5);
                        var_68 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)9248)) : (((/* implicit */int) var_5))))) ? (((762769491569958320ULL) & (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) 4528556028349632028LL))));
                        arr_105 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((unsigned short) ((signed char) arr_75 [i_0] [i_27] [i_28] [(signed char)3] [i_31])));
                    }
                    for (signed char i_32 = 0; i_32 < 25; i_32 += 2) 
                    {
                        var_69 *= ((/* implicit */short) ((unsigned long long int) ((arr_60 [i_0] [i_32] [i_27] [i_0] [i_0] [i_0] [i_32]) != (-7663487196951053951LL))));
                        var_70 = ((/* implicit */signed char) (-(((/* implicit */int) (short)6037))));
                        arr_110 [i_27] [i_29 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 824502768750336341LL)) ? (((/* implicit */int) (unsigned short)62222)) : (((/* implicit */int) (short)13352)))) << (((((((/* implicit */_Bool) arr_30 [i_0] [(_Bool)1] [(_Bool)1] [i_32])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (5127041319659893196LL))) - (107LL)))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_33 = 3; i_33 < 21; i_33 += 2) 
                    {
                        var_71 -= ((/* implicit */_Bool) arr_95 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        arr_113 [i_0] [i_0 - 1] [22LL] [i_0] [i_0] |= ((/* implicit */signed char) var_13);
                    }
                    for (short i_34 = 4; i_34 < 22; i_34 += 1) 
                    {
                        var_72 ^= var_11;
                        var_73 = ((/* implicit */long long int) ((unsigned char) var_19));
                    }
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        var_74 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)121)))) ? (((long long int) arr_56 [i_28] [(unsigned short)2] [i_29] [i_28] [(unsigned short)2] [i_0])) : (((/* implicit */long long int) 4294967295U))));
                        var_75 = ((/* implicit */_Bool) ((short) 1236187427U));
                        arr_120 [i_28] [i_27] [i_28] [i_28] [i_27] = var_5;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 1; i_36 < 23; i_36 += 3) 
                    {
                        arr_123 [i_36] [i_28] [i_36] = ((/* implicit */unsigned short) ((long long int) 3828288653U));
                        var_76 -= ((/* implicit */short) ((unsigned long long int) 2562001618324939181ULL));
                        var_77 *= ((/* implicit */long long int) (-(((/* implicit */int) ((short) 15884742455384612435ULL)))));
                    }
                    arr_124 [i_29] [i_27] [i_28] [i_27] [i_29 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_16)))) ? (2181843386368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11540)))));
                }
                for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) /* same iter space */
                {
                    var_78 = ((/* implicit */short) ((_Bool) 4294967282U));
                    /* LoopSeq 1 */
                    for (long long int i_38 = 0; i_38 < 25; i_38 += 3) 
                    {
                        arr_130 [i_37] [i_37] [i_28] [(signed char)9] [i_37] = ((/* implicit */short) ((long long int) var_15));
                        var_79 = ((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)6031))))));
                    }
                    arr_131 [i_27] [i_27] [i_27] [i_37] [i_27] = ((/* implicit */long long int) ((unsigned int) 434465460U));
                    arr_132 [i_27] [i_37] [i_27] = ((/* implicit */unsigned long long int) ((_Bool) var_17));
                    /* LoopSeq 4 */
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        arr_135 [i_37] [i_28] [i_37] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99))))) ? (5127041319659893200LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_114 [i_0] [i_0] [i_28] [i_37 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_27] [i_28]))))))));
                        var_80 = ((/* implicit */long long int) min((var_80), (((/* implicit */long long int) (signed char)126))));
                        var_81 = ((/* implicit */unsigned char) 17683974582139593296ULL);
                    }
                    for (signed char i_40 = 0; i_40 < 25; i_40 += 3) 
                    {
                        arr_139 [i_0] [i_27] [i_28] [i_37] [i_40] [i_28] [i_0] = ((/* implicit */long long int) var_5);
                        var_82 = ((/* implicit */long long int) var_1);
                    }
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                    {
                        var_83 = ((/* implicit */short) 26U);
                        var_84 = ((/* implicit */unsigned short) max((var_84), (((/* implicit */unsigned short) -8746319932536269838LL))));
                        var_85 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 4129371032864798661ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (2026360747U)))));
                    }
                    for (long long int i_42 = 0; i_42 < 25; i_42 += 2) 
                    {
                        arr_145 [i_0] [i_27] [i_37] [i_37] [i_42] = ((/* implicit */unsigned short) var_1);
                        var_86 = ((/* implicit */long long int) min((var_86), (((/* implicit */long long int) (_Bool)1))));
                    }
                }
                arr_146 [i_0] [i_27] [i_28] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5636764698686969482LL)))))) % (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0] [i_27] [i_28])) ? (1168487598U) : (3828288658U)))));
                var_87 = ((/* implicit */short) min((var_87), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) ((unsigned char) arr_36 [i_0] [i_27] [i_27] [i_27] [i_28]))) : (((/* implicit */int) (_Bool)1)))))));
            }
        }
        var_88 = ((/* implicit */short) min((var_88), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) var_19))), (var_8)))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) ((unsigned short) 3828288653U)))))))))));
    }
    var_89 = ((/* implicit */long long int) var_15);
    var_90 = ((/* implicit */_Bool) min((var_90), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_16))))), (min((var_18), (3860501840U)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-9994)) % (((/* implicit */int) (short)-11541)))))) : (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (unsigned char)248))))))))));
    var_91 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((-(((((/* implicit */_Bool) var_14)) ? (3860501835U) : (434465460U))))));
    var_92 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % ((+(5481951434195687600LL)))));
}
