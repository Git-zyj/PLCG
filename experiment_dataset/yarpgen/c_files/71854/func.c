/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71854
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */int) (unsigned char)0);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)208)), (1665092249)))) >= (max((((/* implicit */unsigned int) 340665661)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((((_Bool) (-(arr_0 [5LL] [i_1])))) ? (((/* implicit */long long int) max((((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (var_11))), (((/* implicit */unsigned int) arr_6 [i_1]))))) : (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_2]) : (((/* implicit */long long int) var_12)))) ^ ((-(508219070333501519LL)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10723))) & (3278581520247335216ULL)));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(var_8))) / (((/* implicit */long long int) ((arr_0 [i_1] [i_1]) * (((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1889583813)) * (0U)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_13)) | (var_9))))) : (arr_0 [i_1] [i_3 - 2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (long long int i_5 = 3; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_5)))));
                        var_21 = (unsigned char)216;
                    }
                    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) / (arr_21 [16ULL])));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_25 [i_9] [i_8] [i_6] [i_5 + 1] [i_4])) : (arr_17 [i_5])));
                        }
                        var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8] [i_8 + 2] [i_8] [i_8 - 1]))) == (arr_18 [i_8] [i_5] [i_8 + 1] [i_8 - 1])));
                        var_25 = ((/* implicit */unsigned short) arr_20 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_8 + 1]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4294967295U)))) : (arr_14 [i_5])));
                        var_27 = ((/* implicit */unsigned char) (-(((var_4) ^ (4294967295U)))));
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) ((unsigned short) ((arr_28 [i_5] [i_5] [i_5] [i_11]) * (((/* implicit */unsigned int) 2147483627)))));
                            var_29 -= ((/* implicit */unsigned short) (-((-(4294967295U)))));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_30 = ((arr_30 [i_4] [i_5 + 2]) & (arr_30 [i_4] [i_5 - 2]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) var_2);
                            var_32 = (unsigned char)48;
                            arr_38 [i_4] [i_5] [i_4] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (585622994U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54807)))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_6] [i_5])) ? (arr_31 [i_4] [i_6] [i_6] [i_5]) : (arr_31 [i_5 + 1] [i_5 + 1] [i_6] [i_5])));
                        }
                        for (long long int i_14 = 2; i_14 < 19; i_14 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((arr_26 [i_5 - 1] [i_14 - 1]) ? (((/* implicit */int) ((_Bool) arr_18 [i_4] [i_5] [i_4] [i_14]))) : ((-(((/* implicit */int) var_10))))));
                            var_35 = ((/* implicit */int) ((unsigned char) ((((arr_29 [i_4] [i_5 + 2] [i_6] [i_6] [i_12] [i_6]) + (2147483647))) >> (((-973255436) + (973255438))))));
                            arr_41 [(unsigned short)4] [i_12] [i_5 + 2] [i_5] [i_5 + 2] [i_4] [i_4] = ((unsigned char) 1301991456);
                        }
                        for (unsigned short i_15 = 4; i_15 < 19; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) -2147483627);
                            arr_45 [i_5] [i_5] [1U] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((942227234) << (((((/* implicit */int) (unsigned short)38747)) - (38746)))))) == (9223372036854775807LL)));
                            var_37 = ((/* implicit */_Bool) (((_Bool)1) ? (0LL) : (((/* implicit */long long int) -2147483628))));
                            var_38 = ((/* implicit */_Bool) (unsigned char)15);
                        }
                    }
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_54 [i_4] [i_5] [i_6] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_5] [i_5 - 2] [i_5 - 2])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_5] [i_5 - 2] [i_5 + 1])))));
                            var_39 = ((/* implicit */unsigned short) arr_51 [i_17] [i_16] [i_5] [i_5 + 1] [i_5] [i_4] [i_4]);
                            var_40 = ((/* implicit */unsigned char) arr_30 [i_4] [i_4]);
                            var_41 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_42 ^= ((/* implicit */unsigned short) (~((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 3; i_18 < 16; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) 2889956502561057498ULL)) ? (-349853202) : (arr_34 [i_4] [i_19]))))));
                                var_44 = ((/* implicit */unsigned int) (unsigned char)251);
                                var_45 = ((/* implicit */int) ((unsigned short) (_Bool)1));
                                var_46 = ((/* implicit */int) ((_Bool) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */_Bool) min((var_47), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_4] [i_6] [i_6] [i_5]) < (((/* implicit */unsigned int) arr_31 [i_4] [i_4] [i_5] [16U])))))) > (arr_21 [(unsigned char)8])))));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_21 = 4; i_21 < 18; i_21 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) (unsigned short)42386);
                        /* LoopSeq 2 */
                        for (unsigned char i_22 = 2; i_22 < 18; i_22 += 4) /* same iter space */
                        {
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */long long int) 349853202)) : (-9213792787933820943LL)));
                            arr_67 [i_5] [i_20] [i_22] [i_21] [i_21] = ((_Bool) ((3446515082U) != (var_4)));
                            var_50 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (349853202)));
                        }
                        for (unsigned char i_23 = 2; i_23 < 18; i_23 += 4) /* same iter space */
                        {
                            arr_72 [i_4] [i_5 - 3] [i_5] [i_21] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 4294967268U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_0) >> (((/* implicit */int) arr_55 [i_4] [i_4] [i_20] [i_21 - 1] [i_4]))))));
                            arr_73 [(unsigned char)8] [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */_Bool) var_14);
                            arr_74 [i_23] [i_5] [i_20] [i_20] [i_5] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        var_51 = ((/* implicit */unsigned int) (unsigned short)13856);
                        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) (((~(arr_23 [i_4] [i_5] [i_5] [i_20] [i_20] [i_21 + 1]))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11492))))))));
                        var_53 = ((/* implicit */int) 27U);
                    }
                    var_54 = ((/* implicit */unsigned char) var_13);
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_4] [i_4] [i_4]))) ^ (((long long int) var_12))));
                }
                for (unsigned char i_24 = 3; i_24 < 19; i_24 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 20; i_26 += 1) 
                        {
                            {
                                var_56 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))));
                                arr_82 [i_4] [i_5] [i_5] [i_25] [i_5] = ((/* implicit */unsigned char) 4294967295U);
                                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)51679)) ? (848452214U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36248))))))))));
                                var_58 ^= (((!(((/* implicit */_Bool) arr_16 [i_4] [i_5 + 2] [i_24])))) ? (((int) 4294967268U)) : ((+(((/* implicit */int) (unsigned short)65533)))));
                                arr_83 [i_5] = ((/* implicit */_Bool) ((17546646431747192307ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned char)98)))))));
                            }
                        } 
                    } 
                    arr_84 [i_4] [i_4] [i_5] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_39 [i_4] [i_5] [i_24] [i_24])))))) >> (((/* implicit */int) (((_Bool)0) || (((((/* implicit */_Bool) 2388413314U)) || (((/* implicit */_Bool) 1610579465)))))))));
                }
                var_59 &= ((/* implicit */int) (unsigned char)98);
            }
        } 
    } 
}
