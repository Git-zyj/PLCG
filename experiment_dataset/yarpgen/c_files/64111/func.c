/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64111
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
    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1121598734U)) ? (1297573406U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))))), (((/* implicit */unsigned int) 0))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_9)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned long long int) arr_1 [(unsigned short)5]);
        var_18 |= ((/* implicit */signed char) arr_0 [i_0 + 2]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_19 += arr_2 [i_1] [i_1];
            /* LoopNest 3 */
            for (short i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) min((arr_12 [11] [i_1] [i_2] [i_3] [i_4 - 2] [11]), (((/* implicit */unsigned long long int) arr_11 [(unsigned short)15] [i_3 + 3] [i_4] [i_5]))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((-((-(arr_2 [i_1] [i_2]))))))))));
                            arr_19 [i_1] [18] [i_1] [i_2] &= ((/* implicit */unsigned int) 7);
                            var_21 = var_2;
                            var_22 = ((/* implicit */unsigned int) min((((unsigned long long int) (+(arr_6 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)38)) : (((/* implicit */int) (signed char)7)))))));
                        }
                    } 
                } 
            } 
            arr_20 [i_2] [i_1] [i_1] = ((/* implicit */int) 0ULL);
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_2] [i_2])) << (((((int) arr_4 [i_2] [i_2] [i_1])) - (57653)))));
        }
        arr_21 [i_1] = ((/* implicit */unsigned short) min((4294967275U), (898778718U)));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (0) : (((/* implicit */int) (unsigned short)6284))));
            var_25 |= arr_12 [i_1] [i_6] [i_6 + 2] [i_6] [i_6] [i_6];
            arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 325795622)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (short)-38))));
        }
        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            arr_28 [i_1] [(signed char)19] |= arr_14 [i_1] [i_1] [i_1] [15];
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_9 [i_1] [i_7] [i_1] [i_1]))));
        }
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            var_27 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_11 [i_1] [i_8 - 2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_8] [i_8 - 2] [i_8])), (8388607ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)38))) ^ (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))))));
            /* LoopSeq 4 */
            for (signed char i_9 = 4; i_9 < 20; i_9 += 1) /* same iter space */
            {
                arr_34 [i_9 - 1] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_9 - 4] [(unsigned short)20] [10U] [i_1])) : (min((((((((/* implicit */int) var_10)) + (2147483647))) << (((arr_33 [i_9 - 1] [i_8] [i_1]) - (3516909809U))))), (((((/* implicit */int) var_8)) / (arr_31 [i_9])))))));
                var_28 -= ((/* implicit */int) ((18446744073709551615ULL) <= (506996787854554032ULL)));
                arr_35 [i_1] [i_8 - 1] [i_9] = ((/* implicit */signed char) (short)4880);
                var_29 = ((/* implicit */signed char) arr_3 [i_1]);
            }
            for (signed char i_10 = 4; i_10 < 20; i_10 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_14)), (arr_6 [i_8 - 1])))), (arr_27 [i_8 - 2])))) ? (var_9) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_1] [i_1])))))));
                var_30 = ((/* implicit */int) var_10);
            }
            for (signed char i_11 = 4; i_11 < 20; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_31 = arr_46 [i_12] [i_8] [i_12];
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_40 [i_13] [i_13] [i_13]))));
                            var_33 = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) 
                {
                    var_34 = ((/* implicit */signed char) arr_6 [(signed char)12]);
                    arr_51 [i_1] [i_8 - 2] [i_11] [i_11] [12] = ((/* implicit */short) var_12);
                }
                for (unsigned char i_15 = 2; i_15 < 19; i_15 += 3) 
                {
                    var_35 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_11])) ? (((/* implicit */int) var_11)) : (var_4)))) / (((((/* implicit */_Bool) arr_29 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (arr_43 [i_1] [i_11 - 1] [i_15])))))) ? (var_5) : (max(((+(0ULL))), (10984606603787477109ULL)))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_29 [i_1]) : (((/* implicit */int) (unsigned char)242))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_37 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)38)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6283)))))) ? (((((/* implicit */_Bool) arr_5 [i_8] [i_17])) ? (((/* implicit */unsigned int) var_4)) : (arr_33 [1] [(unsigned short)17] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_16] [(signed char)10] [i_1]))))) << ((((~(((/* implicit */int) var_10)))) - (52)))));
                        arr_61 [i_16] [i_16] [i_8] [i_8] [i_8] [18U] [i_16] = var_9;
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 3; i_18 < 18; i_18 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned int) arr_53 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8 - 2]);
                        arr_64 [(signed char)18] [i_16] [(signed char)18] = ((/* implicit */_Bool) (-(arr_58 [i_16] [i_8 + 1] [i_16] [i_11 - 4] [i_11 - 4])));
                    }
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        arr_68 [i_1] [i_8] [i_16] [i_16] [i_8] = ((/* implicit */signed char) (-(var_12)));
                        var_39 = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) (unsigned char)88)))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((_Bool) 15)))));
                        var_41 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_11] [i_11 - 4] [i_19])) ? (((/* implicit */int) arr_14 [i_8 - 1] [i_11 - 1] [i_11 - 4] [i_11])) : (((/* implicit */int) var_2))))));
                    }
                    arr_69 [i_1] [(signed char)12] [i_1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)66)) << (((812214299) - (812214284))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_29 [i_8 - 1])) & (4294967295U)));
                /* LoopNest 2 */
                for (signed char i_21 = 4; i_21 < 20; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        {
                            arr_80 [i_1] [i_8] [(signed char)12] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_42 [i_8] [i_20] [i_20] [i_22]))));
                            arr_81 [i_1] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)228))))) ? (((((/* implicit */unsigned int) arr_29 [i_21 - 4])) & (var_6))) : (arr_43 [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                        }
                    } 
                } 
                arr_82 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_8 - 2] [i_8] [20] [i_1] [i_8 - 2] [i_20])) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_65 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_1]))));
            }
        }
    }
    for (unsigned int i_23 = 0; i_23 < 15; i_23 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned long long int) ((_Bool) max((arr_6 [i_23]), (arr_6 [i_23]))));
        var_44 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_23] [i_23])) ? (arr_67 [i_23] [i_23] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_23] [i_23])))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_33 [i_23] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_23] [(signed char)2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_23] [i_23] [i_23])) >= (var_7))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_23] [i_23] [i_23])))));
    }
    for (unsigned int i_24 = 0; i_24 < 15; i_24 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_25 = 4; i_25 < 14; i_25 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_26 = 1; i_26 < 14; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 1; i_27 < 14; i_27 += 1) 
                {
                    for (signed char i_28 = 3; i_28 < 12; i_28 += 4) 
                    {
                        {
                            var_45 = arr_7 [4U];
                            var_46 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_94 [i_28] [i_24] [i_24] [i_24])) ? (arr_94 [i_28 + 3] [i_24] [i_24] [i_24]) : (arr_94 [i_24] [i_24] [i_24] [i_24]))), (((/* implicit */unsigned long long int) arr_23 [i_26] [i_24]))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */signed char) arr_93 [i_24] [12U] [i_24] [(_Bool)1] [i_26]);
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((signed char) ((((arr_93 [i_24] [i_24] [i_25] [i_24] [i_24]) + (2147483647))) << (((((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2399343979U))) - (34595U)))))))));
                /* LoopNest 2 */
                for (unsigned int i_29 = 1; i_29 < 13; i_29 += 4) 
                {
                    for (int i_30 = 0; i_30 < 15; i_30 += 4) 
                    {
                        {
                            arr_105 [i_24] [i_24] [i_26] [i_30] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-3116)) * (((/* implicit */int) (short)-33)))));
                            var_49 = ((/* implicit */signed char) var_9);
                            var_50 = ((/* implicit */signed char) ((max((arr_99 [i_25 + 1] [i_26 - 1]), (arr_99 [i_25 - 3] [i_26 + 1]))) <= (((/* implicit */int) ((signed char) min((((/* implicit */int) var_11)), (0)))))));
                        }
                    } 
                } 
            }
            for (int i_31 = 0; i_31 < 15; i_31 += 1) 
            {
                var_51 |= ((/* implicit */_Bool) (-2147483647 - 1));
                var_52 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_74 [9] [i_25] [i_31] [i_31] [i_31])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51216))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) 127205380)) : (var_12))))) << (((/* implicit */int) ((max((7018311271793573638ULL), (((/* implicit */unsigned long long int) (signed char)127)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)33))))))));
            }
            /* LoopNest 3 */
            for (int i_32 = 0; i_32 < 15; i_32 += 1) 
            {
                for (unsigned short i_33 = 0; i_33 < 15; i_33 += 4) 
                {
                    for (signed char i_34 = 1; i_34 < 12; i_34 += 3) 
                    {
                        {
                            arr_115 [i_33] [i_33] [i_24] = ((/* implicit */int) ((unsigned int) (((+(((/* implicit */int) (unsigned char)249)))) << (((((/* implicit */int) (unsigned char)179)) - (171))))));
                            arr_116 [(unsigned short)11] [(unsigned short)2] [i_32] [i_24] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-((~(((/* implicit */int) arr_22 [i_32])))))) : (((/* implicit */int) ((17939747285854997594ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))))));
                        }
                    } 
                } 
            } 
            var_53 = ((((((/* implicit */_Bool) ((var_4) << (((5013684986358515315ULL) - (5013684986358515314ULL)))))) ? ((~(arr_60 [9] [i_25 - 2] [i_25] [i_24] [i_24]))) : (min((((/* implicit */unsigned int) (short)-12992)), (1127113139U))))) << (((((((/* implicit */_Bool) arr_41 [i_25 - 1] [i_25] [i_25 - 1] [i_25 - 3])) ? (2470608495U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_25] [i_25 - 1] [i_25 - 3] [i_25 - 3]))))) - (2470608489U))));
        }
        for (signed char i_35 = 0; i_35 < 15; i_35 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_36 = 0; i_36 < 15; i_36 += 2) 
            {
                arr_121 [i_24] [i_24] = ((/* implicit */unsigned long long int) var_11);
                arr_122 [i_35] [i_36] [i_35] [i_35] |= ((/* implicit */unsigned short) (unsigned char)10);
                var_54 = ((/* implicit */unsigned long long int) (+(arr_66 [i_24] [i_24] [i_35] [i_24] [i_35] [i_36] [i_36])));
                var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) arr_76 [i_24] [11] [i_36] [i_36] [i_36]))));
                var_56 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_102 [i_24] [i_35] [i_36] [i_36] [i_35]))), (((((/* implicit */_Bool) (-(10746197417278582212ULL)))) ? (((((/* implicit */_Bool) (short)-34)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_97 [i_24] [i_35] [i_35] [i_24])) & (((/* implicit */int) arr_117 [i_24])))))))));
            }
            var_57 = min((((2097151ULL) & (13433059087351036295ULL))), (((/* implicit */unsigned long long int) (_Bool)1)));
        }
        for (signed char i_37 = 0; i_37 < 15; i_37 += 2) /* same iter space */
        {
            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (3745344767U) : (2068843340U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_24] [i_37])) ? (((/* implicit */int) arr_78 [i_24] [i_24] [i_24] [i_24] [(_Bool)1] [i_37] [i_37])) : (-1324324561)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_118 [i_24] [i_24] [i_37]))))) ? (((/* implicit */unsigned int) max((arr_103 [i_24] [i_24] [i_37]), (((/* implicit */int) var_11))))) : (min((2531960465U), (3167854156U)))))));
            var_59 |= var_7;
            var_60 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)11)), ((short)9871))))))), (max((((((/* implicit */_Bool) arr_120 [i_37])) ? (arr_38 [i_24] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))), (((/* implicit */unsigned long long int) (-(arr_101 [i_37] [i_37] [i_37] [i_37]))))))));
            var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_76 [i_24] [i_37] [3] [i_24] [i_37])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_32 [i_37] [i_24]))) <= (1195157941U))))) : (((((/* implicit */_Bool) arr_101 [i_24] [14U] [i_24] [i_24])) ? (((4520176990251615080ULL) << (((((/* implicit */int) (unsigned short)53728)) - (53689))))) : (((/* implicit */unsigned long long int) ((arr_56 [i_24] [i_37] [i_37] [i_37]) << (((1127113138U) - (1127113136U))))))))));
        }
        for (signed char i_38 = 0; i_38 < 15; i_38 += 2) /* same iter space */
        {
            var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_114 [i_24] [i_24] [i_24] [i_38] [i_38])) ? (((/* implicit */unsigned int) arr_114 [i_24] [i_24] [i_24] [i_38] [i_24])) : (var_9)))) ? (min((arr_114 [i_38] [i_38] [i_38] [i_24] [i_24]), (arr_114 [i_24] [i_24] [i_38] [i_38] [i_38]))) : (((/* implicit */int) ((signed char) arr_114 [i_24] [i_24] [i_24] [i_38] [i_38])))));
            var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 222631728U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)178), (((/* implicit */unsigned char) (_Bool)1)))))));
        }
        var_64 |= ((/* implicit */unsigned short) arr_40 [i_24] [i_24] [i_24]);
    }
}
