/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84570
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) 4219663467U)) ? ((+(((/* implicit */int) arr_6 [i_0] [18LL] [i_0] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_3 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37968)))))))))))));
                    var_15 = var_10;
                    var_16 ^= ((/* implicit */short) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_17 += (signed char)63;
                        var_18 = ((/* implicit */unsigned short) (+(179199668)));
                        var_19 = ((/* implicit */short) (+((+(arr_2 [i_0] [i_0] [i_0])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((signed char) (short)-18846));
                        arr_18 [i_0 - 2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) (short)-16);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7466)) ? (var_10) : (((/* implicit */int) arr_7 [i_7 + 2]))))) : (arr_5 [i_0 - 2] [i_5] [i_7 - 1] [i_7]))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_5] [i_7 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)15472))))) : (((/* implicit */int) arr_16 [i_0 + 4] [i_7] [i_7] [i_7 + 3]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) 785883317)) : (-1813204077267728217LL)))));
                    }
                    for (short i_8 = 4; i_8 < 24; i_8 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_8] = ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_0 + 2]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) ((signed char) var_3))))));
                        arr_24 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)14419)) ? (arr_20 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_8 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0 + 4] [i_8 - 3])) & (((/* implicit */int) arr_21 [i_0 + 1] [i_8 - 2]))))) : (((((/* implicit */_Bool) -7117090859792552499LL)) ? (min((((/* implicit */unsigned long long int) arr_7 [i_5])), (arr_12 [i_0] [i_4] [i_5] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)93)) ? (arr_9 [i_0] [i_4] [i_5] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        for (short i_10 = 3; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_31 [i_10] [i_4] [i_10] [i_4] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (9223372036854775798LL) : (((/* implicit */long long int) arr_20 [i_4] [i_5])))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_4] [i_5] [i_9] [i_9]))))))))));
                                var_24 = ((/* implicit */unsigned int) (short)-1);
                                var_25 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) >= (min((var_13), (arr_3 [i_5] [i_10])))));
                                var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_4] [i_5] [i_9 - 2] [i_10 + 2])) ? (((/* implicit */unsigned int) arr_30 [i_0] [i_0] [i_10] [i_0])) : (var_0))) == (((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_0] [i_10])), (318094611)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (var_3))))))) == (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))), ((+(arr_29 [i_0] [i_0 - 1] [i_0] [i_5] [i_5]))))))))));
                }
            } 
        } 
        arr_32 [i_0 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0 + 4])) ? (1332917694U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 4]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0 - 2] [i_0 - 2])) % (((/* implicit */int) arr_21 [i_0 - 1] [i_0 + 2])))))));
    }
    for (long long int i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), ((-(arr_2 [i_11 + 2] [i_11 + 3] [i_11 + 2]))))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_29 += ((/* implicit */_Bool) ((unsigned char) (+(arr_20 [i_11] [i_11 + 3]))));
                        var_30 = ((/* implicit */short) var_3);
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_31 |= ((/* implicit */_Bool) (+(((var_0) >> (((arr_40 [i_11 - 2] [i_11 - 2]) - (4119950333U)))))));
                            var_32 = ((signed char) ((int) ((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [i_15])) && (((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_13] [i_14] [i_15])))));
                            var_33 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)53))));
                        }
                        var_34 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) ((long long int) (unsigned short)38569))))) ? (((/* implicit */int) ((short) (+(arr_28 [i_11] [i_13] [i_11]))))) : (98304)));
                        arr_46 [i_11] [i_11] [i_11] [i_13] [i_13] [i_11] = arr_27 [i_11] [i_12] [i_13] [i_14];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 1; i_16 < 24; i_16 += 2) 
                    {
                        arr_49 [i_11 - 1] [i_11] [i_11 - 1] [i_16] = ((((/* implicit */_Bool) ((-1LL) * (((/* implicit */long long int) -784836079))))) ? (arr_19 [i_13] [i_16] [i_16] [i_16 + 1]) : (((/* implicit */int) (signed char)119)));
                        arr_50 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_12] [i_11] [i_12] [i_16 - 1])) / (arr_30 [i_16] [i_16 - 1] [i_11] [i_16 - 1])));
                        arr_51 [i_11 - 1] [i_12] [i_12] [i_11] [i_11] [i_16 - 1] = ((/* implicit */short) 131071);
                    }
                    for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_33 [i_11]) ? (var_10) : (((/* implicit */int) var_9))))) ? (min((var_13), (((/* implicit */unsigned long long int) 2047LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_12] [i_13])) - (((/* implicit */int) (short)10374))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23468)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_11] [i_12] [i_13] [i_17])))) ? ((-(arr_17 [i_11] [i_12] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [i_11] [i_11 - 2] [i_11])))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_17])) ^ (((/* implicit */int) var_8))));
                        }
                        var_37 |= ((/* implicit */long long int) 2634573703U);
                        var_38 *= max((min((arr_54 [i_13] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11 + 1]), (((/* implicit */unsigned long long int) arr_47 [i_11] [i_13] [i_11] [i_11])))), (((/* implicit */unsigned long long int) ((short) arr_47 [i_11] [i_12] [i_11] [i_11 - 1]))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) arr_21 [i_13] [i_17]))));
                        arr_57 [i_11] [i_12] [i_11] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_6 [i_11 - 1] [i_11] [i_11] [i_11]), (arr_6 [i_11] [i_11] [i_11] [i_17]))))))) + (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_11] [i_12] [i_11] [i_17]))))), (1544489072U)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_19 = 1; i_19 < 22; i_19 += 3) 
                    {
                        arr_62 [i_11] [i_11] [i_11] [i_19 - 1] = max((((/* implicit */int) ((arr_20 [i_12] [i_12]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 288230376151707648ULL))))))))), (min((((/* implicit */int) var_1)), (1034530899))));
                        arr_63 [i_11] [i_11] [i_13] [i_19 + 3] = ((/* implicit */signed char) arr_25 [i_11] [i_11 + 2] [i_12] [i_11 + 2]);
                        /* LoopSeq 2 */
                        for (short i_20 = 3; i_20 < 22; i_20 += 4) 
                        {
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_11 + 3] [i_12] [i_12] [i_12])) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) arr_43 [i_11 + 4] [i_12] [i_12] [i_20 + 2] [i_12]))))), (arr_3 [i_19] [i_20]))))));
                            var_41 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_13])) ? (((/* implicit */int) var_9)) : (arr_38 [i_12] [i_13] [i_20])))), (var_11)))));
                            var_42 ^= 2423353809248130895LL;
                        }
                        /* vectorizable */
                        for (long long int i_21 = 1; i_21 < 24; i_21 += 3) 
                        {
                            var_43 |= ((/* implicit */unsigned long long int) arr_20 [i_13] [i_19]);
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) arr_65 [i_19] [i_19] [i_19 + 1] [i_21] [i_21 + 1] [i_21 + 1] [i_21])))))));
                            var_45 = ((/* implicit */unsigned char) arr_7 [i_11]);
                            arr_68 [i_11 + 1] [i_11] [i_11] [i_11] [i_11] [i_11] [i_21] = -38048011554708008LL;
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 1; i_22 < 23; i_22 += 3) 
                        {
                            var_46 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_53 [i_22 - 1] [i_22 + 1] [i_22] [i_22] [i_11])) ? (((/* implicit */int) arr_53 [i_22 - 1] [i_22 - 1] [i_22] [i_22 - 1] [i_11])) : (((/* implicit */int) arr_53 [i_22 - 1] [i_22 - 1] [i_22] [i_22] [i_11])))), (((((/* implicit */_Bool) arr_53 [i_22 - 1] [i_22] [i_22] [i_22 + 2] [i_11])) ? (((/* implicit */int) arr_53 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22] [i_11])) : (((/* implicit */int) arr_53 [i_22 - 1] [i_22] [i_22 + 2] [i_22] [i_11]))))));
                            arr_72 [i_11] = ((/* implicit */short) arr_19 [i_11 + 4] [i_12] [i_12] [i_19]);
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) | (((long long int) ((arr_55 [i_11] [i_12] [i_13] [i_19 - 1] [i_11] [i_11]) > (((/* implicit */long long int) var_0)))))));
                        }
                        for (signed char i_23 = 0; i_23 < 25; i_23 += 3) 
                        {
                            var_48 += ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_11])) && (((/* implicit */_Bool) var_12)))));
                            var_49 = ((/* implicit */unsigned int) ((int) max((((((/* implicit */int) (unsigned short)39997)) | (var_10))), (((/* implicit */int) (unsigned short)65526)))));
                        }
                    }
                    arr_76 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (arr_25 [i_11] [i_11 + 2] [i_11 - 1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11])))))) ? (max((((/* implicit */long long int) arr_33 [i_11])), (arr_36 [i_11] [i_11] [i_11 - 2]))) : (arr_25 [i_11] [i_11] [i_11 + 1] [i_11])));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_15 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */short) var_8)))), ((short)23494)))) || (((/* implicit */_Bool) var_3))));
    }
    var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_7)), (3575904133968262663LL))))))));
    /* LoopSeq 1 */
    for (unsigned short i_24 = 1; i_24 < 21; i_24 += 3) 
    {
        var_52 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_24 - 1])) ? ((+(arr_54 [(signed char)2] [(signed char)2] [i_24 + 1] [i_24] [i_24] [i_24]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) (signed char)45)))))));
        var_53 = (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_47 [i_24] [14U] [i_24] [i_24])), (var_11))), ((+(10455540514495398224ULL)))))));
        var_54 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_77 [i_24] [i_24])), (var_4)))))) ? (max((min((((/* implicit */unsigned long long int) -5446177218267031998LL)), (var_11))), (((/* implicit */unsigned long long int) arr_67 [i_24 - 1] [i_24] [i_24 - 1] [i_24 + 1] [i_24 + 1] [i_24 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)44038)))))))));
    }
}
