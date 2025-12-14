/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55689
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_12 -= ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0] [i_0])), (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) min((var_3), (((/* implicit */short) arr_0 [9] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [9])) != (((/* implicit */int) var_3)))))))));
        var_13 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) var_2))) : ((~(((/* implicit */int) var_4)))))) / (((/* implicit */int) ((((/* implicit */int) (short)32758)) != (((/* implicit */int) (unsigned char)170)))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_14 [i_2] = (-(((/* implicit */int) arr_9 [i_2] [i_4])));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_4] [i_2] [i_1]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (max((var_2), (((/* implicit */int) (signed char)-20))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (arr_1 [i_3])));
                        arr_16 [i_2] [i_2] [i_3] [16LL] = ((/* implicit */unsigned char) (+(((var_5) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_1] |= ((int) max((arr_20 [i_1] [i_6] [i_5] [i_1]), (((/* implicit */short) var_10))));
                        arr_24 [i_7 - 1] [i_5] [i_7] [i_7] = (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_5])) : (((/* implicit */int) ((short) var_0))))));
                    }
                }
            } 
        } 
        arr_25 [i_1] [i_1] &= ((/* implicit */short) min((((/* implicit */int) (short)-32759)), (((((/* implicit */int) (unsigned short)34981)) | (((((/* implicit */_Bool) 2023567033U)) ? (arr_8 [(unsigned short)15] [(signed char)17] [i_1]) : (((/* implicit */int) var_9))))))));
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 21; i_8 += 3) 
        {
            arr_28 [i_8] = ((/* implicit */_Bool) arr_20 [i_8] [i_1] [i_8] [i_8]);
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_36 [i_1] [i_8] [(_Bool)1] [i_10] = ((/* implicit */_Bool) (short)-19972);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((short) arr_0 [i_11] [i_10])))));
                            var_18 = ((signed char) arr_9 [i_8] [i_8]);
                            var_19 = (((_Bool)0) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_9] [i_8] [i_1])))));
                            arr_39 [i_8] [i_10] [i_9] [i_9] [3] [i_8 + 3] [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_21 [17ULL] [i_8] [i_8] [(signed char)1] [i_10] [(_Bool)0])) / (((/* implicit */int) arr_3 [i_9])))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (unsigned short i_14 = 3; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_20 = ((((/* implicit */int) max((arr_9 [i_8] [i_8]), (arr_9 [i_8] [i_8])))) == ((-(((/* implicit */int) var_3)))));
                            var_21 = ((/* implicit */int) ((signed char) ((int) ((unsigned char) arr_35 [(_Bool)1] [i_8] [(_Bool)1] [i_13] [i_14]))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) (~(var_5)))) ? (((arr_8 [i_1] [i_1] [i_1]) % (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_14])))) > (((/* implicit */int) ((unsigned char) (unsigned short)65535))))))));
                        }
                    } 
                } 
                arr_51 [i_8] [i_8] [i_12] = (short)(-32767 - 1);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2271400254U)) ? (((/* implicit */int) (short)-28005)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (2271400253U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32753))))))) >> (((((/* implicit */int) (unsigned short)34981)) - (34953))))))));
                arr_52 [i_1] [i_1] [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_8 + 3] [i_1] [(unsigned char)11] [i_12])) ? (((/* implicit */int) ((_Bool) arr_30 [i_8 + 3] [i_1] [i_12] [i_1]))) : ((~(((/* implicit */int) arr_30 [i_8 + 3] [i_8 + 3] [(unsigned char)18] [i_12]))))));
            }
            for (short i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
            {
                arr_57 [i_8] [(unsigned char)3] [i_8] = ((/* implicit */unsigned char) ((short) (signed char)123));
                arr_58 [i_1] [i_8] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_8]))))))) ? ((+(380639669))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */int) arr_31 [i_1] [i_1] [(_Bool)1] [i_1])) % (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_6)))))));
                arr_59 [i_8] [i_8 + 3] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)119))));
            }
            for (short i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    arr_65 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_8])) - (((/* implicit */int) arr_47 [3LL] [i_8 + 1] [i_8] [i_8]))))) ? (((int) (signed char)-123)) : (((((((/* implicit */int) var_11)) + (2147483647))) >> (((arr_17 [i_17 - 1] [(signed char)1] [i_8]) + (1124452392))))));
                    arr_66 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_1] [19U] [i_1] [14LL])) ? (((arr_46 [i_17] [i_8] [i_16] [i_8] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_17 - 1])))));
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_24 = ((/* implicit */int) (~(arr_1 [i_8 - 1])));
                    arr_70 [i_18] [i_8] [i_8] [i_1] = ((/* implicit */int) ((2023567033U) ^ (0U)));
                    arr_71 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((arr_56 [i_8 + 3] [i_8 - 1] [i_8 + 3]) - (((/* implicit */long long int) ((/* implicit */int) (short)32759)))));
                }
                for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        arr_76 [i_8] [i_16] [i_8] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_60 [i_8 + 1] [i_8]))));
                        arr_77 [i_8 + 2] [i_8] [i_20] = ((/* implicit */unsigned short) (+(arr_46 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 3])));
                        var_25 *= ((/* implicit */_Bool) (+(arr_4 [i_1])));
                    }
                    var_26 = ((/* implicit */signed char) arr_69 [i_1] [i_1] [i_16] [(short)9] [i_19] [i_8 - 1]);
                }
                var_27 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_10) ? ((-(((/* implicit */int) arr_41 [i_1] [i_8] [i_1])))) : (((((/* implicit */_Bool) arr_60 [(unsigned short)4] [(_Bool)1])) ? (((/* implicit */int) arr_2 [i_8])) : (-1135260553))))))));
            }
            arr_78 [i_1] [i_8] = ((/* implicit */unsigned long long int) 0U);
            arr_79 [i_8] = ((/* implicit */short) 17088575365199428770ULL);
        }
    }
    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
    {
        arr_82 [i_21] = ((/* implicit */short) ((((((/* implicit */int) arr_49 [i_21])) | (((int) var_11)))) & (((/* implicit */int) var_3))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_56 [i_21] [i_21] [i_21])));
        arr_83 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_21 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])), (var_4))))))) ? (((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_21] [(_Bool)1])) ? (arr_53 [i_21]) : (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_54 [i_21] [i_21] [i_21] [i_21])), (0U)))) ? (((/* implicit */int) arr_0 [i_21] [i_21])) : (min((arr_4 [i_21]), (((/* implicit */int) var_4))))))));
        var_29 = ((/* implicit */int) max((var_29), (16646144)));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 13; i_22 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_23 = 0; i_23 < 13; i_23 += 1) /* same iter space */
        {
            arr_89 [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-20614))))) ? (((/* implicit */int) ((signed char) arr_6 [16] [11U] [i_23]))) : (((/* implicit */int) var_6))));
            var_30 = ((/* implicit */int) min((var_30), (arr_4 [(short)20])));
            arr_90 [i_23] [i_22] [i_22] = ((/* implicit */int) 4398046511102ULL);
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                for (int i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    {
                        var_31 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) <= (((/* implicit */long long int) var_8))))) ^ (((((/* implicit */_Bool) 5193550677709280701LL)) ? (((/* implicit */int) (short)-16955)) : (((/* implicit */int) var_10))))));
                        arr_96 [(unsigned short)9] [(unsigned short)1] [i_24] [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) arr_48 [i_23] [i_23] [14ULL] [i_23] [20ULL])))))));
                    }
                } 
            } 
        }
        for (short i_26 = 0; i_26 < 13; i_26 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
            {
                arr_102 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) != (var_8)))) * (((/* implicit */int) (unsigned short)30554))));
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_42 [6] [6ULL] [6ULL] [i_22]))));
            }
            for (long long int i_28 = 0; i_28 < 13; i_28 += 3) 
            {
                var_34 = ((/* implicit */short) var_2);
                arr_106 [(unsigned short)6] [i_26] [i_28] = ((/* implicit */int) ((15455882485498030520ULL) << (((((/* implicit */int) arr_2 [i_26])) - (9067)))));
            }
            for (int i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                arr_109 [i_29] = ((/* implicit */unsigned short) ((unsigned int) (short)4790));
                /* LoopSeq 1 */
                for (long long int i_30 = 0; i_30 < 13; i_30 += 1) 
                {
                    arr_113 [i_22] [i_26] [i_29] [i_30] [i_29] = ((/* implicit */unsigned long long int) (-(((long long int) (unsigned char)16))));
                    arr_114 [i_29] [i_30] [i_29] [i_29] [i_26] [i_29] = arr_2 [i_29];
                }
            }
            /* LoopSeq 2 */
            for (signed char i_31 = 0; i_31 < 13; i_31 += 3) 
            {
                arr_117 [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4790)) ? (((((/* implicit */_Bool) arr_74 [i_22] [i_26] [23U] [i_31] [i_31])) ? (((/* implicit */int) (short)4793)) : (((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) arr_22 [i_22] [i_26] [i_31] [i_22]))));
                arr_118 [i_22] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_31] [i_31] [i_31] [8U])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_50 [i_22] [i_22] [17] [i_22]))))) : ((-(12441107865841458349ULL)))));
                var_35 |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [i_31]))))));
                arr_119 [i_31] [i_22] [i_22] = ((/* implicit */_Bool) arr_38 [i_22] [(signed char)2]);
                arr_120 [i_26] [i_22] [1U] = ((/* implicit */unsigned int) (!(arr_9 [(unsigned short)4] [i_31])));
            }
            for (unsigned char i_32 = 0; i_32 < 13; i_32 += 1) 
            {
                arr_125 [i_22] [(_Bool)1] [i_26] [i_32] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6))))));
                /* LoopSeq 1 */
                for (short i_33 = 4; i_33 < 11; i_33 += 2) 
                {
                    arr_130 [i_22] [i_26] [i_26] [i_33] [6] = ((/* implicit */int) (~(arr_61 [i_33])));
                    arr_131 [i_22] [9] [6] [9] [i_22] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_33] [i_33 - 1])))));
                    arr_132 [i_22] [i_26] [i_32] [i_32] [i_26] [i_22] = ((/* implicit */_Bool) 4294967294U);
                }
            }
        }
        for (int i_34 = 0; i_34 < 13; i_34 += 1) 
        {
            /* LoopNest 3 */
            for (int i_35 = 0; i_35 < 13; i_35 += 1) 
            {
                for (long long int i_36 = 0; i_36 < 13; i_36 += 1) 
                {
                    for (int i_37 = 0; i_37 < 13; i_37 += 3) 
                    {
                        {
                            var_36 -= ((/* implicit */signed char) (+(((/* implicit */int) (short)18268))));
                            arr_146 [i_22] [i_35] [10] &= ((/* implicit */unsigned int) (unsigned char)62);
                            arr_147 [i_34] [i_35] [i_34] [i_34] [i_34] [(unsigned short)9] [i_34] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_38 = 0; i_38 < 13; i_38 += 3) 
            {
                for (short i_39 = 0; i_39 < 13; i_39 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_40 = 0; i_40 < 13; i_40 += 3) 
                        {
                            arr_156 [i_38] [i_22] [i_38] [i_39] [i_38] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) arr_107 [i_39])))) : (((/* implicit */int) ((short) var_5)))));
                            arr_157 [i_22] [i_22] [i_34] [i_22] [i_38] [i_40] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_22] [i_34] [13LL] [i_40]))));
                            arr_158 [i_38] [i_34] [i_38] [i_39] [i_38] [i_38] = ((/* implicit */unsigned short) ((signed char) arr_104 [i_22] [i_34] [i_39]));
                        }
                        var_38 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4398046511098ULL)) ? (((/* implicit */int) arr_62 [i_39] [i_34] [i_34] [i_22])) : (((/* implicit */int) var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                        var_39 *= ((/* implicit */signed char) (-(arr_55 [i_39] [i_34] [i_38])));
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) 0U))));
                    }
                } 
            } 
        }
        arr_159 [i_22] [i_22] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_22] [i_22] [8]) : (((/* implicit */int) arr_19 [i_22] [i_22]))))) == ((~(var_5))));
        arr_160 [i_22] [i_22] = (~(((/* implicit */int) var_6)));
    }
    var_41 = ((/* implicit */int) var_3);
}
