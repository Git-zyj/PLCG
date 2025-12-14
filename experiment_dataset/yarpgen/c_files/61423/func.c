/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61423
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
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2] [i_0] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((((arr_8 [18U] [18U] [i_3]) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) >> (((arr_10 [i_0] [i_0]) - (5605447770969981941ULL)))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) var_2)) | (var_19))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_4])))))))) && (((/* implicit */_Bool) var_2))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_1 [i_0]))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((3404478369U), (((/* implicit */unsigned int) (unsigned char)253))));
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) != (max((arr_8 [i_0] [i_0] [i_2]), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                                arr_20 [i_0] [i_1] [(signed char)4] [4U] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) <= ((-(11097206080292634385ULL)))))), (min((((/* implicit */int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
                                var_25 ^= ((/* implicit */unsigned long long int) var_2);
                                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) ((short) max((arr_5 [i_0]), (((/* implicit */int) var_11)))))) * ((-(((((/* implicit */int) (signed char)93)) / (var_3)))))))));
                            }
                            var_27 *= ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (1685233815U))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)17225))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7377948769336039488LL));
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_5))))) ? (max(((-(var_4))), (((((/* implicit */_Bool) var_19)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)101)), ((unsigned char)167)))) == (arr_5 [i_1])))))));
                                arr_23 [i_0] [i_1] [i_0] [(signed char)5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) var_6)))))) <= (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_6])), (var_5)))), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                            {
                                var_29 = ((/* implicit */signed char) min((((unsigned char) (+(((/* implicit */int) (unsigned short)17213))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))))))))));
                                arr_26 [i_3] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_2]);
                            }
                            for (short i_8 = 1; i_8 < 19; i_8 += 4) 
                            {
                                arr_30 [i_0] [i_0] [(signed char)6] [(signed char)6] [i_8] [i_8] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_8]))))) ? (((/* implicit */int) ((unsigned char) 0LL))) : ((~(((/* implicit */int) (_Bool)1)))));
                                arr_31 [i_0] [(signed char)14] [i_2] [i_8] [i_8] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) << (((arr_21 [i_8] [i_1] [i_1] [i_1] [i_0]) - (2667354336U)))))));
                                arr_32 [i_2] [14] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_11)))) > (((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) var_6)))))))) & (((/* implicit */int) var_12))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) (short)8160);
                    arr_36 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)119)) * (((/* implicit */int) arr_16 [i_9] [i_1] [i_1] [i_0] [i_1])))) / (max((var_3), (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_9] [i_9]))))));
                    arr_37 [i_0] [i_0] [i_0] [i_0] = var_7;
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((3756560182U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) ((unsigned char) var_11))))) : (((/* implicit */unsigned int) arr_0 [i_0]))));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            {
                                arr_48 [i_10] [i_11] [i_10] [i_0] [i_0] = ((/* implicit */signed char) min(((+(arr_17 [i_11 + 3] [i_11] [i_11 + 1] [i_11 - 2] [(short)7] [(short)19]))), ((~(var_19)))));
                                arr_49 [i_0] [(unsigned char)12] [i_1] [i_0] [(unsigned char)12] [i_0] [i_1] = ((/* implicit */short) (-(-231876294)));
                                arr_50 [i_0] [i_1] [7] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48311))))) <= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((17981901801888988566ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))))) : (((((/* implicit */_Bool) (signed char)69)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 0U))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17246)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    arr_54 [i_1] [i_0] = var_14;
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (((~(((/* implicit */int) var_15)))) <= (((((/* implicit */int) (unsigned char)163)) << (((((/* implicit */int) var_10)) - (85))))))))));
                                arr_62 [i_0] [i_1] [i_1] [i_14] [i_14] = ((/* implicit */unsigned short) (signed char)122);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_34 += ((/* implicit */unsigned char) arr_35 [i_0] [i_0]);
                        var_35 = ((/* implicit */unsigned int) ((_Bool) ((signed char) var_18)));
                        var_36 ^= ((/* implicit */int) (unsigned char)228);
                    }
                    for (int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            var_37 = min((((/* implicit */int) arr_39 [i_0] [i_0] [i_13] [i_17])), (min((((/* implicit */int) var_5)), (max((var_3), (((/* implicit */int) var_5)))))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_9))));
                        }
                        var_39 += ((/* implicit */_Bool) arr_8 [i_13] [i_13] [i_0]);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), ((+(13712751543975037825ULL)))))) ? (((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((((/* implicit */int) arr_70 [(unsigned short)16] [i_17] [i_13] [i_13] [i_1] [i_0])) % (arr_0 [i_17]))) <= (-1044572107))))));
                        arr_73 [i_0] [i_1] [i_1] [i_13] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((var_16), (((/* implicit */unsigned long long int) var_7)))) << (((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_13] [i_0] [i_17])))))));
                    }
                    var_41 &= ((/* implicit */int) arr_70 [i_0] [i_0] [i_1] [i_1] [i_13] [i_13]);
                }
            }
        } 
    } 
}
