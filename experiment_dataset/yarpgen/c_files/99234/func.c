/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99234
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)196))) : (14U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21129)) ? (((/* implicit */int) (unsigned short)65525)) : (var_0)))) : (1077191861U)));
                    var_19 = arr_1 [i_0 + 2];
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)65508))))) < (((((/* implicit */_Bool) min(((unsigned short)11), (((/* implicit */unsigned short) arr_7 [i_0] [(unsigned char)10]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_3]))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_9 [(short)20] [i_1] [18U] [i_1]) : (((/* implicit */long long int) 100663296))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */short) arr_8 [(unsigned short)10] [i_1] [i_3] [(short)15]);
                        var_21 = ((((/* implicit */_Bool) max((((208482256) >> (((arr_4 [i_0] [9] [i_0 - 1]) - (2180137453392321973LL))))), (((((/* implicit */_Bool) (unsigned short)15248)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [(signed char)21] [i_0 - 1] [i_0 + 3])), (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(1706209073U))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_22 |= ((/* implicit */short) 793477993U);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0])) % (((/* implicit */int) (short)-274))));
                        var_24 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [1U])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25541))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))));
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)9)) : ((-2147483647 - 1))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_5] [20LL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))));
                            var_27 = ((/* implicit */unsigned int) arr_16 [i_6] [i_5] [i_1]);
                        }
                        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_0)))));
                            arr_21 [i_0 + 2] [(signed char)12] [i_0] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) 3217775434U)) ? (arr_19 [i_7] [i_0] [i_3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [(_Bool)1]))))));
                            var_29 = ((/* implicit */_Bool) (signed char)-24);
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_24 [i_0 + 1] [i_1] [i_0] [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_13))))) ? (((((/* implicit */_Bool) arr_8 [1U] [i_1] [i_1] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned int) (signed char)25))))) : (var_3))) : (((((unsigned long long int) (_Bool)1)) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (arr_16 [(unsigned short)3] [(unsigned short)3] [i_8]))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 14U)), (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)65526))))))) ? (((/* implicit */int) arr_7 [i_0] [(short)16])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016))))))))))))));
                            var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_19 [i_8] [i_0] [i_0] [i_0] [i_0])) ? (arr_19 [i_8] [i_0] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            arr_30 [(unsigned short)22] [i_1] [(_Bool)1] [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) (unsigned short)1);
                            arr_31 [i_10] [i_0] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (+((-(var_12)))));
                        }
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((885654024653429810LL), (((/* implicit */long long int) 2810156973U)))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)5)))))))) << (((max((min((arr_18 [i_0] [i_1] [i_1] [i_1] [19]), (((/* implicit */unsigned long long int) 2666240001U)))), (((/* implicit */unsigned long long int) 7294370023512776252LL)))) - (7294370023512776233ULL)))));
                    }
                }
                for (signed char i_11 = 1; i_11 < 23; i_11 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))))) ? ((-(arr_19 [i_11 + 1] [i_0] [i_0 + 3] [i_0] [i_0 + 3]))) : (((/* implicit */unsigned long long int) (-(var_9))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_12 - 1] [i_13] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_12] [i_12 + 2] [i_13] [i_0 + 2]))) : (var_3)))));
                                arr_39 [i_0 + 2] [10] [i_11 + 1] [i_1] [i_1] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (unsigned short)48967))))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_0 + 1] [7ULL]))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_2))));
}
