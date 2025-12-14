/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69703
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */short) var_1);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            arr_17 [(short)2] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)44531)), (arr_15 [i_0] [i_1] [i_0] [i_3 - 2] [i_1])))) ? (arr_15 [i_0] [i_1] [i_0] [(signed char)8] [i_3 + 1]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3697314403U)), (arr_8 [i_0] [i_2] [i_2]))))))) ? ((-(((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 1] [i_0] [i_4 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44531)) && (((/* implicit */_Bool) (short)-22400)))))));
                            arr_18 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */int) ((unsigned char) var_12))), ((+(((/* implicit */int) (unsigned char)89))))))));
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21004))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_5]))) / (var_5))))) : (min(((+(arr_12 [i_1] [i_1] [i_0] [i_5]))), (((/* implicit */unsigned int) arr_9 [i_0] [i_3 - 1] [i_2]))))));
                            var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)66)) ? (598110786916056412LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28796))))), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((1472756912) < ((~(((/* implicit */int) (short)32767)))))))));
                            var_18 = ((/* implicit */unsigned short) (((-(arr_13 [i_5] [i_3] [i_3] [i_3] [(_Bool)1] [(_Bool)1] [(signed char)22]))) < (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned int) max((max((((arr_20 [8ULL] [i_1] [i_2] [i_2] [i_2] [i_2]) ? (arr_1 [i_1]) : (((/* implicit */int) (unsigned short)1)))), ((~(((/* implicit */int) arr_23 [i_0] [i_1] [i_6] [i_3 - 3] [i_1])))))), (((((((/* implicit */int) arr_23 [i_0] [i_0] [6LL] [i_3] [i_1])) != (((/* implicit */int) arr_3 [i_6] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_11 [(unsigned short)20] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_3])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16706)))))))));
                            arr_25 [i_0] [i_1] [9U] [(unsigned short)6] [i_3] [i_6] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                            arr_26 [i_1] [i_2] [i_1] [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [(unsigned short)6] [i_3 - 2] [i_1]))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((arr_4 [i_0] [i_7]) + (9223372036854775807LL))) >> (((1372493069U) - (1372493026U)))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), ((unsigned char)224)))) ? (((/* implicit */int) arr_23 [i_0] [6LL] [i_2] [i_3] [i_0])) : ((+((-2147483647 - 1))))))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39977))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_22 [i_0] [(unsigned char)3] [i_2] [i_0] [i_7] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? ((-2147483647 - 1)) : (2147483647)))))) == (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_3])))))))));
                            var_22 = arr_14 [i_7] [i_0] [i_2] [i_0] [i_0];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-82)) & (((/* implicit */int) (short)32767))))));
                            var_24 -= ((/* implicit */unsigned short) arr_1 [i_1]);
                        }
                    }
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (((_Bool)0) ? (6394503469556799949LL) : (var_0)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576)))))))));
                        arr_34 [i_0] [i_1] = ((/* implicit */unsigned int) max((max((arr_22 [i_0] [i_0] [(_Bool)1] [i_0] [i_9 + 1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_11 [i_9 + 1] [i_9 + 1] [i_0] [i_9 + 1] [i_9 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)23081)) != (((/* implicit */int) (signed char)-85))))))))));
                        arr_35 [i_0] [4LL] = ((/* implicit */int) 12043613275304664568ULL);
                        arr_36 [i_0] [i_2] [i_2] [18ULL] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((arr_31 [12ULL] [13ULL] [i_9]) ? (3847351508U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_30 [i_0] [i_0] [14LL])) : (((/* implicit */int) ((arr_15 [i_9 - 3] [i_1] [i_0] [i_1] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9 + 2] [i_9 - 1] [i_0] [i_9 + 1] [i_9 + 1]))))))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_2])) <= (((/* implicit */int) var_10)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_30 [i_1] [(unsigned char)12] [i_1])))) : (((/* implicit */int) max((arr_30 [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) (_Bool)0)))))))))))));
                    }
                    arr_37 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_2]))))) ? (arr_1 [i_0]) : ((-(((/* implicit */int) arr_28 [i_2] [i_2] [i_0] [i_1] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (short)23754)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL))))));
                    arr_38 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_2] [i_1] [i_0] [i_1] [i_2] [i_2]))));
                    arr_39 [i_0] = ((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), ((-(var_13)))))));
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_1))));
}
