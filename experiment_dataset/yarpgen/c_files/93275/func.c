/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93275
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
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59982))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-108)) < (((/* implicit */int) (unsigned short)5570))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1825036039717145611ULL)) || (((/* implicit */_Bool) (signed char)14))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_14))) ^ ((~(arr_10 [i_0 - 1] [i_0 - 1])))));
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? (var_3) : (((/* implicit */unsigned long long int) ((arr_10 [i_4] [i_1]) & (((/* implicit */int) arr_9 [i_0 + 2] [(unsigned char)19] [(unsigned short)3] [i_0 + 2] [(signed char)0]))))))), (((/* implicit */unsigned long long int) max((max((var_5), (((/* implicit */int) (unsigned short)59975)))), (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)255))))))))));
                            var_21 -= ((/* implicit */_Bool) (-(min((arr_8 [i_1] [i_1] [i_2 + 1] [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53316)) ? (((/* implicit */int) (unsigned short)59982)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_4])))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_15 [i_5] [i_1] [i_5] [i_3] [i_5] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_0 + 1] [i_1] [i_2 - 1]);
                            var_22 = var_1;
                            var_23 -= var_3;
                        }
                        arr_16 [i_0 + 2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (signed char)-66)))));
        arr_18 [i_0] = ((/* implicit */unsigned char) (signed char)119);
    }
    var_24 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)0)))))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59950)) == (((/* implicit */int) (unsigned short)1)))))) : ((+(arr_19 [i_6] [i_6])))));
        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_22 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_26 [i_7] = (!(((/* implicit */_Bool) ((unsigned long long int) 1984766663))));
            /* LoopSeq 4 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)12799)))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_29 -= ((/* implicit */signed char) ((unsigned short) var_3));
                    arr_32 [i_6] [i_8] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) ((var_1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [0])))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_7])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)88))));
                }
                var_31 = ((/* implicit */unsigned short) arr_24 [i_6] [i_6]);
            }
            for (unsigned int i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                arr_35 [i_6] [i_6] [i_6] = ((signed char) (signed char)41);
                arr_36 [(unsigned short)9] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) ((17843796327569119585ULL) > (var_9)));
                arr_37 [9U] [i_6] [0ULL] [i_6] = ((/* implicit */unsigned int) (+(-1051811743)));
                arr_38 [i_6] [(unsigned short)18] = ((/* implicit */int) ((_Bool) arr_25 [i_10] [i_10] [i_10 + 1]));
            }
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                arr_41 [i_6] [i_7] [i_11] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_14)) << (((4294967295U) - (4294967279U))))));
                arr_42 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-1)))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_6] [i_7])) ? (((/* implicit */int) arr_34 [i_6] [i_11])) : (((/* implicit */int) (signed char)-108))));
            }
            for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 24; i_13 += 3) 
                {
                    for (int i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_33 *= ((/* implicit */signed char) var_1);
                            arr_50 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) > (((((/* implicit */int) (signed char)84)) >> (((var_8) - (889086429U)))))));
                            var_34 = ((/* implicit */unsigned short) 3666178470U);
                            var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)83))));
                            arr_51 [i_6] [i_7] [i_12] [i_12] [i_13] [(signed char)16] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned short)65409)) : (((/* implicit */int) (unsigned char)14))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_11))));
                /* LoopSeq 3 */
                for (signed char i_15 = 2; i_15 < 24; i_15 += 1) 
                {
                    arr_54 [i_6] [i_7] [i_12] [i_15] = ((/* implicit */unsigned short) 3156451788116646658ULL);
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15 - 2] [i_15])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)115)))))));
                }
                for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 3; i_17 < 21; i_17 += 3) 
                    {
                        arr_61 [i_17] [i_7] [i_7] [i_7] [i_7] = 628788825U;
                        arr_62 [i_6] [i_7] [(_Bool)1] [i_12] [i_17] [i_17] [i_12] = ((/* implicit */unsigned char) ((arr_49 [i_17 - 2] [i_17 + 1] [i_17] [i_17] [i_17]) % (arr_49 [i_17 - 2] [i_17 + 1] [i_17 - 2] [i_17] [i_17])));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        arr_65 [i_6] [i_12] [(signed char)19] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_3)))));
                        var_38 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 13818658133414205561ULL)) && (((/* implicit */_Bool) 3449662326524195617ULL))))));
                        var_39 = ((/* implicit */signed char) (unsigned short)1);
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 3; i_19 < 23; i_19 += 1) 
                    {
                        arr_69 [i_6] [i_7] [i_12] [i_16] [i_16] [i_7] [i_19 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)1))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65534)))))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)91))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 628788826U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (3666178470U)))));
                    }
                    for (unsigned short i_20 = 3; i_20 < 24; i_20 += 3) 
                    {
                        arr_72 [i_6] [i_7] [i_6] [i_7] [i_12] [i_20] [i_20] = ((/* implicit */int) arr_28 [i_6] [i_7] [i_12]);
                        arr_73 [(unsigned short)11] [i_7] [11U] [i_7] [i_7] = ((/* implicit */unsigned char) arr_24 [i_6] [i_20]);
                        arr_74 [i_12] [i_12] [i_12] [i_12] [(unsigned short)1] [i_12] = ((signed char) (unsigned short)53688);
                    }
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_43 [i_6] [15U] [i_16] [i_21])));
                        arr_77 [i_16] [i_16] [i_16] [i_16] [i_16] [(unsigned short)2] = ((/* implicit */signed char) arr_48 [i_6] [i_7] [i_12] [i_16] [i_21]);
                        arr_78 [i_6] [i_7] [i_12] [i_16] [(unsigned short)5] = ((/* implicit */unsigned short) ((arr_45 [i_6] [i_6] [i_6]) <= (2184303564830448544ULL)));
                    }
                    arr_79 [i_6] [16ULL] [(unsigned short)23] = ((/* implicit */signed char) arr_67 [24U] [(unsigned short)11] [(unsigned short)11] [i_12] [i_16]);
                }
                for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 3; i_23 < 23; i_23 += 2) 
                    {
                        var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned short)65535))));
                        var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) : (499483007U)))));
                        var_44 &= ((/* implicit */unsigned short) arr_75 [i_6] [i_23 - 3] [i_6] [(signed char)23] [i_23]);
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 2) 
                    {
                        var_45 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((int) (unsigned short)1984))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (753766751U)))));
                        var_46 = ((/* implicit */signed char) 13589578724398296137ULL);
                        var_47 = ((/* implicit */unsigned short) var_5);
                        var_48 = ((/* implicit */unsigned short) (signed char)-96);
                        arr_87 [(_Bool)1] [i_7] [i_12] [i_22] = (signed char)63;
                    }
                    var_49 = (-(arr_31 [i_6] [i_7] [i_6] [(unsigned short)2] [i_6]));
                    var_50 -= ((arr_55 [i_6] [i_7] [i_12] [i_22]) >= (arr_55 [i_22] [i_12] [i_7] [(signed char)6]));
                }
                /* LoopSeq 1 */
                for (int i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)54)) < ((+(((/* implicit */int) (signed char)-91))))));
                    var_52 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_83 [i_7] [i_25] [i_12] [i_6] [i_7])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-83)) | (((/* implicit */int) (unsigned short)8176))))) : (((((/* implicit */_Bool) (unsigned short)7566)) ? (4194288U) : (2427835636U)))));
                    var_53 = ((/* implicit */_Bool) max((var_53), (((((/* implicit */int) var_12)) <= ((-(((/* implicit */int) (unsigned short)57360))))))));
                    var_54 = var_12;
                }
            }
        }
    }
}
