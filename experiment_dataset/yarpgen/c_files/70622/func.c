/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70622
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
    var_19 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4] [i_3 + 1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (arr_4 [i_2]))) : (((/* implicit */unsigned long long int) ((int) 3173781751U))))));
                                var_20 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0]);
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_5)))))) == (((((/* implicit */unsigned int) var_11)) & (var_14)))))), ((((-(((/* implicit */int) var_17)))) - (max((((/* implicit */int) var_7)), (var_1)))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) arr_14 [i_1])), (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)-3))))), (((((/* implicit */_Bool) (signed char)-16)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))))));
                            var_22 = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) arr_16 [i_5] [i_1] [i_5] [i_6])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                            {
                                arr_20 [i_7] [i_5] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_12))))) ? (-868567656) : (((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 3] [i_7 - 1] [i_7 + 1] [i_7 - 3]))));
                                var_23 += ((/* implicit */long long int) 2694869233U);
                                var_24 = ((/* implicit */unsigned int) ((long long int) var_16));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (9007199254740991LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((~(var_10))) : (arr_15 [i_0] [i_1] [i_5] [i_7 - 3] [i_7]));
                            }
                            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                            {
                                var_25 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1600098053U)) && (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_22 [i_0] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [i_5] [i_8])))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)229)) < (((/* implicit */int) var_0))))), (arr_18 [i_0] [i_5] [i_5] [0LL])))) : (max((arr_23 [i_1] [i_5]), (min((var_11), (((/* implicit */int) arr_16 [i_5] [0ULL] [0ULL] [i_6])))))));
                                arr_25 [i_8] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_10 [i_8] [i_6] [i_1] [i_1] [i_0]))) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [(unsigned char)3] [i_8]))));
                                var_26 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]);
                                arr_26 [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */int) var_7);
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                            {
                                arr_29 [14ULL] [i_1] [i_5] [i_1] [i_9] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) 14319781124139117669ULL)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_27 ^= ((/* implicit */short) arr_2 [i_0]);
                                var_28 = ((/* implicit */_Bool) arr_0 [i_5] [10ULL]);
                                var_29 = ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_5] [i_5] [i_5] [i_9])) && (((/* implicit */_Bool) arr_19 [i_9] [i_0] [i_5] [i_1] [i_0])));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_7))) ? (((var_15) % (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_0])) ? (arr_22 [i_10] [7] [i_0]) : (((/* implicit */long long int) var_16))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2138544286)) ? (((/* implicit */long long int) 1043256047)) : (-9007199254740983LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_10] [i_10] [i_10]))))))))))));
                    arr_33 [i_0] [i_0] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_19 [i_10] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_0] [i_10])) : (((/* implicit */int) arr_19 [i_0] [(short)4] [(signed char)17] [i_1] [i_0]))))));
                    var_31 = ((/* implicit */long long int) ((var_4) - (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-46)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) var_11);
                            var_33 = ((/* implicit */unsigned char) ((((arr_2 [i_0]) + (2147483647))) << (((/* implicit */int) (_Bool)1))));
                            var_34 = ((/* implicit */int) arr_7 [i_1] [i_11] [i_10] [i_1] [i_1]);
                        }
                        arr_40 [i_11] [i_0] [i_0] = (short)-23509;
                        var_35 = ((/* implicit */unsigned int) min((var_35), (3536896553U)));
                        var_36 = ((/* implicit */unsigned int) ((arr_4 [i_1]) >> (((arr_4 [i_0]) - (16474406065912679384ULL)))));
                        var_37 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_22 [i_10] [i_1] [i_0])))));
                    }
                }
                for (short i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */int) min((max((((/* implicit */short) (_Bool)1)), (var_7))), (arr_36 [i_13] [i_13] [i_1] [i_0] [i_0])))) == (((/* implicit */int) ((((((/* implicit */_Bool) 868567656)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-41)))) != (((/* implicit */int) (!((_Bool)1)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_13] [i_13] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (321345810U))) : (((/* implicit */unsigned int) var_3))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 31457280)) ? (var_18) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23509)))))));
                        arr_46 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (short)23509)))));
                    }
                    for (short i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        var_41 ^= ((/* implicit */int) var_0);
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            arr_53 [i_0] [(unsigned char)15] [i_13] [i_13] [i_15] [i_16] [i_16] = (!(arr_50 [i_0] [i_0]));
                            arr_54 [i_1] = ((/* implicit */unsigned short) (signed char)65);
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_59 [i_0] [i_1] [i_13] [11LL] [i_17] [i_17] = ((/* implicit */long long int) ((2016446434) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_1] [i_0])) : (arr_31 [i_0])))));
                            var_42 = ((/* implicit */_Bool) arr_38 [i_1] [i_13] [i_15]);
                        }
                        var_43 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-59))) ? (arr_49 [i_0] [i_1] [i_13] [i_15] [i_15] [i_15] [i_13]) : (((/* implicit */long long int) var_3)))));
                        var_44 = ((/* implicit */unsigned long long int) min((1600098053U), (((/* implicit */unsigned int) (unsigned char)249))));
                        var_45 = ((/* implicit */unsigned char) var_6);
                    }
                    arr_60 [i_1] [i_13] = ((/* implicit */unsigned char) (signed char)59);
                }
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (min((var_3), ((~(((/* implicit */int) var_0))))))));
    var_47 |= ((/* implicit */unsigned int) (((((_Bool)1) ? ((+(-2106587781))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) & (((/* implicit */int) (unsigned char)183))));
}
