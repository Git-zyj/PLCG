/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84930
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
    var_10 = ((/* implicit */_Bool) var_7);
    var_11 &= ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) var_9)) << (((arr_4 [i_0]) + (3273052900046902975LL)))))) : (((/* implicit */short) ((((/* implicit */int) var_9)) << (((((arr_4 [i_0]) - (3273052900046902975LL))) - (5372996253249728002LL))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2]))) : (var_0))) : (var_0)));
                            var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [5ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_2])) : (((/* implicit */int) var_4)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_5] [i_5 - 1] [5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) var_3))));
                            arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) var_5);
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
                            var_15 = var_8;
                        }
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [7LL]))) : (var_8))) >= (((/* implicit */long long int) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_0])) ? (var_6) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) var_6)) : (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_3]))) : (arr_19 [10LL] [i_2] [10LL] [i_3] [i_7])))))))))));
                            var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_2] [(unsigned char)8] [(unsigned char)10])) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [(short)9] [i_3])))))) & (var_5)));
                            arr_23 [i_0] [i_3] [i_2] [i_1] [i_0] = var_2;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_7] [i_1] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3456416173U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))) ? (var_7) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) var_6)))))));
                        }
                        arr_25 [i_0 + 1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)))) ? (((/* implicit */int) ((_Bool) ((unsigned char) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_6))));
                    }
                    for (short i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1571700561U)) ? (8431430043454383340LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))));
                        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : ((-9223372036854775807LL - 1LL))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_2] [i_8 + 1] [i_0] = ((/* implicit */unsigned long long int) var_2);
                            arr_31 [i_8] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10LL] [i_0] [i_2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_8] [i_2])))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_16 [i_0] [i_1] [i_2])));
                            arr_32 [i_0] [i_1] [12ULL] [i_0] [i_9 - 2] [i_0] = ((arr_15 [i_0] [i_9 + 1]) ? (((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_9 + 1] [i_0] [i_0 + 1] [i_9 + 1] [i_8 - 1])) ? (var_5) : (arr_27 [i_1] [i_9 + 1] [i_0] [i_0 + 1] [i_9] [i_8 - 1]))) : (((arr_15 [i_0] [i_9 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_9 + 1]))) : (var_7))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_5 [i_1]))));
                        }
                        var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_8 - 1] [i_0 - 3])) ? (((/* implicit */long long int) var_6)) : (arr_16 [i_8] [i_8 - 1] [i_0 - 3])))) ? (arr_16 [i_8] [i_8 - 1] [i_0 - 3]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_20 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_0 - 3])))))));
                    }
                    arr_33 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -6631341872745290655LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))) >= (((var_8) / (var_8)))));
                    arr_34 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    } 
}
