/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68688
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * ((-(((((/* implicit */_Bool) -744230490)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))))))))));
    var_16 ^= ((/* implicit */unsigned char) -1482934268274987010LL);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */short) var_8);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_3]))));
                            var_18 = ((/* implicit */signed char) (_Bool)1);
                            var_19 -= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) + (((/* implicit */unsigned long long int) var_3))))));
                            var_20 *= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (short)7)) ? (var_12) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)3643)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) -866617626)) ? (-866617626) : (((/* implicit */int) (unsigned char)205))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_5);
                arr_13 [(short)14] [i_0] [16] |= ((/* implicit */unsigned short) ((unsigned char) -866617616));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 219265355U))) ? (var_14) : (((((/* implicit */_Bool) arr_8 [i_2] [(short)4] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) : (613238280994149587ULL)))))) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) ((unsigned char) var_3)))))) : (((((-414135208) < (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31))))) : (arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2]))))))));
            }
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) arr_9 [i_5 - 1] [i_5] [8U] [i_1])) : (max((17833505792715402028ULL), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(var_3)))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 613238280994149587ULL)) ? (((1023ULL) * (((/* implicit */unsigned long long int) -1504056888)))) : (arr_8 [i_0] [i_1] [i_1] [i_0] [i_5] [i_5])))) ? (max((arr_8 [i_5] [i_1] [i_1] [i_1] [i_5 + 2] [i_5 + 2]), (((/* implicit */unsigned long long int) 817427791991954224LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7)))));
                var_24 = ((/* implicit */unsigned int) 3080575793605362822LL);
            }
            var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) var_11)))) + (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_1])))))));
        }
    }
    for (unsigned char i_6 = 4; i_6 < 18; i_6 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    var_26 = (-(-329179946));
                    arr_26 [i_9] [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)27921)) : (((/* implicit */int) (short)27730)));
                    arr_27 [i_6] [i_7] [i_6] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9836532791162672602ULL)));
                    var_27 = ((/* implicit */short) (-(arr_21 [i_9 - 1] [i_6 - 1])));
                }
                var_28 = (+(((/* implicit */int) arr_3 [i_6 - 1])));
                arr_28 [i_8] [i_8] [i_7] [i_6] = ((/* implicit */short) ((unsigned int) (unsigned char)206));
                arr_29 [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_6 + 1])) + (((/* implicit */int) var_1))));
            }
            var_29 = ((/* implicit */unsigned char) ((_Bool) (-(var_12))));
            var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2251799813685247ULL)) ? (3566376359419595012ULL) : (801962297238360353ULL)));
            var_31 -= ((/* implicit */short) -1);
        }
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
            /* LoopSeq 3 */
            for (long long int i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                arr_36 [i_6] [i_6] = ((/* implicit */signed char) var_7);
                arr_37 [i_6] [i_6] [i_10] [i_6] = ((/* implicit */_Bool) var_14);
            }
            for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((arr_17 [i_6]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (((((/* implicit */_Bool) 2938492871809893870LL)) ? (var_10) : (((/* implicit */long long int) 2130428937U))))))))))));
                            var_34 = ((/* implicit */unsigned short) var_2);
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) arr_20 [i_12])), (var_4))))))) ? (((((/* implicit */_Bool) arr_8 [i_14] [i_14 - 2] [i_14] [i_14 - 2] [i_14] [i_14])) ? (arr_8 [i_14] [i_14 + 3] [i_14] [i_14 - 4] [6] [i_14]) : (arr_8 [i_14] [i_14 + 2] [i_14] [i_14 + 1] [i_14] [16LL]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)61)) - (((/* implicit */int) var_4))))))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_12)), (var_8)));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (-415290968)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) (signed char)-31)) ? (var_14) : (((/* implicit */unsigned long long int) arr_49 [i_6] [i_15] [i_6] [i_6]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-1024), (2049159961)))))))) : (var_3)));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_3 [i_6 + 1])), (((((/* implicit */_Bool) arr_3 [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_8))))))));
                            var_39 ^= ((/* implicit */signed char) 17833505792715402028ULL);
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_6] [i_10] [i_15]))));
                arr_55 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_8))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_6] [i_6])))))))) ? ((-(((unsigned long long int) 2163925705U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) arr_58 [i_19] [i_15] [i_18] [i_15] [i_10] [i_6]);
                            arr_60 [i_6] [i_6] [i_19] [i_18] [i_19] [(signed char)12] = ((/* implicit */unsigned char) arr_44 [i_6] [i_6] [i_15] [i_18 - 1] [i_18 - 1]);
                            var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */unsigned long long int) (((~(2131041590U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14))))))) : (((((((/* implicit */_Bool) arr_11 [i_15])) ? (arr_51 [i_6] [i_10] [i_6] [i_18]) : (((/* implicit */unsigned long long int) arr_48 [i_6] [i_6] [i_6])))) + (((/* implicit */unsigned long long int) min((-1024), (-414135207))))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_20 = 3; i_20 < 18; i_20 += 3) 
        {
            arr_63 [i_6] = ((/* implicit */short) var_0);
            arr_64 [i_6] [i_6] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-62))));
            /* LoopSeq 1 */
            for (int i_21 = 4; i_21 < 16; i_21 += 4) 
            {
                arr_67 [i_6] [i_6 - 2] [17ULL] [i_6] = (unsigned char)231;
                /* LoopSeq 2 */
                for (signed char i_22 = 0; i_22 < 19; i_22 += 3) 
                {
                    var_43 = ((/* implicit */signed char) arr_8 [i_6] [i_6] [i_6] [i_20] [i_20] [i_22]);
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_44 |= var_0;
                        arr_73 [i_23] [i_22] [i_21] [i_20] [i_6 - 4] [i_6] = ((/* implicit */unsigned long long int) ((signed char) (-(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [i_6 + 1] [i_20])))))));
                        var_45 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((long long int) var_4))))) ? (((((/* implicit */_Bool) arr_51 [i_21] [i_6] [i_6] [i_6 - 3])) ? (arr_51 [i_6 - 3] [i_6] [i_6] [i_6 - 3]) : (arr_51 [i_20 - 3] [i_21] [i_21] [i_6 - 2]))) : (((/* implicit */unsigned long long int) max((464861350), (var_12))))));
                    }
                    for (int i_24 = 1; i_24 < 18; i_24 += 1) 
                    {
                        arr_76 [i_24] [9U] [9U] [i_20] = ((/* implicit */short) arr_50 [i_24] [i_21] [i_21] [i_20] [i_6]);
                        var_46 = ((/* implicit */unsigned long long int) ((var_3) >= (((((/* implicit */_Bool) (signed char)7)) ? (2437298887U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_21] [i_22] [i_6])))))))));
                        var_47 -= ((/* implicit */_Bool) (unsigned char)31);
                    }
                }
                /* vectorizable */
                for (unsigned int i_25 = 0; i_25 < 19; i_25 += 1) 
                {
                    var_48 ^= ((/* implicit */long long int) arr_39 [i_6] [i_20] [i_21] [i_21]);
                    var_49 = ((/* implicit */_Bool) max((var_49), ((!(((/* implicit */_Bool) arr_69 [i_21 + 2] [i_20 + 1] [i_6]))))));
                    arr_81 [i_6] [i_6] [8] = ((/* implicit */_Bool) ((short) (_Bool)0));
                    arr_82 [i_6] [i_20] [i_6] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    var_50 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_2)))) : ((+(var_11)))));
                }
            }
            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) 18446744073709551603ULL))));
            var_52 &= ((/* implicit */unsigned char) var_1);
        }
        arr_83 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [(_Bool)1] [i_6] [i_6])), (var_3)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_11 [i_6]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_79 [17] [i_6] [1] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_75 [i_6] [i_6] [i_6] [i_6]))))))) : (((unsigned long long int) arr_75 [i_6 - 4] [i_6] [i_6] [i_6 - 2]))));
    }
    for (unsigned char i_26 = 4; i_26 < 12; i_26 += 3) 
    {
        arr_86 [i_26] = ((/* implicit */unsigned char) arr_51 [i_26] [i_26] [8] [i_26]);
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 13; i_27 += 1) 
        {
            for (unsigned short i_28 = 0; i_28 < 13; i_28 += 1) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    {
                        arr_95 [i_26] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */signed char) ((((arr_16 [i_26 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_26 - 1])))) | (var_7)));
                        arr_96 [i_27] = ((/* implicit */int) arr_47 [i_26] [i_28] [i_29]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_30 = 1; i_30 < 12; i_30 += 3) 
        {
            for (unsigned char i_31 = 1; i_31 < 11; i_31 += 2) 
            {
                {
                    arr_102 [i_31] [i_26] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((-1) < (((/* implicit */int) arr_93 [(_Bool)1] [i_26]))))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_53 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)31)), (var_1))))))));
                    var_54 = ((/* implicit */unsigned int) (+(var_12)));
                }
            } 
        } 
    }
}
