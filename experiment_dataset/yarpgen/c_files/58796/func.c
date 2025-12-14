/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58796
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
    var_11 = var_4;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [(unsigned char)2] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)15] [(signed char)15]))))))))));
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_2 [i_1] [i_1]))));
            var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) != (((/* implicit */int) var_0))));
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((min((arr_3 [i_1] [i_0 - 1]), (arr_3 [i_1] [i_0 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0])))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_3 = 3; i_3 < 22; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_15 [(unsigned char)10] [i_2] [i_0] [i_3 + 1] [i_2] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_4] [i_5] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))));
                            arr_16 [i_0] [i_0] [8U] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3 - 3] [i_5] [i_0] [i_5]))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_3] [i_3] = 3008187479U;
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_2])))) ? ((~(((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) var_7)))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) 
                {
                    var_16 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    arr_20 [(signed char)16] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1209802362U);
                    var_17 ^= ((/* implicit */long long int) (-(arr_3 [i_6] [i_6])));
                    var_18 &= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [16ULL] [i_6]);
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 4; i_8 < 23; i_8 += 4) 
                    {
                        arr_25 [i_8] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (14759002743110026558ULL) : (8834348015357703346ULL)))) ? (((((/* implicit */int) (signed char)24)) | (((/* implicit */int) (signed char)-9)))) : ((~(((/* implicit */int) var_5))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_2] [i_3 - 2] [i_8 - 4])) ? (((/* implicit */int) arr_11 [i_7] [i_7 - 1] [i_7 - 1] [(short)15])) : (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)0))));
                        arr_26 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_8])))) * (((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_8] [(unsigned short)7])) : (((/* implicit */int) (unsigned short)19))))));
                    }
                    arr_27 [i_0] [i_7 - 1] = ((short) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_9))));
                }
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-121))));
            }
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_31 [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)50309)) > (((/* implicit */int) arr_28 [i_0] [i_0] [(_Bool)1] [i_0])))) ? (((37273983U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_2] [i_9] [i_0 - 1])) : (((/* implicit */int) arr_9 [(unsigned short)12] [i_2] [i_2] [i_2]))))) ^ (((((/* implicit */_Bool) (signed char)113)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_0] [i_0]))))))))));
            }
            for (unsigned char i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                var_24 ^= ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (unsigned char)15);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (signed char)126))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_10 - 1] [i_11] [i_12 + 3]))));
                        arr_40 [i_0] [(_Bool)1] [i_2] [i_0] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+(-8710442007377411736LL)))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_28 += ((/* implicit */signed char) (_Bool)1);
                        arr_43 [i_13] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_0 + 1] [i_0] [i_0 - 1] [i_10 + 1] [i_13 - 1]))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) /* same iter space */
                    {
                        arr_46 [i_0] [i_2] [i_10] [i_10] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)23940)) + (((/* implicit */int) arr_22 [i_0] [i_10 - 1] [i_2] [i_0]))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)86)) % (((/* implicit */int) (unsigned char)255))));
                        arr_47 [i_0 + 1] [(signed char)0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0 + 1] [i_10] [i_0] [i_14 + 1]))));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_15] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0 + 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_29 [i_0 - 1] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) arr_29 [i_0 - 1] [i_10 - 1] [i_10 - 1]))));
                        var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) arr_2 [i_2] [i_2]))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_11] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned short)8184)) : (((/* implicit */int) (unsigned char)72))));
                        var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_10 + 1] [i_10]))));
                        arr_54 [(short)11] [(short)11] [i_10] [i_11] [(short)11] [i_0] = ((/* implicit */unsigned int) arr_52 [i_0] [i_0] [i_10] [i_11] [i_16]);
                        arr_55 [i_0] [i_2] [i_10] [i_0] [(short)22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_0] [i_16])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [(short)15] [i_10] [i_16] [i_16])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)-90))));
                    }
                }
                for (long long int i_17 = 2; i_17 < 21; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_17 - 1] [i_0] [i_0] [i_17 - 1])) * (((/* implicit */int) (unsigned char)34))));
                        var_33 += ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_48 [i_10 + 1] [i_10 + 1] [i_2] [i_0 - 1] [i_17]))));
                        arr_62 [i_0] [i_10] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                        var_34 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_10] [i_17] [i_0] [i_18]))));
                        var_35 |= ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2])) << (((((((/* implicit */int) (short)-7696)) + (7713))) - (13)))));
                    }
                    arr_63 [i_0] = ((/* implicit */unsigned short) (signed char)1);
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (signed char)111))));
                }
            }
            arr_64 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) || (((/* implicit */_Bool) 33554431LL)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (9745765617125745479ULL)))));
            var_37 ^= ((/* implicit */unsigned short) var_7);
        }
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_20 = 3; i_20 < 22; i_20 += 4) 
            {
                var_38 = (signed char)1;
                /* LoopSeq 1 */
                for (signed char i_21 = 1; i_21 < 21; i_21 += 2) 
                {
                    arr_73 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)229))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_28 [i_0] [i_19] [i_20] [i_19])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    arr_74 [i_0] [1ULL] [i_0] [i_19] [i_20] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_3 [i_0] [i_0 + 1])));
                }
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        {
                            arr_79 [i_19] [i_19] [i_19] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58124)) ? (2116440674U) : (4294967277U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_60 [i_23] [i_22] [i_20] [i_0] [i_0])) < (((/* implicit */int) (unsigned char)121)))))));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (-(((/* implicit */int) (short)-16838)))))));
                            arr_80 [i_0] [i_0] [i_0] [i_0] [i_23] = ((/* implicit */unsigned char) (short)-32760);
                            var_40 = ((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_0 - 1] [i_0 + 1] [(short)8] [i_0 - 1]));
                            arr_81 [i_0] [i_0] [i_20] [i_0] [i_23] [i_0] [i_0] = ((/* implicit */_Bool) (short)-1);
                        }
                    } 
                } 
                var_41 = var_10;
                var_42 -= ((/* implicit */signed char) ((((((/* implicit */int) (short)-32664)) / (((/* implicit */int) arr_67 [i_0] [i_19])))) / (((/* implicit */int) (short)1))));
            }
            for (signed char i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                arr_85 [i_0] [(_Bool)1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)52))));
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)-3845)) ^ (((/* implicit */int) arr_77 [i_19] [i_0 - 1]))))))));
                var_44 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 1] [i_19] [(signed char)23] [i_19] [i_24])) ? (((/* implicit */int) arr_12 [i_24] [i_24] [i_19] [i_19] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_24] [i_19] [i_19] [i_19] [i_0 + 1] [i_0 - 1])))), ((~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_19] [(unsigned char)14]))))));
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(9745765617125745466ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [(unsigned char)9] [i_0] [i_24]))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4080)) ^ (((/* implicit */int) (_Bool)1))))) : ((+(arr_56 [i_24] [i_0 - 1] [i_0] [i_0 + 1] [i_24]))))))));
            }
            /* vectorizable */
            for (unsigned short i_25 = 1; i_25 < 22; i_25 += 1) 
            {
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)15)))))));
                arr_88 [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1]))));
            }
            arr_89 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(6350693096135123416LL)));
            var_47 = ((/* implicit */short) (unsigned char)0);
        }
        /* LoopSeq 1 */
        for (signed char i_26 = 2; i_26 < 23; i_26 += 1) 
        {
            arr_92 [i_0] [(short)7] [i_0] = ((/* implicit */signed char) var_3);
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), ((+((-(((/* implicit */int) arr_2 [(short)16] [i_26])))))))))));
        }
        /* LoopNest 3 */
        for (short i_27 = 0; i_27 < 24; i_27 += 1) 
        {
            for (unsigned short i_28 = 0; i_28 < 24; i_28 += 4) 
            {
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 1) 
                {
                    {
                        var_49 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)4069))));
                        arr_99 [i_0] [i_0] [i_27] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_82 [i_0] [i_27] [i_28])) : ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0] [i_28])) : (((/* implicit */int) (signed char)24))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11209))))))) : (((((((/* implicit */int) arr_13 [i_0] [i_0] [i_28] [23U] [i_0])) / (((/* implicit */int) var_3)))) << (((((/* implicit */int) (signed char)-23)) + (28)))))));
                        arr_100 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_86 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_30 = 1; i_30 < 23; i_30 += 2) /* same iter space */
    {
        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) arr_57 [i_30] [i_30] [(short)20] [i_30]))));
        arr_103 [i_30] = (short)-19067;
    }
    var_51 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)12188)) : (((/* implicit */int) var_3))))));
    var_52 ^= ((/* implicit */unsigned char) var_2);
}
