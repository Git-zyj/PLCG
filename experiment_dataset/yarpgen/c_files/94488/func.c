/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94488
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -5905151202040618681LL)) && (((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_1)))))))));
    var_13 = ((unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_3 [i_1 + 1])))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36201)) : (((/* implicit */int) (unsigned short)52217))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46299))) == (arr_5 [i_2 + 1] [i_1 + 2])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((_Bool)1), (var_6)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))));
                        arr_13 [i_1 + 1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (-((-(arr_8 [i_2] [i_2] [i_2])))))) ? (max((9223372036854775807LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (17173847075688485400ULL))))));
                        var_16 = ((/* implicit */int) max((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))))), (arr_0 [i_1]))), (((unsigned short) 6460574647089599035LL))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)252);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)28))))))) : (9223372036854775790LL))))));
                            arr_19 [i_0] [i_1 - 1] [i_2 - 1] [i_4] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) min((arr_0 [i_2]), (var_11)))) : (((/* implicit */int) arr_11 [i_0] [i_2] [16ULL] [i_5])))), (((/* implicit */int) var_8))));
                            arr_20 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2 + 1] [i_1] [i_0] [i_5]);
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (-965184196) : (((/* implicit */int) (unsigned char)1))));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_1 - 1] [i_2 + 1] [4U] [i_7] &= ((/* implicit */unsigned long long int) var_2);
                            var_20 ^= ((/* implicit */unsigned long long int) ((short) ((((int) var_9)) <= (((((/* implicit */int) (unsigned short)56289)) ^ (((/* implicit */int) var_8)))))));
                            arr_26 [i_0] [i_1] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_7] [i_7] [i_7]);
                        }
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((9223372036854775807LL), (((/* implicit */long long int) (short)-32766))))))) ? (((/* implicit */int) (unsigned short)65514)) : ((~(0)))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                            var_22 *= ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0]);
                            arr_30 [i_0] = var_9;
                            var_23 += (-(((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (572989392)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -314318805)))))));
                            arr_31 [i_8] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((arr_11 [i_0] [i_0] [i_1] [i_1 + 1]), (arr_11 [i_0] [i_1] [i_1 + 1] [5])))), (max(((unsigned short)54477), (((/* implicit */unsigned short) (short)14336))))));
                        }
                        for (short i_9 = 1; i_9 < 20; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 4ULL);
                            arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 9223372036854775807LL);
                            arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)43786)), (-2)))) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_32 [(short)12] [i_4] [i_2] [i_4] [(short)20]))))))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_2 - 1] [i_10 - 1]))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_38 [i_0] [i_10] [i_10] [i_10 - 2])))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (arr_38 [i_0] [i_0] [i_2 + 1] [i_0])));
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)8351))))))) % (((((/* implicit */_Bool) arr_9 [i_10] [i_10 + 1] [0U] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)119)))))) : (min((17841808515896120591ULL), (((/* implicit */unsigned long long int) (short)-3376))))))));
                    }
                    arr_40 [(short)21] [i_0] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (short)9494)))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 4856722631738332924ULL))));
                }
                for (signed char i_11 = 1; i_11 < 21; i_11 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 2) 
                    {
                        for (short i_13 = 2; i_13 < 20; i_13 += 1) 
                        {
                            {
                                arr_50 [i_0] [i_11 - 1] [i_12] [i_0] = ((/* implicit */int) var_4);
                                var_28 *= ((/* implicit */unsigned long long int) var_5);
                                arr_51 [i_0] [i_1 - 1] [i_0] [i_11] [i_13] = ((/* implicit */long long int) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) max((var_29), (((((((/* implicit */_Bool) (unsigned char)255)) ? (min((var_3), (11175671721680269237ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-46))))))) != (((/* implicit */unsigned long long int) (+(3059965925U))))))));
                    var_30 = ((/* implicit */unsigned short) ((unsigned long long int) max((min((((/* implicit */unsigned long long int) -884748)), (4607255401150916549ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))));
                }
                arr_52 [i_0] [i_0] = ((/* implicit */signed char) var_6);
                arr_53 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_41 [i_1] [i_0] [i_1] [i_1])), (18446744073709551613ULL))))))), (var_4)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_14 = 4; i_14 < 13; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    {
                        arr_66 [i_14] [i_14] [i_14 + 2] = ((/* implicit */unsigned short) min((arr_39 [i_16] [i_17] [(short)12] [i_14]), ((((+(3959148014U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14] [i_14] [i_15 + 1] [(unsigned char)18] [i_16] [i_14] [i_15 + 1])))))));
                        arr_67 [i_17] [i_17] [i_16] [i_15] [i_15 + 1] [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_16] [i_16] [i_16] [i_16])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) arr_27 [i_14 - 1] [i_14 - 2] [i_14 - 3] [i_14 - 1] [i_14] [(unsigned short)18])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_32 [i_14] [i_15] [i_16] [i_17] [16ULL]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_15 + 1] [(unsigned short)13] [i_15 + 1] [(_Bool)1])))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 13108004657265230759ULL)))) ? ((+(17777563999070021822ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_14])) && (((/* implicit */_Bool) (unsigned char)231)))))))))))));
    }
    var_32 = ((/* implicit */unsigned short) ((short) 1540735268));
}
