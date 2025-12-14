/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93293
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(max((8698707557208632312LL), (((/* implicit */long long int) (short)-23619)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) 2147483647)));
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2854141111671287758LL)))))))), (((arr_8 [(short)16] [i_0]) + (((/* implicit */unsigned int) ((var_9) - (-1488362320))))))));
                    /* LoopSeq 3 */
                    for (int i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((unsigned int) ((long long int) 2040189785)))));
                        var_13 = ((/* implicit */unsigned short) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_14 += ((/* implicit */short) 7142138508554045222ULL);
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        var_15 = ((((/* implicit */_Bool) (~(arr_3 [i_0] [(unsigned char)11])))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) arr_16 [(short)10] [i_0] [i_0] [5] [(short)12] [9ULL] [(short)6])))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 2] [i_3 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 3] [i_3 - 1] [i_5 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_2 + 2] [i_3 + 1] [i_5 + 1]))));
                        var_17 = ((/* implicit */short) (+(arr_15 [i_1] [i_2 + 4] [i_2])));
                        arr_17 [i_0] [4ULL] [4ULL] [4ULL] [i_1] [0LL] [4ULL] &= ((/* implicit */unsigned long long int) arr_3 [(unsigned char)17] [(unsigned char)11]);
                    }
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1ULL))));
                        var_19 = ((/* implicit */int) arr_8 [i_0] [i_0]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0] [(unsigned short)16] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3 - 1] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_6 + 1] [i_3] [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_2 + 2] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_3 - 1] [i_2 + 4] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_2 + 3] [i_0]))))) : (max((((/* implicit */unsigned long long int) (short)21025)), (18446744073709551615ULL)))));
                    }
                }
                for (short i_7 = 2; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 4; i_8 < 17; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (~(18446744073709551615ULL))))), (arr_8 [i_0] [i_0])));
                        var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) (short)-23619))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_28 [(signed char)2] [i_1] [i_2 + 3] [i_7 + 2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551612ULL))));
                        var_23 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [(short)16] [i_2] [i_0] [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])) : (14856975422380462351ULL)))))))));
                    }
                    var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_2 + 4])))), (((/* implicit */int) (short)-27511))));
                    var_25 *= ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_0] [(unsigned char)2] [i_0] [i_0] [i_0])), (1751637139)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (0ULL))), (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (18446744073709551605ULL))))));
                }
                for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    arr_33 [i_0] [i_1] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1]))))), (max((((18446744073709551597ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23619))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))))));
                    var_26 = ((/* implicit */short) ((arr_26 [(short)4] [i_10]) != (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)13] [(short)8]))));
                    var_27 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned char)255)), (arr_8 [i_2] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))))))), (arr_4 [9LL])));
                }
                arr_34 [i_2] [i_0] [i_0] [17ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(_Bool)1] [(unsigned char)17] [i_0] [i_2])) ? (2244483953775622270ULL) : ((-(18446744073709551606ULL)))));
                var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -2040189786)), (max((((/* implicit */unsigned long long int) 1082447621U)), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)189))))))));
                arr_35 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (short)23619);
            }
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) > (18446744073709551614ULL)));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    arr_43 [i_0] = ((((((/* implicit */int) arr_12 [3U] [i_0] [3U] [i_12 + 3])) % (var_9))) % (((/* implicit */int) ((short) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_30 -= ((/* implicit */signed char) arr_26 [i_0] [i_1]);
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [17] [i_0] [i_12 + 3] [17]))))) ? (arr_31 [i_0] [i_11] [i_1] [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8026)))))));
                        var_32 = ((/* implicit */short) arr_44 [i_0] [i_0] [i_11] [i_0] [(signed char)3]);
                        arr_46 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_11] [i_12] [i_13] [i_12])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)55293)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_12 [i_12 + 3] [i_0] [i_12 + 2] [(unsigned short)2]))));
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_1] [2U] [i_11] [i_14] [i_14])) - (((/* implicit */int) arr_10 [(signed char)8]))))) - (((var_1) ? (arr_40 [16ULL] [16ULL] [i_1] [6ULL]) : (arr_0 [i_1])))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -429197658)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29690))) : (-1148981351521984019LL)));
                }
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(unsigned char)1] [16LL] [i_11] [(signed char)10] [i_11]))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((arr_30 [i_0] [i_0] [(_Bool)1] [(signed char)7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [(short)14] [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_3))) <= (((/* implicit */int) (_Bool)1))))))));
                var_37 = ((/* implicit */short) arr_31 [i_0] [i_1] [i_15] [i_0]);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 3; i_18 < 16; i_18 += 2) /* same iter space */
                    {
                        arr_60 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                        arr_61 [i_1] [i_16] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-122)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_17] [i_18])) ? (arr_30 [(short)17] [(short)14] [i_16] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) (short)-23619)) * (((/* implicit */int) (_Bool)0)))) : (arr_19 [i_16] [i_16] [i_18 + 1] [i_18 - 2] [i_0] [i_18 - 2])))));
                        var_38 = arr_59 [i_18] [i_0] [i_0] [i_1] [i_0];
                        var_39 = ((/* implicit */unsigned char) (((~((-(18446744073709551613ULL))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(var_9)))), (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30986))))))))));
                        arr_62 [i_0] [9] [i_0] [14] [(unsigned short)16] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_16] [i_17])) : (((/* implicit */int) arr_56 [i_16] [16U] [i_18]))))) - (((((/* implicit */_Bool) arr_42 [(short)13] [(short)13] [i_16] [i_17] [i_18])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-844)))))))) ? (((/* implicit */int) arr_29 [(unsigned short)13] [11LL] [(unsigned char)11] [i_1] [16LL])) : (((/* implicit */int) max((((/* implicit */short) arr_24 [i_18 + 1] [i_18 - 1] [(unsigned char)1] [i_18 + 1] [i_18 + 1] [i_18 + 1])), (var_8))))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_17] [i_16] [(short)7] [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_18 [i_0] [i_0] [i_1] [i_1] [i_16] [i_16] [i_0])), (arr_23 [i_0] [i_1] [(short)14] [(short)14] [i_19] [i_19 - 2])))) : ((-(((/* implicit */int) (signed char)-68)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */int) ((short) -5670064242833905423LL))) : (arr_15 [i_0] [i_1] [(short)6])))));
                        arr_65 [i_1] [i_0] = ((/* implicit */unsigned long long int) max((arr_56 [i_16] [i_17] [i_19]), (((/* implicit */signed char) (_Bool)1))));
                        var_41 = ((/* implicit */short) max((var_41), ((short)-2699)));
                    }
                    var_42 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    var_43 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) arr_9 [i_0] [i_16] [i_1] [i_0])))) != (((/* implicit */int) ((unsigned char) max((12938308038605516325ULL), (((/* implicit */unsigned long long int) arr_13 [(unsigned short)16] [14] [i_0] [i_0] [i_0]))))))));
                }
                var_44 = ((/* implicit */short) ((unsigned char) (signed char)60));
                var_45 += ((/* implicit */short) max((((/* implicit */int) ((unsigned char) arr_50 [i_1]))), ((+(((/* implicit */int) var_0))))));
            }
            /* LoopSeq 3 */
            for (long long int i_20 = 2; i_20 < 14; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_46 = max((((/* implicit */long long int) (_Bool)0)), (((((((/* implicit */_Bool) (unsigned char)97)) ? (arr_39 [i_0]) : (((/* implicit */long long int) var_9)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2711)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_68 [i_0] [(_Bool)1] [i_21]))))))));
                    var_47 = ((/* implicit */short) arr_27 [i_0] [i_0] [16ULL] [i_20] [(signed char)17] [(signed char)5]);
                    var_48 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_59 [i_0] [i_1] [i_0] [i_20 - 1] [(unsigned char)11])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 + 4] [i_20 + 1])) < (((/* implicit */int) arr_18 [i_1] [(unsigned char)17] [4ULL] [i_20 - 2] [(short)10] [i_20 + 2] [i_21]))))) : ((~(((/* implicit */int) var_7))))));
                    arr_73 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_0] [(_Bool)1] [i_0] [i_21] [i_0] [i_1]) : (((/* implicit */int) var_3))))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_22 = 3; i_22 < 16; i_22 += 1) 
                {
                    arr_76 [(short)14] [i_0] [2ULL] [12U] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_20])) ? (arr_39 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (18446744073709551609ULL)));
                    arr_77 [i_0] [17ULL] [(unsigned char)9] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
                }
                for (short i_23 = 1; i_23 < 15; i_23 += 1) 
                {
                    var_49 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_48 [i_0] [17] [i_20] [i_23 + 3]))))));
                    var_50 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) var_3)) & (((/* implicit */int) arr_68 [i_0] [i_0] [i_23 + 2])))) % ((-(((/* implicit */int) arr_9 [i_0] [i_20] [i_1] [i_0])))))));
                }
                for (unsigned short i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    var_51 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (signed char)9)), (arr_75 [i_0] [i_20 + 3] [i_20]))) ^ (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_8 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)144)))))))));
                    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) ? (1ULL) : (((/* implicit */unsigned long long int) 1474861441)))))));
                }
                arr_82 [i_0] [i_20] [i_0] &= ((/* implicit */long long int) arr_81 [i_1] [i_1] [14ULL] [(unsigned short)6]);
            }
            for (int i_25 = 0; i_25 < 18; i_25 += 2) /* same iter space */
            {
                var_53 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [i_0])))))));
                var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_1] [i_25]), (arr_7 [i_0] [i_0] [i_25] [i_0])))) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) max((var_8), ((short)23618))))));
            }
            for (int i_26 = 0; i_26 < 18; i_26 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        {
                            arr_93 [i_0] [i_0] [i_1] [(unsigned short)7] [i_26] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_1)) | (((/* implicit */int) ((short) var_0))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned char)66))))));
                            var_55 = ((/* implicit */unsigned short) (short)-23619);
                            var_56 = max(((short)-30280), ((short)18704));
                            var_57 &= ((/* implicit */unsigned char) (-(((int) (signed char)-23))));
                            var_58 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38556)) ? (-4384021706108436363LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_25 [i_0] [i_1] [i_26] [(unsigned short)4] [i_28])), (var_5))))) : (arr_31 [i_0] [i_26] [i_27] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_1] [i_1] [(signed char)11])))));
                        }
                    } 
                } 
                var_59 = ((/* implicit */long long int) max((((max((((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [4])), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) * (((((/* implicit */_Bool) arr_57 [i_26] [i_26] [i_26] [0U] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_0]))) : (arr_0 [i_1])))))));
                var_60 &= ((/* implicit */unsigned char) arr_42 [i_26] [i_26] [i_1] [i_0] [i_0]);
            }
        }
    }
    var_61 = max((((((/* implicit */int) max((((/* implicit */short) (signed char)23)), ((short)-1)))) + (1475799474))), (max((((/* implicit */int) max(((short)2698), (((/* implicit */short) (unsigned char)220))))), ((-(((/* implicit */int) (unsigned char)237)))))));
    var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)36936), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */int) var_4)) : (var_9)));
    var_63 |= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4095)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29369)))))) || (((/* implicit */_Bool) var_5)))));
    /* LoopSeq 1 */
    for (short i_29 = 0; i_29 < 18; i_29 += 2) 
    {
        arr_97 [i_29] = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (short)-13524)) : (((/* implicit */int) (short)-16456))))));
        var_64 = ((/* implicit */_Bool) var_6);
    }
}
