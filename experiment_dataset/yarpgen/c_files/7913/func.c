/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7913
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_21 = ((/* implicit */_Bool) var_7);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                            {
                                var_22 = var_3;
                                var_23 &= ((/* implicit */int) arr_0 [i_3] [i_3]);
                                arr_14 [i_2] [i_1] [i_4] [(unsigned short)7] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)29)))))), (((((/* implicit */_Bool) ((var_17) / (arr_9 [i_2])))) ? (arr_3 [i_0] [i_1] [i_2 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
                            }
                            arr_15 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4294967282U)))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_4 [13U] [13U])), (var_5))))))), (var_0)));
                        }
                    } 
                } 
                var_24 *= ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_0]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0])), (var_13))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0]) : (var_4))) >> (((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) var_18)))) - (524259)))));
                        arr_22 [i_6] [i_6] [i_6] = (!(((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1] [i_5] [i_6])));
                        arr_23 [i_6] [i_5] [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) 1748760230U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (var_0))))));
                        var_27 = ((((/* implicit */int) var_12)) >> (((arr_25 [i_1] [i_1]) + (2102248182))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned short)65535)))), ((~((~(((/* implicit */int) arr_11 [17LL] [i_1] [i_5] [i_9]))))))));
                            var_29 = ((/* implicit */unsigned char) var_10);
                            arr_32 [i_0] [i_9] [i_0] [(signed char)0] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (-(((/* implicit */int) var_7))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_1] [i_5] [i_8] [i_8] [(unsigned short)8] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) var_14)), (1331114096)))));
                            var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) var_14))))) ? ((+(((/* implicit */int) arr_26 [i_0] [i_1] [i_8] [i_8])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)15)))))), (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)240)))))));
                            arr_38 [i_1] [i_5] [i_8] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (1006168874U))))))));
                            arr_39 [i_0 - 1] = ((/* implicit */long long int) ((((var_4) >= (((/* implicit */int) ((short) (unsigned char)128))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_19)))) || (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 1]))) != (33554431LL))))))) : (((unsigned int) min((((/* implicit */unsigned int) (unsigned short)9)), (4294967286U))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((int) arr_2 [i_1] [i_1]));
                            var_32 = ((/* implicit */unsigned short) ((var_10) ? (var_4) : (((/* implicit */int) arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [(unsigned short)10])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_10 [i_12] [i_8] [i_1] [i_1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            arr_44 [i_0] [i_0] [i_0] [i_8] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) : (var_15))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1))))));
                        }
                    }
                    arr_45 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 35890285827609473LL)) ? (max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) min((arr_1 [i_5] [i_0]), (((/* implicit */int) (unsigned short)30720))))))) : (((/* implicit */unsigned int) (-(arr_16 [i_0] [i_0] [i_0]))))));
                }
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) arr_2 [i_1] [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) arr_0 [i_1] [i_0]))))))));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) 785740147)), (arr_5 [i_1]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)5] [i_1] [i_13])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_40 [i_13] [4LL] [i_0 - 1] [16] [i_13] [i_13] [i_13]))))) ? ((~(((/* implicit */int) var_18)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_36 = ((unsigned char) max((((/* implicit */unsigned int) var_6)), (max((680209115U), (536866816U)))));
                                var_37 = ((/* implicit */short) arr_49 [i_14]);
                            }
                        } 
                    } 
                }
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    var_38 = ((/* implicit */short) ((int) 785740159));
                    arr_55 [i_0] [i_0] [i_16] = ((/* implicit */unsigned long long int) arr_9 [i_16]);
                    var_39 = ((((/* implicit */_Bool) ((signed char) ((signed char) var_2)))) && (((/* implicit */_Bool) ((long long int) (unsigned char)23))));
                }
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_19 = 2; i_19 < 15; i_19 += 4) 
                            {
                                var_40 |= ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (var_0))), (((/* implicit */unsigned long long int) arr_34 [i_0 - 1] [i_17] [i_17 + 1] [i_19 + 1])))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4))))), (785740115))))));
                                arr_63 [(unsigned short)13] [i_0 - 1] [i_0 - 1] [(unsigned short)13] [i_18] [i_17] = ((/* implicit */int) max(((-(max((2606476023U), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)32768)))) > (((var_5) - (((/* implicit */int) (unsigned char)0)))))))));
                                var_41 = ((signed char) 1266282131);
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                            {
                                arr_67 [i_17] [i_17 + 1] [i_17] [i_1] [i_20] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((~(((/* implicit */int) var_18)))) != (((/* implicit */int) arr_65 [i_0] [i_1] [i_0] [i_18] [i_17 + 1] [i_1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_47 [i_17] [i_1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_2))))) : ((~(140737488355327LL)))))));
                                arr_68 [(unsigned char)6] [i_17] [i_17 + 1] [i_18] [i_20] = var_7;
                                arr_69 [(unsigned short)2] [(unsigned short)2] [i_17] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))), (min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_17] [i_20])))))));
                                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_29 [(unsigned char)9]))))), (-1264989261261181972LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_19 [i_0] [i_0 - 1] [i_17 + 1])))))))));
                                var_43 = min(((~(((/* implicit */int) (signed char)-81)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                            {
                                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_17 + 1] [i_18] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_21] [i_18])) & (((/* implicit */int) (signed char)-100))))) : (((((/* implicit */_Bool) 1657058977)) ? (536870911ULL) : (((/* implicit */unsigned long long int) 1397527553))))));
                                arr_73 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(unsigned char)15] [i_21 + 1] [i_21] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_17]))) : (var_15)));
                                arr_74 [i_18] [12U] [12U] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */signed char) var_5);
                                arr_75 [i_18] [i_18] [i_18] [(unsigned short)2] [(signed char)14] &= ((/* implicit */unsigned char) ((signed char) arr_4 [i_0 - 1] [i_17 - 1]));
                            }
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 9087902325448106706ULL)) ? (1479109601) : (-785740148))))) <= ((+(((/* implicit */int) (unsigned short)0)))))))));
                            var_46 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-127)) + (137)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((3290482015U) >> (((((/* implicit */int) (signed char)97)) - (89)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)201)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) 1413847463085732718LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))) : (min((1264989261261181972LL), (((/* implicit */long long int) (unsigned char)222))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2788383893533203489ULL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned char)203))))) : (((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((~(((/* implicit */int) var_16))))))));
    var_48 = ((/* implicit */unsigned char) var_6);
}
