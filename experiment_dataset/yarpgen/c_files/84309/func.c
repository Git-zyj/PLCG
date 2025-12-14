/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84309
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)79)) + (((((/* implicit */int) (signed char)97)) << (((/* implicit */int) (_Bool)1))))));
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3377891486U)) ? (((/* implicit */int) (short)-1209)) : (((/* implicit */int) (short)1208))))) : (max((((((/* implicit */_Bool) 3377891477U)) ? (arr_0 [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0]))))), ((+(arr_0 [6LL])))))));
    }
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_20 *= ((/* implicit */short) max((var_3), (((((/* implicit */_Bool) (short)-1207)) ? (((arr_2 [i_2]) * (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) (+(arr_6 [i_1]))))))));
            var_21 |= ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned int) (_Bool)0))));
        }
        for (int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            arr_11 [(signed char)8] |= ((/* implicit */short) arr_6 [i_1]);
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_1 [i_1] [i_3 + 2]), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-15729)))))))) - (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */int) arr_5 [i_1] [(unsigned char)6])) : ((-(((/* implicit */int) arr_4 [(short)0]))))))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            var_23 *= ((((/* implicit */_Bool) min((1048576LL), (((/* implicit */long long int) arr_3 [i_1 + 4]))))) && (((((((/* implicit */_Bool) arr_6 [5U])) ? (((/* implicit */int) (unsigned short)61250)) : (((/* implicit */int) arr_12 [i_1])))) > (((/* implicit */int) (short)12)))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)4])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15728)))))) : (arr_2 [i_4 + 1]))))))));
            var_25 += ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)68)));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_1))));
            var_27 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_1] [4U] [i_4])) & (((/* implicit */int) arr_7 [i_1 - 1] [i_1])))) / ((-(((/* implicit */int) (signed char)-29))))))) >= (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (arr_10 [i_1] [i_4] [i_4 - 2]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4])))))))));
        }
        var_28 += ((/* implicit */long long int) (signed char)127);
    }
    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_29 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)1206), ((short)15728)))) ? (8422782012044588890ULL) : (((/* implicit */unsigned long long int) 917075819U))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10023962061664962725ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_15 [(_Bool)1] [i_5 - 1])) : (((/* implicit */int) arr_5 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) arr_2 [i_5 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 2]))) : (var_15))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_30 *= arr_3 [i_6];
            var_31 = ((/* implicit */int) max((var_31), ((-((~(((/* implicit */int) min((var_2), ((short)15729))))))))));
            var_32 = ((/* implicit */long long int) (short)-13165);
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_3 [i_5]))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 4; i_8 < 14; i_8 += 4) 
            {
                var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) + (min((-1LL), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15703)))));
                var_35 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49832)) != (((/* implicit */int) (_Bool)1))));
            }
            arr_28 [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_25 [0U] [i_7 + 1] [i_7]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((917075819U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? ((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) (signed char)63)) - (63)))))) : ((-(var_3))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_23 [i_7 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) 2660875914U)) ? (3932200466319928249LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_23 [i_7 - 1]))))))));
                var_37 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1105)) ? (-3362185598796727696LL) : (((/* implicit */long long int) 2374995544U)))))));
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) -3932200466319928250LL)) ? (var_3) : (var_15))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_39 = ((/* implicit */unsigned int) max((var_39), (((((((((/* implicit */unsigned int) ((/* implicit */int) (short)9782))) & (260046848U))) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_10] [i_5] [i_5]))))))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_13))))) : (((((/* implicit */_Bool) 1634091377U)) ? (((/* implicit */int) (short)15707)) : (((/* implicit */int) (unsigned char)2)))))) - (41811)))))));
                arr_35 [i_10] [i_5 - 2] [i_5 - 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (2617637187U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10736)))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    var_40 *= ((/* implicit */unsigned int) ((((3916796913U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-10433))))) ? ((~(min((arr_10 [i_5 + 1] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_5 - 2])))))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (var_4) : (((/* implicit */unsigned long long int) arr_3 [i_5 + 1]))))));
                    var_41 |= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (max((((((/* implicit */_Bool) arr_9 [i_5] [i_10] [(unsigned short)10])) ? (1938954925) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) 2660875934U)) ? (2147483621) : (((/* implicit */int) (short)-18011))))))));
                    var_42 |= ((/* implicit */short) (-(-316932292)));
                    var_43 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_10] [i_5] [i_5]) / (((/* implicit */unsigned long long int) arr_29 [i_5] [i_10])))))))) : (((/* implicit */int) (_Bool)1))));
                }
                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_37 [i_5] [i_5] [i_5 + 3] [i_5 - 1]), (((/* implicit */unsigned int) min((arr_24 [i_5] [i_7] [8ULL]), (arr_21 [i_5] [i_7 - 2]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3315664520U))))), (max((((/* implicit */unsigned char) arr_31 [i_5] [i_10])), ((unsigned char)236)))))) : (((/* implicit */int) ((7014612914530411828LL) < (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_10))))))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
                {
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)0)), ((short)32756)))), ((unsigned short)16396)))))))));
                    arr_42 [0U] [(signed char)2] [i_7 - 2] [(unsigned char)9] [(unsigned char)9] [12ULL] |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_5] [i_12])) * ((-(((/* implicit */int) (signed char)80))))));
                }
            }
            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (unsigned short)53815)) : (((/* implicit */int) (signed char)61)))))));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_47 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_36 [i_13] [i_13] [10ULL] [i_5 - 3])), ((-(((/* implicit */int) arr_41 [i_5] [10U]))))))) || (((/* implicit */_Bool) min((var_4), (arr_10 [i_13] [i_5] [i_5]))))));
            var_48 ^= (signed char)112;
        }
        var_49 += ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_38 [i_5] [i_5 + 2])), (((((/* implicit */int) arr_24 [i_5] [i_5] [i_5])) ^ (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (unsigned int i_15 = 2; i_15 < 12; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    {
                        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_5 + 1] [i_15 + 3])) ? (((/* implicit */int) max(((unsigned short)2778), (((/* implicit */unsigned short) (signed char)112))))) : (((/* implicit */int) arr_24 [i_5] [(signed char)3] [i_5]))))) ? ((+(arr_2 [i_5 + 1]))) : (min((((/* implicit */unsigned long long int) ((arr_29 [i_14] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-72)))))), (min((5368764552786877981ULL), (((/* implicit */unsigned long long int) var_6))))))))));
                        var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) 13ULL)) || (((/* implicit */_Bool) (unsigned short)62758))));
                        /* LoopSeq 2 */
                        for (long long int i_17 = 2; i_17 < 14; i_17 += 1) 
                        {
                            var_52 *= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) << (((arr_40 [i_17] [i_16] [i_14] [i_14]) - (8373033893461627574ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-513))))) : (min((((/* implicit */unsigned int) (unsigned char)23)), (var_8)))))) == (min((((/* implicit */long long int) (signed char)105)), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14]))) ^ (7014612914530411838LL)))))));
                            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((max((((arr_33 [i_5] [i_16] [i_16]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_24 [i_5 - 2] [(unsigned short)8] [i_16])) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_43 [(_Bool)1] [(_Bool)1])))))) >> (((((((/* implicit */int) arr_32 [i_15] [i_15 + 2] [i_15])) << (((((/* implicit */int) arr_32 [(signed char)2] [i_15 + 1] [i_15])) - (8))))) - (1107296254))))))));
                            var_54 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17] [i_5]))) > (3450738540U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_5 - 2] [i_5 - 3] [i_5 + 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_5 - 1] [10ULL]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31682)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (11581768428830372754ULL)))))));
                            var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4088826719903752046LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (4294967288U))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            var_56 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_14] [i_16])) != (((/* implicit */int) arr_24 [i_5 + 2] [i_5] [i_5]))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41))) < (var_15))))));
                            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60907))) & (2423409732U))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) 7014612914530411828LL)) ? (7447554677346762224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
