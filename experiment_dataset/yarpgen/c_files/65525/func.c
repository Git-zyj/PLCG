/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65525
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [18]);
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) (((_Bool)1) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)254)))))))));
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_5 [i_1]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (708170627543797718LL) : (708170627543797718LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
            {
                var_16 ^= ((/* implicit */long long int) max((10), (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_15 [i_1] [i_2] [(short)1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_3 + 1] [i_3 - 3] [i_3 - 4]) : (arr_7 [i_3 - 1] [i_3 - 3] [i_3 + 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42631)))));
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) arr_12 [i_3 + 1] [16ULL] [i_3] [i_3])))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_13)), (10206459336338361299ULL)))))));
                    arr_17 [i_1] [i_2] [14] [i_4] &= var_3;
                }
            }
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    arr_24 [i_1] [i_1] [i_6] [i_2] [i_5] = ((/* implicit */short) var_10);
                    var_17 &= ((/* implicit */signed char) var_3);
                }
                arr_25 [i_1] [11ULL] [i_2] = (signed char)39;
                /* LoopSeq 4 */
                for (int i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (((arr_9 [i_7 + 1] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 + 1] [i_2] [6LL] [i_7 - 1])))))));
                    arr_29 [i_1] [(_Bool)1] [i_2] [i_5] [11ULL] [i_7] = ((/* implicit */_Bool) var_13);
                    arr_30 [i_1] [(unsigned char)10] [i_5] [(unsigned char)12] &= ((/* implicit */int) ((((max((8240284737371190316ULL), (arr_7 [i_1] [i_1] [14ULL]))) << ((+(((/* implicit */int) (_Bool)1)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))));
                }
                for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (short)-19493);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_7))), (((/* implicit */long long int) ((unsigned char) (unsigned char)30))))))))));
                        arr_36 [i_1] [i_2] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_1] [i_1] [i_1] [i_1])), (45054034476908197LL)))) ? (max((2896658329265915331LL), (((/* implicit */long long int) 1339169163U)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_13)), (arr_31 [i_9] [i_1] [i_1] [i_1])))))))) ? (min((((/* implicit */unsigned long long int) var_14)), (((arr_22 [i_2] [i_2] [i_5]) * (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_5])))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_20 [i_2] [i_2] [i_2] [i_8]))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_2] [i_1] [i_2] [i_5] [i_8 - 1] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) (short)4204)) : (((/* implicit */unsigned long long int) (((+(var_9))) / (((long long int) var_6)))))));
                        arr_41 [i_1] [i_2] [9LL] [(signed char)12] [(short)7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_5])) ? (((unsigned long long int) arr_4 [i_8 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-3659))) / (var_3))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12874))) & (var_11))))) & (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_14)) ? (10649657312497398671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_44 [5LL] [i_2] [i_2] [(short)9] [(signed char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (-8108784300973273460LL)))) ? ((-(14808051040653640346ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)1570)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)235)))))));
                        arr_45 [i_5] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((3804856209006187750ULL) | (((/* implicit */unsigned long long int) arr_20 [i_2] [i_5] [i_8] [i_8]))))) ? (arr_7 [(unsigned char)3] [i_11] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)123))))))));
                        arr_46 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_1] [i_1] [i_2] [i_5] [i_8] [i_11]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) : (var_7)))) ? (((unsigned long long int) (unsigned char)0)) : (16756121614679964844ULL)));
                        arr_47 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_32 [i_2] [i_8 + 1] [i_8 - 1] [i_8]), (arr_32 [i_5] [i_8 - 1] [i_8 + 1] [(short)9])))) ? ((+(((/* implicit */int) arr_31 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 2])))) : (((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 2] [(short)15] [i_8 + 2]))));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (short)-25822)) * (((/* implicit */int) (short)12897))))) / (((long long int) ((((/* implicit */_Bool) -5550746218025730427LL)) ? (var_0) : (2792310760961773362LL))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_23 = (+(28ULL));
                        var_24 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_1] [i_8 - 1] [i_1] [i_1] [i_12] [i_2]))));
                        arr_50 [i_2] = ((/* implicit */unsigned char) var_8);
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_2] [i_8 - 1] [i_8 + 1]))));
                        arr_51 [i_1] [i_2] [(unsigned short)5] [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_31 [i_1] [(short)4] [(short)4] [6U])) : (((/* implicit */int) (signed char)-122))))) : (-708170627543797718LL)));
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 15; i_13 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_8])), ((+(arr_53 [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13] [(unsigned char)11]))))))));
                        var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) 6297334877580987697LL)) ? (-708170627543797719LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        arr_54 [11LL] [(unsigned char)12] [i_2] [12LL] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_49 [i_2] [i_2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_8 - 1]), (arr_49 [i_2] [i_2] [i_13 + 1] [i_8] [i_13] [(short)2])))) ? (max((arr_49 [i_2] [i_5] [i_13 - 1] [(short)9] [i_13 + 1] [i_1]), (((/* implicit */unsigned long long int) (short)-32746)))) : (((/* implicit */unsigned long long int) (~(3744848976U))))));
                        arr_55 [i_2] [i_8] [(_Bool)1] [11U] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_8 - 1]))) & (550118324U)))))), (arr_43 [(unsigned short)12] [i_1] [(unsigned short)12] [i_5] [i_8] [15ULL] [i_1])));
                    }
                    for (int i_14 = 1; i_14 < 15; i_14 += 1) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_15))))) & (var_9)));
                        var_29 -= ((/* implicit */unsigned long long int) (~(-9223372036854775806LL)));
                        arr_58 [i_1] [i_2] [i_2] [12LL] [i_14] [(unsigned char)8] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_56 [i_2] [i_14 - 1] [i_14 + 2] [(short)6] [i_14 - 1] [i_14] [3LL])))));
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((short) ((unsigned long long int) (unsigned char)1))))));
                }
                for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    arr_62 [i_1] [i_2] [10ULL] [i_2] [16LL] = ((/* implicit */unsigned short) (-(((1990677094997751080ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))))));
                    var_31 *= ((var_10) & ((-(max((0ULL), (((/* implicit */unsigned long long int) arr_14 [15LL] [i_2] [i_5] [i_15])))))));
                }
                for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    arr_66 [i_2] = (+(((arr_37 [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max(((-(arr_22 [i_5] [i_5] [i_5]))), (((((/* implicit */_Bool) var_7)) ? (arr_22 [i_5] [i_1] [(_Bool)1]) : (arr_22 [i_1] [i_1] [i_1]))))))));
                    var_33 = ((/* implicit */long long int) min((var_33), (max((max((min((3909141085231344034LL), (((/* implicit */long long int) arr_13 [2ULL] [i_5] [2ULL] [2ULL])))), (((/* implicit */long long int) ((signed char) var_15))))), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned char)2))) ^ (((/* implicit */int) var_13)))))))));
                }
                arr_67 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max(((unsigned char)24), ((unsigned char)144)));
                /* LoopNest 2 */
                for (long long int i_17 = 4; i_17 < 14; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((_Bool) (~(var_5))));
                            var_35 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((long long int) (short)98)) : (((/* implicit */long long int) ((((/* implicit */int) arr_32 [5] [5] [i_5] [i_1])) << (((((/* implicit */int) (unsigned char)24)) - (9))))))))));
                        }
                    } 
                } 
            }
            arr_74 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(short)14] [i_1] [i_2] [(short)14] [i_2] [i_1]))) : (var_14));
        }
        arr_75 [(short)13] [(short)13] = ((/* implicit */short) 5184146634361406530ULL);
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (unsigned char)227))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 20; i_19 += 1) /* same iter space */
    {
        arr_78 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48486)) / (((/* implicit */int) (signed char)-124))));
        var_37 = (+(((8790744996343030790ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10169))))));
    }
    /* vectorizable */
    for (unsigned int i_20 = 2; i_20 < 20; i_20 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_81 [i_20]))));
        var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) == (-5721247918724091864LL)));
    }
    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 1) 
    {
        arr_86 [i_21] = ((/* implicit */short) var_13);
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 3; i_22 < 16; i_22 += 3) 
        {
            for (short i_23 = 0; i_23 < 17; i_23 += 2) 
            {
                for (short i_24 = 0; i_24 < 17; i_24 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_25 = 2; i_25 < 15; i_25 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((((((/* implicit */_Bool) (signed char)-124)) || (((/* implicit */_Bool) (unsigned short)48398)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [12LL] [i_22 + 1] [i_22 + 1] [i_25 + 2]))) : (((((/* implicit */_Bool) (unsigned char)227)) ? (var_10) : (((/* implicit */unsigned long long int) var_7))))))));
                            var_41 ^= ((((/* implicit */_Bool) arr_88 [i_24])) ? (((/* implicit */long long int) var_2)) : (var_6));
                        }
                        arr_98 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) arr_21 [i_22 - 2] [7] [i_22] [i_22 + 1]))), (max((((/* implicit */long long int) arr_21 [i_22 - 3] [(short)14] [(unsigned char)3] [i_22 - 2])), (4329192567950316885LL)))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_4)), (arr_70 [i_23] [i_24]))), (min((var_11), (((/* implicit */unsigned int) var_13))))))) ? (((1978639634) / (((int) arr_91 [i_21] [i_22] [i_23])))) : (((((/* implicit */int) (signed char)-75)) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_63 [i_21] [i_21] [(_Bool)1] [i_21]))))))));
                    }
                } 
            } 
        } 
    }
    var_43 = var_14;
}
