/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99609
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-60)))) / ((~(((/* implicit */int) (_Bool)1))))))) ? ((-(var_6))) : (((((((/* implicit */unsigned int) -1810681829)) ^ (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)54)), ((short)0))))));
            arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) max((max((min((arr_2 [i_0]), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) ((((/* implicit */int) var_2)) > (arr_2 [i_0])))))))));
            var_18 = ((/* implicit */unsigned long long int) var_15);
        }
        for (short i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0])), (arr_0 [i_0]))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 4; i_3 < 22; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (7262142257043879647ULL)))));
                var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)12941)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (130944U)));
                var_21 = ((/* implicit */unsigned long long int) min((((arr_2 [i_0]) | (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) <= (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (0U))))))));
            }
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_12 [i_0] [i_2 + 2]))));
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */signed char) arr_6 [i_0 + 2] [i_2] [i_4]);
            }
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
            {
                var_23 = ((((/* implicit */_Bool) min((arr_10 [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned char)184))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)14)))) : (((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0])), (16121695046619158268ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))))));
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)0)))))) ? ((~(((/* implicit */int) (short)-16667)))) : ((~(((/* implicit */int) ((unsigned char) -4972762324773471686LL)))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_2 + 1])) : (((/* implicit */int) (unsigned char)184))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((/* implicit */short) (+((+(((/* implicit */int) arr_19 [i_7] [i_6] [i_0] [i_0]))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_20 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) 4294967295U)) : (arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_6 [i_2] [13] [i_2])) : (((/* implicit */int) arr_19 [i_0 + 2] [i_2 + 1] [i_0 + 2] [i_2 + 2])))))));
                }
                for (signed char i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    arr_30 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_17 [i_0])));
                    var_27 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-41)))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_6])))))));
                    arr_31 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */signed char) (((-(arr_20 [i_0] [i_2] [i_2]))) << (((((/* implicit */int) (signed char)88)) - (78)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */int) arr_8 [i_0]);
                        var_30 = ((/* implicit */unsigned char) (~(arr_29 [i_0] [i_6] [i_6])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_6] = ((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [i_0]);
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) (_Bool)1))))) ? ((~(var_5))) : (((/* implicit */unsigned int) 1959705690)))))));
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(arr_33 [i_0 + 3] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3]))))));
                    arr_42 [i_0 + 1] [i_2 - 1] [i_0] [i_2 - 1] [i_0 + 1] [i_6] = ((/* implicit */int) ((((arr_18 [i_0] [i_0] [i_6] [i_11]) / (arr_39 [i_0] [i_0] [i_0] [i_11] [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 3) 
                {
                    arr_45 [i_0] [i_0] [i_6] [i_12] = ((/* implicit */_Bool) var_13);
                    var_33 = ((/* implicit */unsigned int) (unsigned short)30270);
                }
                arr_46 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)33125)))))) : ((~(var_9)))));
            }
        }
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 + 2])) ? (arr_39 [i_0 - 1] [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 2]) : (2305842734335787008LL)))) ? (((/* implicit */int) ((unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) arr_26 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_27 [i_0] [(short)18])))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30270)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) : (884990606U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) != (((/* implicit */int) arr_49 [i_13] [i_13])))))) : (((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (arr_47 [i_13])))));
        var_36 -= ((/* implicit */_Bool) arr_47 [(signed char)20]);
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_49 [i_13] [i_13]))));
        var_38 = ((((/* implicit */_Bool) arr_48 [i_13])) ? (((/* implicit */long long int) arr_47 [i_13])) : (((long long int) (unsigned char)24)));
        arr_50 [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_13]))) - (arr_48 [i_13])))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_14]))) > (9172365763993997158LL)))) : (((/* implicit */int) arr_52 [i_14]))));
        arr_53 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_51 [i_14]))) ? (((((/* implicit */_Bool) arr_47 [i_14])) ? (arr_47 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_14] [i_14])))))));
    }
    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 1; i_18 < 19; i_18 += 1) 
                    {
                        for (signed char i_19 = 3; i_19 < 18; i_19 += 4) 
                        {
                            {
                                arr_70 [i_17] [i_16] [i_17] [i_18 - 1] [i_19] = ((/* implicit */int) (((_Bool)1) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_15] [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) arr_17 [i_17]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_60 [i_15] [i_16]))))), (max(((unsigned char)15), ((unsigned char)139)))))))));
                                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) arr_26 [i_15] [i_16] [i_17]))));
                                var_41 = ((/* implicit */unsigned char) (+(var_6)));
                            }
                        } 
                    } 
                    arr_71 [i_15] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43051))));
                    arr_72 [i_17] [i_16] [i_17] = ((/* implicit */unsigned char) (unsigned short)0);
                    arr_73 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)511)) ? (-1105576392) : (((/* implicit */int) var_11))));
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)17033)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))))))));
                        var_43 -= (((!(((/* implicit */_Bool) arr_39 [i_15] [i_15] [i_16] [i_17] [i_20])))) ? (((/* implicit */int) (unsigned char)154)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_15] [i_15] [i_15])))) : (((/* implicit */int) (unsigned char)29)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 4; i_22 < 18; i_22 += 4) 
                        {
                            arr_85 [i_17] [i_17] [i_17] [i_16] = ((/* implicit */_Bool) arr_18 [i_15] [i_17] [i_15] [i_21]);
                            var_44 ^= ((/* implicit */_Bool) (+(arr_79 [i_22] [i_22 - 2] [i_22 - 1] [i_21] [i_22 + 2])));
                            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_22 + 1] [i_22] [i_22 - 3] [i_15] [i_22 - 3])))))));
                        }
                        for (long long int i_23 = 0; i_23 < 20; i_23 += 3) 
                        {
                            arr_88 [i_17] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_16] [(short)11] [i_23])) ? (((/* implicit */int) arr_74 [i_15] [(signed char)19] [(signed char)19] [i_15] [i_15])) : (((((/* implicit */_Bool) 5274006370355940201LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_17] [i_17] [i_17]))))));
                            var_46 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                        }
                        /* LoopSeq 3 */
                        for (int i_24 = 1; i_24 < 16; i_24 += 4) 
                        {
                            var_47 |= ((/* implicit */unsigned char) arr_90 [i_15] [i_16] [i_21] [i_24 + 1]);
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) 72022409665839104ULL)) ? (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) arr_49 [i_15] [i_16])) : (((/* implicit */int) (unsigned char)73))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15980)))))));
                            arr_92 [i_15] [i_16] [i_15] [i_21] [i_17] [i_15] = ((/* implicit */signed char) arr_60 [i_15] [i_15]);
                            var_49 = (~((~(((/* implicit */int) arr_78 [i_16] [i_16] [i_17] [i_17])))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 1) 
                        {
                            var_50 ^= ((/* implicit */_Bool) (-(72022409665839104ULL)));
                            arr_96 [i_25] [i_17] [5ULL] [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_49 [i_16] [i_16])) && (((/* implicit */_Bool) 888906546)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [i_16] [i_16])) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_37 [i_15] [i_16] [i_17] [i_17] [i_25]))));
                        }
                        for (signed char i_26 = 1; i_26 < 19; i_26 += 4) 
                        {
                            var_51 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [i_15] [i_16] [i_17] [i_21] [3])) ? (((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_0 [i_15]))));
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_16] [i_26 + 1]))) : (18374721664043712518ULL))))));
                        }
                    }
                }
            } 
        } 
        arr_99 [i_15] [i_15] |= ((/* implicit */unsigned char) ((unsigned int) (-(arr_61 [i_15] [i_15]))));
    }
}
