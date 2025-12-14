/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98596
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) - (((((var_3) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + ((-(var_6)))))));
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) arr_1 [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_10);
        var_12 += ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_1 [i_0]), ((unsigned short)26309)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (2952647538811427190ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6658191915882254758LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : (15494096534898124425ULL)))) ? (((var_2) - (((/* implicit */long long int) 978273464)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [(signed char)1]))))))))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((-1737011181) + (-1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)20))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((963456114) - (((/* implicit */int) (signed char)88)))));
                    arr_12 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_4))))))))))));
        var_15 += ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1]))));
        arr_13 [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (536739840U)))) : (max(((+(-6837959907466845163LL))), (((/* implicit */long long int) ((_Bool) (short)-20375))))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) 978273464);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((int) (~(((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned short)19805)) : (((/* implicit */int) (signed char)(-127 - 1)))))))))));
        arr_19 [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (arr_16 [i_4] [i_4]) : (((/* implicit */int) arr_15 [i_4]))))), ((~(2979261650471314770LL)))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_22 [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_33 [(_Bool)1] [(unsigned short)4] [i_7] [i_8] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_5]))));
                                arr_34 [i_9] [i_7] [i_7] [i_6] [10LL] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)60)) << (((((/* implicit */int) (unsigned short)45706)) - (45688)))));
                                arr_35 [i_6] = ((/* implicit */unsigned short) (~(((long long int) arr_32 [i_5] [i_6] [i_5] [(unsigned short)0] [i_5] [i_6]))));
                                arr_36 [i_5] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    arr_39 [i_6] [i_6] [0ULL] [(signed char)15] = ((/* implicit */long long int) min(((signed char)-43), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (unsigned short)37984))) < ((+(-1))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                arr_44 [i_11] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((((/* implicit */int) ((unsigned short) var_3))) >> (((var_3) + (3684220429790541269LL)))))));
                                var_19 += ((/* implicit */unsigned char) ((((long long int) arr_31 [i_5] [i_12] [i_10] [i_11] [i_12] [i_12] [i_12])) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_21 [i_12]) + (((/* implicit */int) arr_42 [i_12] [i_11] [8U] [i_5] [i_6] [i_5])))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                    {
                        arr_49 [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5])) / (arr_32 [(unsigned short)11] [i_13] [i_6] [i_5] [5LL] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_5] [i_5] [i_13] [i_6] [i_13] [i_14]))) : (((var_6) - (3046277575766597878LL)))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_6)))), (13704433887116780911ULL))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) arr_28 [i_14] [i_6] [i_5])))))));
                        arr_50 [i_5] [i_13] = ((/* implicit */int) ((short) var_0));
                        var_20 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) arr_43 [i_5] [i_5])) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) + (3166111337U))))), (((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (unsigned short)45706))))))));
                    }
                    for (int i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                    {
                        var_21 = ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (min((-8218604727747535613LL), (arr_25 [i_5] [i_5] [i_5] [i_5]))));
                        var_22 ^= ((/* implicit */unsigned short) -3);
                        arr_53 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) / (var_3)))) ? (((max((2874846393535299680LL), (((/* implicit */long long int) arr_24 [i_5])))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45693)) + (arr_24 [1LL])))))) : (((((/* implicit */_Bool) (short)-30333)) ? (2183151128704530863LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4721572792803758077LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max(((~(var_6))), (((/* implicit */long long int) (signed char)127))))));
                        arr_57 [i_6] [13ULL] [i_13] [i_16] [i_13] [i_16] = ((/* implicit */_Bool) arr_21 [i_5]);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1061840578U)) || (((/* implicit */_Bool) max((((/* implicit */short) (signed char)103)), ((short)30331))))))))));
                        arr_60 [i_5] [i_5] [i_17] [(unsigned char)16] = ((/* implicit */long long int) (~((+(arr_43 [i_6] [i_6])))));
                        var_25 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [0LL] [0LL] [i_13] [i_13])) ? (arr_30 [i_5] [i_5] [i_5] [i_5]) : (arr_30 [i_13] [i_6] [i_17] [i_17]))) | (min((((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_5] [(unsigned short)11])), (arr_30 [2U] [i_5] [i_17] [(signed char)15])))));
                        arr_61 [i_5] [i_6] [i_13] [(unsigned short)16] [i_13] &= ((/* implicit */unsigned long long int) (~((-(max((var_6), (((/* implicit */long long int) var_4))))))));
                        arr_62 [i_17] = ((/* implicit */int) max((((unsigned long long int) arr_40 [i_17] [i_17] [i_13] [i_13] [1LL] [i_5])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : ((((-9223372036854775807LL - 1LL)) / (var_10))))))));
                    }
                    for (long long int i_18 = 0; i_18 < 17; i_18 += 1) /* same iter space */
                    {
                        arr_65 [i_18] [i_18] [i_13] [i_18] [i_5] = ((/* implicit */unsigned short) ((-8607710177339307560LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        arr_66 [i_5] [i_18] [(_Bool)1] = ((/* implicit */unsigned char) ((var_10) ^ (((((/* implicit */_Bool) (unsigned short)54674)) ? (((((/* implicit */_Bool) 3046277575766597876LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19856))) : (-3046277575766597878LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1632687698U))))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_43 [i_5] [i_6]))));
                        arr_67 [i_18] [i_18] = ((/* implicit */long long int) (short)-21255);
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 1) /* same iter space */
                    {
                        arr_70 [9] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17)) * (((/* implicit */int) (signed char)84))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_42 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5]))));
                        var_28 = ((/* implicit */int) arr_30 [i_19] [i_13] [(_Bool)1] [(_Bool)1]);
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_5] [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_6])) : (((/* implicit */int) arr_14 [i_19] [i_13])))))));
                        arr_71 [i_19] [i_6] [i_6] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                    }
                }
                for (long long int i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    arr_75 [i_6] [i_20] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_43 [i_20] [i_6])))) ? ((-(var_9))) : (((((/* implicit */_Bool) arr_64 [i_20] [i_20] [i_20])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))))))));
                    var_30 = ((/* implicit */unsigned char) ((unsigned int) var_10));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                        {
                            {
                                arr_80 [i_20] [i_21] [i_6] [i_20] = ((/* implicit */unsigned char) (unsigned short)65519);
                                var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) min(((-(var_3))), (((/* implicit */long long int) (-(arr_77 [i_5] [i_6] [i_5] [i_21]))))))) ? (var_2) : (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)247)))))))))));
                            }
                        } 
                    } 
                }
                arr_81 [i_5] [16U] [i_6] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_38 [i_5] [i_5] [i_6] [i_6])))));
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 17; i_24 += 3) 
                    {
                        {
                            arr_86 [i_5] [i_6] [i_23] [i_24] [i_23] [i_24] = ((/* implicit */unsigned int) arr_84 [13] [i_6] [i_23] [(_Bool)1]);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (arr_15 [i_24])));
                            arr_87 [i_6] [i_6] [i_23] [i_24] [i_23] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48872)))))) ? (((/* implicit */long long int) ((int) arr_21 [i_24]))) : (max((((/* implicit */long long int) var_4)), (var_10))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) arr_85 [i_5] [i_5] [14] [i_6]);
            }
        } 
    } 
    var_34 -= ((/* implicit */unsigned char) var_1);
}
