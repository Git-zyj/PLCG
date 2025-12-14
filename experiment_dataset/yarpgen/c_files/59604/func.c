/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59604
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_16)), (var_11)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_7 [11LL] [1ULL] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (min((var_11), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1] [(signed char)9] [(unsigned short)0]))))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (max((arr_4 [i_1] [i_0]), (((/* implicit */int) arr_6 [i_0] [(_Bool)1])))))))));
            var_18 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) ? (max((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [8ULL] [i_0]))), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((((var_10) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_2)))) | (max((arr_4 [i_0] [i_1]), (((/* implicit */int) arr_6 [(unsigned char)10] [i_1]))))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-102)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (signed char)127))))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [(signed char)4] [i_2 + 3])) - ((((!(((/* implicit */_Bool) 1U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_2 - 3] [i_0]))))) : ((-(arr_9 [i_0] [i_2] [i_2 + 2])))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), ((((!(((/* implicit */_Bool) var_2)))) ? (((arr_3 [i_2] [7ULL]) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-110)), (var_14))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1694345583) : (((/* implicit */int) (signed char)108))))) ? ((~(var_5))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)0)))))))))));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_12 [i_3] [i_3] [i_3] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_4 [i_2 + 2] [i_2 - 3]) : (var_6))) + (2147483647))) << ((((+(((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))) - (67)))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)114)) : (-1)))), (((((/* implicit */_Bool) 3182526767U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? ((+(((/* implicit */int) (signed char)-116)))) : (((((/* implicit */int) (signed char)5)) >> (((((/* implicit */int) (signed char)-115)) + (134)))))));
            }
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(-1LL))))));
                /* LoopSeq 4 */
                for (long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_4] [i_4 - 1] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1983204841088089168LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5901706953857245320LL)))) ? (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (unsigned char)9)) : (2013265920))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((unsigned char) (unsigned char)168))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_21 [i_6] [i_0] [i_2] |= ((/* implicit */long long int) ((signed char) (((+(((/* implicit */int) arr_19 [(unsigned char)10] [i_2] [i_4 - 1] [i_2])))) == (((/* implicit */int) var_3)))));
                        var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_11 [i_0] [i_2] [i_4] [(signed char)5]))))) - (((/* implicit */int) var_1))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (signed char)-110)))))) / (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_3 [11LL] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_2 + 3] [i_2 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 1] [i_4 - 1] [i_4])))))));
                        arr_22 [i_0] [i_2] [i_2 - 3] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) var_12);
                    }
                }
                for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) (signed char)0);
                    var_28 -= ((/* implicit */signed char) var_14);
                    var_29 = ((/* implicit */unsigned char) min((var_29), (arr_19 [i_7] [i_4] [i_2] [i_0])));
                    var_30 = ((/* implicit */int) min((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (signed char)-115))))), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_2] [(_Bool)1]))) : (var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-115)), (arr_11 [i_0] [i_2] [i_0] [i_7]))))))));
                }
                for (unsigned char i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    arr_28 [(signed char)10] [i_4] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 0U)))));
                    var_31 -= ((/* implicit */signed char) ((unsigned char) arr_19 [i_0] [i_2] [i_4] [i_8]));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [i_9] [i_4 - 1]))));
                    var_33 ^= ((/* implicit */int) var_1);
                }
                var_34 += (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_10)), (var_5))))));
                var_35 = ((/* implicit */signed char) (+(max((arr_13 [i_4]), (1694345583)))));
                var_36 = ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((arr_0 [i_2] [i_2 + 3]) ? (var_12) : (((/* implicit */int) var_9)))) : (((/* implicit */int) max((arr_31 [i_4] [i_2 + 3] [i_2 + 2] [i_2]), (((/* implicit */signed char) arr_0 [i_2] [i_2 + 3]))))));
            }
            /* vectorizable */
            for (unsigned int i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_10] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)18)))));
                var_37 = ((/* implicit */unsigned char) ((arr_18 [i_10] [i_10 - 2] [i_10 - 3] [i_10]) ? (((/* implicit */int) arr_18 [i_10] [i_10] [i_10 - 3] [i_10])) : (((/* implicit */int) arr_18 [i_10] [i_10 - 3] [i_10 - 3] [i_10]))));
            }
            for (unsigned int i_11 = 3; i_11 < 12; i_11 += 4) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                arr_39 [i_0] [i_2] [i_2] [i_0] &= ((/* implicit */signed char) var_13);
                arr_40 [3LL] [3LL] [i_11] [2U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_2 + 1] [i_0] [i_11] [i_0])) ? (((/* implicit */int) ((signed char) var_13))) : ((+(((/* implicit */int) (unsigned short)49152))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_0))));
                            var_40 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)24)), (1765184375958817963LL)))) ? (0) : (1884946263)))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) % (((/* implicit */int) ((unsigned short) var_15)))));
                            arr_47 [i_0] [i_2 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) var_10)))))) : ((~((~(((/* implicit */int) (unsigned char)0))))))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-36))))) > (((/* implicit */int) arr_26 [i_11 - 1] [i_11 + 1] [i_11] [i_12] [i_12])))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2048578452) : (var_12))))));
                        }
                    } 
                } 
            }
        }
        var_42 -= ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)32)), (arr_42 [i_0] [i_0] [(signed char)8] [(signed char)8]))), (max((1048448U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))));
    }
    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) var_5))));
}
