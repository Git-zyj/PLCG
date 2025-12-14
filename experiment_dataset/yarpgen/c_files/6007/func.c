/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6007
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
    var_12 *= ((/* implicit */unsigned char) min((1627608883222575997ULL), (((/* implicit */unsigned long long int) -1LL))));
    var_13 = ((/* implicit */unsigned int) -2LL);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [9ULL] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_1 [i_0 + 2])), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) arr_1 [i_0 + 4])) : (-15LL)))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 4244996144982190929LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (arr_3 [2] [i_1 - 4] [i_1 + 3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-21845))))))))));
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((short) ((int) max(((short)-21841), (((/* implicit */short) (unsigned char)127))))));
                }
            } 
        } 
        var_15 = ((unsigned int) ((((/* implicit */unsigned long long int) var_9)) + (arr_5 [i_0 + 4])));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_8 [9ULL] [9ULL])))));
            arr_10 [(_Bool)1] [i_0 + 4] [i_0 + 4] = ((/* implicit */_Bool) (((+(arr_1 [i_0 - 1]))) % (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)166)))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    {
                        var_17 = ((long long int) max((((/* implicit */short) (unsigned char)224)), ((short)-2)));
                        arr_17 [(unsigned short)7] [i_3] [i_5 - 1] [(unsigned short)7] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)134)), (var_11))))))), (((((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [i_5 + 2])) | (arr_0 [i_5 + 2])))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                arr_24 [i_6] = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 14LL)) ? ((~(26LL))) : (max((var_7), (((/* implicit */long long int) (unsigned char)129)))))) + (9223372036854775807LL))) >> ((((~(arr_20 [i_6] [(unsigned char)8] [(unsigned short)1]))) - (2930759646U)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 14LL)) ? ((~(26LL))) : (max((var_7), (((/* implicit */long long int) (unsigned char)129)))))) + (9223372036854775807LL))) >> ((((((~(arr_20 [i_6] [(unsigned char)8] [(unsigned short)1]))) - (2930759646U))) - (698827693U))))));
                arr_25 [i_0] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((unsigned int) 14LL))) | ((~(arr_12 [i_0 - 1]))))), (((/* implicit */long long int) (short)-21857))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [(signed char)8] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)191)) ? (arr_23 [i_0] [(unsigned char)2] [i_8]) : (((/* implicit */int) arr_14 [i_6 - 2] [i_0])))), ((~(((/* implicit */int) arr_9 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) var_0)), (min((((/* implicit */unsigned short) var_2)), (arr_14 [i_6 - 1] [i_8]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (arr_23 [i_0] [i_0] [i_0])))) ? (20ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-21857)), (4294967295U))))))));
                            var_18 = ((/* implicit */unsigned char) -5894632601126999071LL);
                            var_19 |= ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((-1), ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_0 - 3] [i_6] [i_0 - 3])), ((unsigned short)49664))))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) * ((~(var_7)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_22 [i_6] [0ULL] [0ULL]);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_39 [i_6] [i_10] [i_6] [i_6] [i_0 + 3] = ((/* implicit */unsigned short) (unsigned char)37);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_11])) ? (-1386014077) : (((((/* implicit */int) arr_8 [i_10] [i_11])) << (((var_7) - (965593329051663825LL)))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((unsigned int) arr_9 [i_6 - 1] [i_6 - 2]));
                        arr_42 [i_6] [i_11] [i_10] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 2])) ^ (((((-805105846) + (2147483647))) >> (((273441186400580232ULL) - (273441186400580218ULL)))))));
                        arr_43 [i_10] [i_11] [i_6] [i_10] [i_0] = ((/* implicit */unsigned char) ((short) (unsigned short)7255));
                    }
                }
            }
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_15] [(unsigned char)4])) ? (arr_20 [i_6] [4LL] [i_15]) : (arr_20 [i_6] [i_6 - 1] [i_14]))), (((/* implicit */unsigned int) min(((unsigned short)0), ((unsigned short)56931))))));
                    var_26 = ((/* implicit */int) (unsigned short)56931);
                    arr_50 [i_15] [i_14] [i_15] [i_6] = ((/* implicit */unsigned int) ((signed char) arr_29 [i_0 + 4] [i_0 + 1] [i_6 + 1] [i_14] [i_15]));
                }
                for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_16] [i_17]) & (-1LL)))) * (((((/* implicit */_Bool) arr_54 [i_16] [i_0] [i_16] [i_0] [i_14])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_0)))))));
                        var_28 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) == (arr_38 [i_6] [i_0] [i_14] [(unsigned char)5] [i_6] [i_0 - 2])))), (var_9))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-30))))));
                        arr_55 [i_6] [i_16] = ((/* implicit */long long int) var_10);
                    }
                    for (unsigned int i_18 = 3; i_18 < 7; i_18 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_52 [i_6] [i_0] [i_14] [i_0 + 4]), (((/* implicit */long long int) 2999761819U))))), (min((arr_56 [i_14] [2ULL] [2ULL] [6LL] [i_14]), (((/* implicit */unsigned long long int) (unsigned char)223)))))))));
                        arr_58 [i_0] [i_6] [i_6] [i_6] [(signed char)0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_44 [i_18 + 3] [i_6] [i_0 - 1])))) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5329)) / (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_18 + 1])) < (arr_36 [i_16] [i_16] [i_16] [i_16] [9] [i_14]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_6] [i_14] [i_16] [i_18 + 1]))) | (0LL)))))));
                        var_30 = ((/* implicit */int) arr_37 [(unsigned short)1] [i_0 - 3] [i_0] [i_0]);
                    }
                    for (unsigned int i_19 = 3; i_19 < 7; i_19 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_11)))))) ? (min((((1381239635457754906ULL) >> (((-154048941) + (154048990))))), (((4611668426241343488ULL) * (arr_36 [i_0 + 3] [i_0] [i_6 - 2] [i_14] [i_16 + 1] [i_19]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)254), ((unsigned char)207)))))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_40 [i_16 - 1] [i_19 + 3] [i_19] [i_19] [i_6])))) ? (arr_40 [i_16 + 1] [i_19 + 2] [i_19] [i_19] [i_6]) : (((/* implicit */int) ((unsigned char) arr_40 [i_16 - 1] [i_19 + 2] [i_16 - 1] [i_19] [i_6])))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_32 [(short)9] [i_16] [i_0] [(short)9])))) | (((8265348108037307665ULL) & (((/* implicit */unsigned long long int) 307267361619844658LL))))))) ? ((~(min((((/* implicit */unsigned long long int) arr_61 [i_0 - 3] [i_16 + 2] [1U])), (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14309)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)49))))) & ((~(0U))))))));
                        var_34 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) ((arr_23 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]) < (((/* implicit */int) (unsigned char)231))))))));
                        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_60 [i_16] [(unsigned char)2] [i_16] [(unsigned char)2] [(unsigned short)9] [i_6] [i_16])) >> (((var_9) + (1707788084977469400LL)))))))));
                    }
                    var_36 = ((/* implicit */_Bool) 26LL);
                    var_37 = ((/* implicit */_Bool) ((short) var_10));
                }
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_8))));
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_19 [i_0] [(signed char)6] [i_0])))))), (max((min((((/* implicit */long long int) arr_53 [i_14] [i_14] [i_6 - 2] [i_14] [i_0 + 3])), (arr_11 [1LL] [i_0] [i_0 - 1]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_32 [i_0 + 3] [i_6] [i_14] [i_14])), (arr_26 [i_14] [i_6 - 1] [i_14] [i_6])))))))))));
                var_40 = ((/* implicit */short) max((((arr_8 [i_0 - 2] [i_0 + 3]) ? (1295205477U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 4] [i_0 + 3]))))), (((/* implicit */unsigned int) max((arr_8 [i_0 + 3] [i_0 + 3]), (arr_8 [i_0 - 1] [i_0 - 3]))))));
                var_41 &= ((/* implicit */int) arr_38 [2] [2] [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2]);
            }
            arr_63 [i_6] [i_0] [5] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) 1976018036U)) == (36LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (arr_0 [i_0]))))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15303))) : (var_10))))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)96)))))));
        }
    }
    for (int i_20 = 0; i_20 < 15; i_20 += 2) 
    {
        arr_67 [i_20] [i_20] = ((/* implicit */long long int) (unsigned short)60612);
        var_42 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (+(-2145814253)))), (((unsigned long long int) (signed char)122)))));
        var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 35104724U)) ? (((/* implicit */int) arr_65 [i_20] [i_20])) : (((/* implicit */int) (unsigned short)60612))));
    }
}
