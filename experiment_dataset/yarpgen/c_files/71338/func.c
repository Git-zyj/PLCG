/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71338
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)5)), (var_4)));
    var_21 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-6), ((signed char)7))))) + ((+(var_8))))), (((/* implicit */unsigned long long int) var_12))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-14)), (var_3)))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_1))))) & ((~(((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [i_1]), (arr_8 [i_1])))) ? (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned char) var_14))))) : (((((/* implicit */_Bool) ((long long int) -89132441))) ? (((/* implicit */int) ((short) var_19))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_10))))))));
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (short)-22314)))))) - (max((((/* implicit */int) (signed char)15)), ((+(((/* implicit */int) arr_1 [(_Bool)1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]);
                            arr_18 [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_0] [(unsigned short)15] [i_3]));
                            arr_19 [i_0] [i_2] = (signed char)8;
                            var_25 ^= ((/* implicit */unsigned char) var_10);
                            var_26 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_3] [i_0])), (var_10))))) & (max((var_16), (((/* implicit */unsigned int) (short)22323))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_20 [(short)6] [(short)6] [i_5] [i_6]);
                        var_28 ^= ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] [i_0])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (var_8)))))));
                        var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_1] [i_0])) ? (((/* implicit */int) arr_22 [i_6] [3] [i_1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_5] [i_5] [i_6] [i_6])))) - ((-(((/* implicit */int) arr_22 [i_6] [i_5] [i_1] [i_0]))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((short) arr_15 [i_0] [i_0] [i_0] [i_1] [(short)13]));
                var_31 &= ((/* implicit */signed char) arr_12 [i_0] [(signed char)8] [i_1] [1LL]);
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_28 [i_8])) : (var_8))) >> ((((~(((/* implicit */int) var_11)))) + (148)))));
                arr_30 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((short) var_12));
            }
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_10 = 3; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                    {
                        arr_37 [i_9] = ((/* implicit */unsigned int) max(((-((-(((/* implicit */int) (signed char)-8)))))), (max((((((/* implicit */_Bool) arr_34 [(unsigned short)8] [i_10] [i_1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_2))))));
                        arr_38 [i_11] [i_10] [i_9] [i_1] [i_0] = ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_0] [i_0]);
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                    {
                        var_33 &= ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_0 [i_9]))))) ? (((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_34 [i_1] [i_9] [i_10 - 2] [i_12])) + (95))))) : (((((/* implicit */int) arr_34 [(unsigned char)3] [i_1] [i_1] [i_12])) + (((/* implicit */int) var_2)))));
                        var_34 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (unsigned char)227)), (((((arr_15 [i_0] [i_1] [i_9] [i_1] [i_12]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_39 [8LL] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) + (2267))))))), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_17)))), ((!(((/* implicit */_Bool) (signed char)-101)))))))));
                        var_35 = ((/* implicit */unsigned short) ((long long int) (((+(arr_32 [i_10 + 2] [i_9] [i_1]))) << (((((((/* implicit */_Bool) arr_10 [i_1] [i_10 + 3])) ? (arr_25 [(unsigned char)11] [i_1] [i_9] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) - (38701651U))))));
                        var_36 = ((((/* implicit */_Bool) (short)28594)) ? ((-(((unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) 3297175601U)));
                        arr_41 [i_0] [i_1] [i_9] [i_9] [i_12] = ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned short)35264))));
                    }
                    var_37 = ((/* implicit */long long int) var_17);
                }
                /* vectorizable */
                for (short i_13 = 3; i_13 < 13; i_13 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) var_4);
                    arr_46 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) 997791679U);
                    arr_47 [i_0] [i_0] [9LL] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
                    /* LoopSeq 1 */
                    for (short i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        arr_51 [i_9] [i_1] [i_9] [i_13] [i_14 - 1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_9] [i_1] [i_14 - 1]))))) - (((/* implicit */int) ((_Bool) 4261412864U)))));
                        var_39 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_14)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_17))));
                    }
                }
                for (short i_15 = 3; i_15 < 13; i_15 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        arr_56 [i_0] [i_1] [i_9] [i_15] [i_16] = ((/* implicit */long long int) (((((~(var_18))) != (((/* implicit */int) var_15)))) || (((/* implicit */_Bool) (+((-(arr_27 [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_57 [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_44 [i_9] [i_1] [i_9]))));
                        arr_58 [i_0] [i_1] [i_1] [i_9] [i_0] [i_16] &= ((/* implicit */unsigned char) arr_31 [(short)2] [i_1] [i_16]);
                    }
                    for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) (signed char)-6);
                        var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_33 [i_9] [i_15 - 3] [i_15 - 2] [i_17] [15LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_27 [i_1] [i_15 - 3] [i_15 - 2] [i_15 - 3])))));
                    }
                    var_42 ^= ((/* implicit */unsigned long long int) arr_49 [(unsigned char)2] [(_Bool)0] [i_0] [i_15] [i_15 + 2]);
                    arr_63 [i_9] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_2)))) == (((/* implicit */int) var_14))));
                    arr_64 [(signed char)12] [i_0] [i_15 - 2] &= ((/* implicit */int) var_4);
                }
                arr_65 [i_9] [(short)3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(signed char)8] [i_1] [i_9])))))) ? (((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned long long int) var_1)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-22314)))))) : ((+(max((((/* implicit */unsigned long long int) var_19)), (17592185782272ULL)))))));
                var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                var_44 = ((/* implicit */unsigned short) arr_26 [i_0]);
            }
            arr_66 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? ((-(((/* implicit */int) arr_22 [i_1] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [12ULL] [i_1] [i_1] [i_1]))))));
        }
        for (unsigned short i_18 = 1; i_18 < 15; i_18 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_19 = 0; i_19 < 16; i_19 += 3) /* same iter space */
            {
                var_45 ^= ((/* implicit */unsigned short) arr_28 [i_0]);
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_14))));
                            var_47 = (!(((/* implicit */_Bool) arr_43 [i_19] [i_18 + 1] [i_18] [i_18] [i_18 - 1] [(unsigned char)14])));
                            var_48 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_49 ^= ((/* implicit */int) var_12);
            }
            for (signed char i_22 = 0; i_22 < 16; i_22 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
                {
                    arr_79 [i_23] = ((/* implicit */unsigned char) arr_14 [i_0] [i_18] [i_22] [i_22] [i_22]);
                    var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))) | (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
                    arr_80 [i_0] [i_18] [i_22] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-8))));
                    var_51 = max(((+(((/* implicit */int) arr_34 [i_18 - 1] [i_18] [i_18] [i_23])))), (((/* implicit */int) ((unsigned char) arr_48 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]))));
                    var_52 = ((/* implicit */unsigned short) ((max((max((9223372036854775807LL), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_23] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_23] [i_22] [(short)12] [i_0] [i_0]))) : (var_19)))))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_71 [i_22] [(signed char)14] [11ULL] [i_23])) ? (((/* implicit */int) var_17)) : (var_18))), (((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_0)))))))));
                }
                for (unsigned int i_24 = 0; i_24 < 16; i_24 += 4) /* same iter space */
                {
                    arr_83 [i_24] [11] [i_18] [11] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-39))));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 16; i_25 += 3) 
                    {
                        var_53 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((16U) ^ (arr_26 [i_22])))))) ^ (arr_35 [(unsigned char)14] [i_24] [i_18 + 1] [i_24] [i_0]));
                        var_54 &= ((((((/* implicit */_Bool) ((var_15) ? (arr_40 [i_0] [i_0]) : (((/* implicit */int) arr_42 [i_0] [i_18] [i_24] [i_25]))))) ? (((/* implicit */int) ((unsigned short) (signed char)29))) : (((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) arr_21 [i_25] [i_24] [i_18])) : (((/* implicit */int) (signed char)46)))))) > (((/* implicit */int) ((short) ((_Bool) var_9)))));
                    }
                    var_55 = ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_8))), (((/* implicit */unsigned long long int) ((arr_26 [i_0]) / (var_16)))))), (((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0] [i_18] [i_18 - 1] [i_0] [i_24])))));
                }
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 16; i_26 += 1) 
                {
                    for (signed char i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        {
                            var_56 ^= var_17;
                            arr_90 [i_0] [i_0] [i_22] [i_27] [i_27] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_0] [i_0] [(short)0] [i_0] [i_0]))) > (var_19))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)28601)) : (((/* implicit */int) var_2))))) ? (max((var_8), (((/* implicit */unsigned long long int) (signed char)-14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_22])))))));
                        }
                    } 
                } 
            }
            for (signed char i_28 = 0; i_28 < 16; i_28 += 3) /* same iter space */
            {
                var_57 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((arr_48 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 1]) ? (((/* implicit */int) arr_48 [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])) : (((/* implicit */int) arr_48 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1])))) : (((/* implicit */int) ((_Bool) arr_48 [i_18 + 1] [i_18 + 1] [i_18] [i_18 - 1])))));
                var_58 = ((/* implicit */short) max((((unsigned short) arr_82 [i_0])), (((/* implicit */unsigned short) ((short) 6036063653529731787LL)))));
            }
            var_59 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)14)))) ? (((/* implicit */int) ((((((-2147483640) + (2147483647))) << (((((/* implicit */int) (signed char)48)) - (48))))) < (((/* implicit */int) arr_24 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1] [i_18 - 1]))))) : (((/* implicit */int) (_Bool)1))));
        }
    }
}
