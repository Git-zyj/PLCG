/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65495
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
    var_19 += max(((((!(((/* implicit */_Bool) 262143LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_11))))) : (max((var_6), (((/* implicit */unsigned long long int) 268435456)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11)))) : ((-(var_1)))))));
    var_20 &= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) (unsigned short)11736)), (((var_4) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) var_2)))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_3 + 1] [i_1 + 1])) ? ((-(268435432))) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_2 [i_2 + 1])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_2 - 4] [i_3 + 1] [i_1 - 1])) : (var_9)));
                            var_23 *= arr_2 [i_1 - 1];
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_5] [i_0] [i_2 + 1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_10);
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)4] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 2] [i_1 - 2] [i_5])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0]))))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(arr_8 [i_3] [i_2 - 4] [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [i_6 + 1]))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12349)) ? (arr_1 [i_0] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47938)))))))))));
                            var_26 = ((/* implicit */unsigned short) arr_18 [i_0] [i_3] [i_2 + 1] [i_2 + 1]);
                        }
                    }
                    for (unsigned int i_7 = 1; i_7 < 7; i_7 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_7] = arr_5 [9] [i_1 - 2];
                        var_27 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) -4482132506032798948LL)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) % (var_6))))), (((/* implicit */unsigned long long int) (-(arr_7 [i_2] [(signed char)7] [(unsigned short)4] [i_2]))))));
                    }
                    var_28 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 2] [i_1 - 2] [i_2 - 3])) ? (((/* implicit */unsigned long long int) var_18)) : (arr_18 [i_1 + 2] [i_1] [i_1 - 2] [i_2 - 3]))), (((/* implicit */unsigned long long int) 8388608U))));
                    arr_24 [i_0] [i_1] [i_2 - 3] |= ((/* implicit */_Bool) arr_19 [i_2 - 3] [6ULL] [i_2 - 1] [i_2] [2]);
                    var_29 = ((/* implicit */signed char) min((((/* implicit */int) max((var_5), (arr_15 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 1] [9LL] [i_2])))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) & (var_7)))) ? (var_6) : (((/* implicit */unsigned long long int) min((1626507263U), (((/* implicit */unsigned int) 268435475)))))))) ? (((long long int) (unsigned char)185)) : (((/* implicit */long long int) ((int) 268435456))))))));
    }
    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_25 [i_8] [i_8])), (var_1)))) == (((min((var_3), (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) var_0))))));
        arr_28 [0ULL] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 268435456)) * (((2097151ULL) / (((/* implicit */unsigned long long int) 3606040858U))))))) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_25 [i_8] [8U])), (-268435476)))) : (((unsigned long long int) arr_27 [i_8])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned int) arr_27 [i_8])) : (((((/* implicit */unsigned int) arr_27 [i_8])) ^ (arr_26 [i_8]))))))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((!(arr_25 [i_8] [i_8]))) ? (min((arr_26 [i_8]), (((/* implicit */unsigned int) arr_25 [i_8] [i_8])))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (var_9) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)65535)))))))))))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535)))))));
    }
}
