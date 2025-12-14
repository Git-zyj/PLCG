/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92839
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (1967784293347569706LL))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_1] [i_1] [i_0 + 2])))) ? (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((((-9223372036854775807LL) - (-9223372036854775805LL))) + (28LL)))));
                            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) var_1);
            var_23 = (+(((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_0] [i_0])) ? (2464973058810459233ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [13ULL]))) : (arr_5 [(unsigned short)10])));
            var_25 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_5] [i_5]);
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_5] [i_5] [i_6]);
                var_27 &= ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                var_28 &= ((/* implicit */long long int) ((unsigned long long int) var_17));
                var_29 &= ((/* implicit */unsigned char) arr_9 [i_0] [i_0 + 1] [i_6] [i_6 - 2]);
            }
            for (long long int i_7 = 4; i_7 < 19; i_7 += 4) 
            {
                var_30 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))));
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_31 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) - (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */int) (unsigned char)16)) ^ (var_10))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49766)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-13)))))));
                    var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [1] [i_5] [i_7 + 1] [i_5] [i_5] [i_0 + 1] [i_0])) ? ((-(((/* implicit */int) arr_18 [i_8] [11U])))) : (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_8] [i_7 - 2]) : (((/* implicit */int) (signed char)-76))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))) > (((/* implicit */int) ((_Bool) var_5)))));
                }
                for (unsigned char i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    var_35 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12288)) / (((/* implicit */int) arr_22 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9]))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_3))));
                    var_37 = ((unsigned long long int) var_4);
                    var_38 &= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_11 [(unsigned short)14] [i_5] [(unsigned short)12] [(_Bool)1] [i_5] [(_Bool)1] [17])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [1ULL] [1ULL])))))));
                }
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    var_39 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_17)))))));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_5]))) : (arr_27 [i_0 + 1] [i_0 + 1] [i_5])));
                }
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_41 = ((/* implicit */long long int) var_17);
                var_42 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28544)))));
                var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_5]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_44 = ((/* implicit */short) var_8);
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((2677662243U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                        var_46 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_12] [i_12])) ? (((/* implicit */int) var_5)) : (arr_14 [i_0] [i_0] [i_13])))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (-9223372036854775791LL)));
                    }
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                    {
                        var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) var_11))));
                        var_49 = ((/* implicit */short) var_10);
                        var_50 = ((/* implicit */unsigned short) (short)32767);
                    }
                }
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_27 [i_0] [i_0 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_11]))))));
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_15 = 4; i_15 < 17; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                        {
                            var_52 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0 - 1] [i_15 - 1] [i_15] [i_16] [i_16] [(unsigned char)12] [i_18]))) >= (arr_10 [i_0] [i_15] [i_16 + 1] [i_0] [i_17] [i_18]))) ? ((~(((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) arr_22 [i_0] [i_15] [i_16 + 2] [i_17]))));
                            var_53 |= ((/* implicit */_Bool) ((arr_47 [i_16] [i_16 - 1] [(short)11] [i_16 + 1]) ? (((/* implicit */int) arr_47 [i_16] [i_16] [i_16] [i_16 + 2])) : (((/* implicit */int) arr_36 [i_16] [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [(signed char)12]))));
                            var_54 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_14)) / (arr_4 [i_0] [i_0 + 2] [i_0 + 2])))));
                            var_55 = ((/* implicit */int) arr_29 [i_0] [i_15 + 2] [i_17] [i_0]);
                        }
                        for (int i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                        {
                            var_56 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0 - 1] [i_0 - 1]))) / (arr_53 [i_0] [i_15 + 1] [17U] [i_17] [i_0])));
                            var_57 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_15] [(_Bool)0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) (unsigned short)65024)));
                        }
                        for (int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                        {
                            var_58 = ((/* implicit */_Bool) ((arr_33 [16U]) ? (((((/* implicit */_Bool) arr_2 [(short)4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)65520)))) : (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_45 [i_17] [i_17] [i_17] [i_17]))))));
                            var_59 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [i_15] [i_16])) ? (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) arr_31 [i_0 + 2] [i_0 + 2] [i_16 + 2] [(signed char)18])) : (((/* implicit */int) arr_6 [i_0] [(short)5])))) : (((/* implicit */int) arr_33 [i_15 + 3]))));
                            var_60 = ((/* implicit */long long int) var_12);
                            var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) var_15))));
                        }
                        for (int i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
                        {
                            var_62 = ((/* implicit */unsigned short) ((_Bool) (-(var_7))));
                            var_63 = ((/* implicit */unsigned short) ((((arr_42 [i_0] [i_0] [16U]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_16] [(short)10] [i_0] [i_0] [(short)10]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))));
                            var_64 |= ((/* implicit */long long int) arr_15 [i_17]);
                        }
                        var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) (((~(6575566769731102568LL))) >= (((/* implicit */long long int) ((1363836815U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
    {
        var_66 &= ((/* implicit */unsigned short) ((869721575) >> (((1008806316530991104ULL) - (1008806316530991080ULL)))));
        var_67 |= ((/* implicit */_Bool) ((((unsigned int) 12475550774980693494ULL)) | (((/* implicit */unsigned int) ((/* implicit */int) (short)31574)))));
    }
    var_68 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7085505451818965168ULL)))) ? (((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62528)))))))), (((((/* implicit */_Bool) (signed char)-58)) ? (16662780748039356183ULL) : (((/* implicit */unsigned long long int) -5680048993965385669LL))))));
}
