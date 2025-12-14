/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73508
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
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((911282374U), (4294967277U)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (4294967289U))))))) : (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((signed char) min((19U), (((/* implicit */unsigned int) (short)-5113))));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) + (arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_22 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (0ULL))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2 - 2]) > (arr_0 [i_2 - 3]))))) == (((((/* implicit */_Bool) ((long long int) 4294967295U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) && (((/* implicit */_Bool) 18446744073709551594ULL)))))) : (arr_7 [i_0] [i_1] [i_2] [i_2])))));
                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_2 - 3] [9ULL] [i_2])))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (arr_7 [i_0] [i_2] [i_2] [(unsigned short)8])))) ? (((unsigned int) arr_7 [i_1] [i_1] [i_0] [(short)5])) : (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_2 - 1]))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)15497))))))));
            }
            for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((long long int) ((unsigned int) (short)22798))))));
                arr_12 [i_0] = ((/* implicit */short) arr_7 [i_3] [7] [i_3 + 1] [i_3 - 1]);
                arr_13 [i_0] [(signed char)7] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) 2890289488U)))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_3 - 3])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3 - 1]))))))));
                var_25 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))))), (((((/* implicit */_Bool) var_8)) ? (arr_3 [9] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15508)) ? (var_0) : (((/* implicit */int) var_1)))))))));
            }
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) ((((unsigned long long int) var_6)) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_0])))));
                        arr_21 [i_0] [i_1] [(unsigned short)5] [i_5] [8LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [0] [i_4]))) * (arr_1 [i_0] [i_4])));
                        arr_22 [i_6] [i_1] [(unsigned short)6] [i_1] [i_1] |= ((/* implicit */unsigned long long int) arr_4 [i_4] [i_1]);
                        arr_23 [i_0] [i_0] [i_4] [i_0] [i_4] [i_6] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_26 [i_4] [i_1] [i_4] [(unsigned short)0] [i_0] |= ((/* implicit */unsigned long long int) 3235611129U);
                        arr_27 [i_0] [i_4] [7LL] [i_0] = ((((/* implicit */_Bool) arr_20 [(unsigned short)3] [i_1] [i_1] [i_0] [i_1] [i_1])) ? (arr_20 [i_0] [i_1] [i_1] [i_0] [i_5] [i_7]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0]));
                    }
                    for (signed char i_8 = 2; i_8 < 8; i_8 += 1) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_0]);
                        var_28 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-53)) - (0))) + (2147483647))) >> (((3392239763U) - (3392239754U)))));
                    }
                    arr_32 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((var_18) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0]))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360))) : (arr_20 [(signed char)6] [i_0] [i_0] [i_4] [i_4] [i_5])))));
                    arr_33 [i_0] [i_0] [(unsigned char)8] [i_4] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))) > (((/* implicit */unsigned long long int) ((unsigned int) -7500730128695704308LL)))));
                }
                arr_34 [i_0] = ((/* implicit */unsigned long long int) min((arr_19 [i_0] [8] [8] [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [(_Bool)0] [i_0] [i_0]))) : (arr_3 [(unsigned char)0] [i_1])))) && (((/* implicit */_Bool) var_0)))))));
                arr_35 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_14);
            }
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
            {
                var_30 -= ((/* implicit */short) min((max((arr_16 [i_1] [i_1] [i_9] [i_1] [i_1]), (arr_16 [i_1] [0ULL] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_16 [i_1] [(short)0] [i_1] [i_0] [(short)0]))))) > (((int) var_12)))))));
                var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_31 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0])) != (var_13))));
                var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) arr_31 [i_9] [i_1] [i_0] [9U] [i_0]))) ? (min((7849514047269525871LL), (var_9))) : (((/* implicit */long long int) arr_2 [i_0])))) == (((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_1] [i_1] [i_0])), (var_0))))));
                /* LoopNest 2 */
                for (short i_10 = 4; i_10 < 8; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_46 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 584342582)) ? (var_11) : (((/* implicit */int) (short)15508))))), (min((((/* implicit */unsigned long long int) 0U)), (arr_28 [8ULL] [6U] [i_9] [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_31 [i_10 - 4] [i_10] [i_10] [i_10 - 4] [i_10]))))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [7LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_10 [i_10 + 1] [(signed char)1] [i_10 + 1]) ? (((/* implicit */int) arr_10 [i_10 - 1] [i_10] [i_10 - 2])) : (((/* implicit */int) arr_10 [i_10 - 2] [i_10 + 2] [i_10 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_1] [i_10]))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) (signed char)-53)) ? (var_2) : (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_10 + 2] [(signed char)5] [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_29 [i_10 - 3] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 3])) : (-10))))));
                            arr_48 [i_0] [i_0] [i_1] [i_0] [(unsigned short)0] [6] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [6U] [i_0] [6U] [i_0]) - (arr_11 [i_0] [i_0] [i_9] [(unsigned char)9])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10 - 2] [i_10 - 1] [i_0] [i_0] [i_10] [i_10 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_10] [i_0] [i_0] [(signed char)1] [i_0])))))) : (min((4294967278U), (((/* implicit */unsigned int) (short)15492)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_9]);
                            arr_54 [i_9] [i_1] [i_1] [i_12] [i_12] [i_9] [i_9] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 8)) ? (arr_28 [i_9] [i_13 - 1] [i_13 - 1] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_13 - 1] [i_13 - 1] [(unsigned short)7] [i_13 - 1]))))));
                            arr_55 [(_Bool)1] [i_0] [i_1] [i_0] [1U] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15359))) / (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(var_5))))) | (((/* implicit */unsigned int) min((var_0), (arr_53 [i_0] [i_1] [i_13 - 1] [i_1]))))));
                            arr_56 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_45 [i_0] [4U] [i_9] [i_12] [(_Bool)1])) / (((unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
            arr_57 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(short)4])) * (((/* implicit */int) arr_19 [(unsigned short)7] [(unsigned short)7] [i_0] [i_1] [i_1] [i_1]))))) && (((((/* implicit */_Bool) (unsigned short)4264)) || (((/* implicit */_Bool) ((unsigned int) -8023241423469939183LL)))))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 1; i_14 < 8; i_14 += 1) 
            {
                arr_60 [i_0] [i_1] = ((/* implicit */short) ((long long int) ((((arr_7 [i_14] [i_14] [i_14] [i_14]) >> (((var_16) - (7010083745661588671LL))))) < (((/* implicit */unsigned long long int) arr_5 [i_0] [6ULL] [i_0])))));
                var_34 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 15)) ? (16553451093754882804ULL) : (((/* implicit */unsigned long long int) -19)))), (((/* implicit */unsigned long long int) 4294967294U)))) == (max((((9223372036854775808ULL) / (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) arr_30 [i_14 + 1] [i_14] [1ULL] [i_14 - 1] [i_14 + 1]))))));
            }
            var_35 += max((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */long long int) 8)) : (var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1776524040)) || (((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_52 [i_0] [i_1] [i_1] [i_0] [i_1])) : (((/* implicit */int) (short)-20701)))))))));
        }
        var_36 = ((/* implicit */unsigned short) (((~(arr_39 [i_0] [i_0] [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_39 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
    {
        arr_63 [14] = ((/* implicit */unsigned long long int) ((arr_61 [i_15]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6)) ? (((/* implicit */int) (unsigned short)27019)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (arr_62 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_15])) ? (((/* implicit */long long int) var_13)) : (arr_62 [i_15])));
    }
    for (long long int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
    {
        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) ((signed char) var_8)))))) && (((/* implicit */_Bool) arr_62 [i_16]))));
        var_39 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_10)), (max((arr_62 [i_16]), (arr_62 [i_16])))));
    }
    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
    {
        var_40 &= ((/* implicit */unsigned int) 196608);
        var_41 = min((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)8191)), (arr_67 [i_17])))) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (3426938013598174161ULL))), (((/* implicit */unsigned long long int) var_14)));
    }
}
