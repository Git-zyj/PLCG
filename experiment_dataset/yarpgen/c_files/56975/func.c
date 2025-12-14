/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56975
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_16 = ((/* implicit */unsigned int) (((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_9))))) == ((~(((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_17 |= ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] [0U] [0U] = ((/* implicit */long long int) arr_0 [i_1]);
                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 7; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_2 - 2] [i_2] [i_2])) : (((arr_1 [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)35137)) : (((/* implicit */int) (unsigned short)35153))))) ? ((+(arr_2 [i_2]))) : (((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 2])) : (((/* implicit */int) var_3))))))) : (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [(unsigned char)7])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) var_4)))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_1] [i_3] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))));
                        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0 - 1] [1ULL] [1ULL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [(unsigned char)8] [i_0])) + (((/* implicit */int) arr_7 [i_0 - 2] [i_2 + 4] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_2 + 3] [i_1 - 1])) ? (var_12) : (var_12)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_17 [(unsigned short)1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_4] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 4] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 3] [i_3])))) <= (((/* implicit */int) arr_0 [i_0]))));
                            var_21 = ((/* implicit */short) (unsigned char)48);
                        }
                    }
                    arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_16 [i_0 + 1] [i_2 + 4] [i_2])) - (14702)))))) ? (-9223372036854775791LL) : (((/* implicit */long long int) (+(11U))))));
                }
                for (signed char i_5 = 4; i_5 < 8; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_5 - 4] [i_0])) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))))))) == ((-(((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_11 [i_1] [(short)6] [i_1] [i_1] [i_1 - 2])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
                }
                /* vectorizable */
                for (signed char i_6 = 4; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1] [i_6]))));
                    var_24 = ((/* implicit */short) var_2);
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_6]))))));
                }
                for (short i_7 = 3; i_7 < 7; i_7 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 + 1]), (((/* implicit */short) var_14))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_25 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7])) || (((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)9] [i_7 - 2] [i_7] [i_7 - 2])))))));
                        arr_31 [i_0] [i_1 - 2] [i_7] [i_7] [i_1] = var_7;
                        var_28 = ((/* implicit */short) var_6);
                    }
                }
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (-(((max((((/* implicit */unsigned long long int) var_9)), (arr_19 [i_0] [i_0] [i_9] [i_10]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [3] [i_9] [i_10])))))));
                            var_30 = ((/* implicit */short) max((var_30), (var_1)));
                            arr_37 [i_0] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_10])) ? (((/* implicit */int) (short)-9938)) : (((/* implicit */int) (unsigned char)208))))) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (unsigned short)35137))))) ? (((((/* implicit */_Bool) arr_28 [i_0 - 2] [i_0 - 1] [i_9 - 1] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30138)))) : (((/* implicit */int) (unsigned short)35397))));
                            /* LoopSeq 4 */
                            for (unsigned short i_11 = 3; i_11 < 10; i_11 += 2) 
                            {
                                var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_29 [(short)0] [i_11] [i_9 - 1] [i_1 - 1] [i_1 + 1] [8LL])) ? (-5020768982201151997LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35164))))) > (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [i_9 - 1])))))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)14583), (((/* implicit */short) arr_39 [i_0] [i_11 - 3] [i_11 + 1]))))))))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6443)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35194))) : (((unsigned int) -4480034787990416458LL))));
                            }
                            /* vectorizable */
                            for (long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                            {
                                arr_45 [i_0] [i_0] [i_9] [i_9] [i_0] [i_12 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 + 1] [i_1 + 1])) ? (arr_27 [i_0]) : (((/* implicit */int) ((((/* implicit */int) arr_42 [i_12] [i_10] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_36 [i_1] [i_1] [i_9] [i_1])))))));
                                var_34 += ((/* implicit */long long int) (unsigned short)30359);
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-14575)) * (((/* implicit */int) (_Bool)1))));
                            }
                            for (unsigned short i_13 = 1; i_13 < 8; i_13 += 3) 
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-73))))) ? ((((!(((/* implicit */_Bool) (short)-31354)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_8 [i_1 - 2] [i_1 + 1] [i_9 - 1] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (arr_9 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35164))))))));
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_40 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_9 - 1] [i_10] [i_13])), (var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_13] [(signed char)9] [i_9] [i_0] [i_0])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0 - 2] [i_1] [i_0 - 2] [i_10])))))) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) (unsigned short)35142)) : (((/* implicit */int) (short)-32760))))))))))));
                                var_38 = ((/* implicit */unsigned short) var_14);
                                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_28 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) & (arr_28 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)38)) ? (3464346516U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56525)))))) : ((~(arr_28 [i_0 - 2] [i_0 - 2] [i_9] [i_13])))));
                            }
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                arr_52 [i_0] [i_0] [i_9] [i_14] [i_10] [3ULL] = ((/* implicit */short) (unsigned short)35358);
                                var_40 += ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) (short)3765)))) >> (((/* implicit */int) min((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 10; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        {
                            arr_59 [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21690)) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (unsigned short)30369))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)14583))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_1 - 2] [i_1 - 1] [i_15 + 1] [(unsigned short)9] [i_0]))) : (arr_44 [(unsigned char)8] [i_1 - 1] [i_15 + 1] [i_16 + 1] [i_16 + 1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_48 [i_0 - 1] [i_0] [i_15 - 2] [i_16] [i_0 - 1])))), ((-(((/* implicit */int) (signed char)117))))))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned long long int) -7932968659726765769LL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_34 [i_0] [i_0] [i_16]), (((/* implicit */unsigned short) arr_39 [i_0] [i_15 - 1] [i_15 - 3]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_34 [i_0] [i_15] [i_16])), (arr_50 [i_0] [i_1] [i_1 + 1] [i_15] [i_15] [i_16 + 1] [i_16]))))))) : (((/* implicit */int) (unsigned char)232))));
                        }
                    } 
                } 
            }
        } 
    } 
}
