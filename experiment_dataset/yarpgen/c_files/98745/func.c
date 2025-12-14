/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98745
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
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_3 [i_0])))) ? (arr_3 [i_0]) : ((-(arr_3 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_18 |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [(unsigned char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [(signed char)6]))) - (((/* implicit */unsigned int) min((245760), (((/* implicit */int) arr_0 [(unsigned char)6] [i_0]))))))) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_4]))) != (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-1LL))))))));
                                var_21 = (-(((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1]))) : (0LL))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(arr_3 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_2 + 2])) : (((/* implicit */int) arr_0 [i_0] [i_2 + 2]))))) : ((~(18446744073709551615ULL)))));
                }
            } 
        } 
    }
    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5 + 3] [i_6])) ? (((/* implicit */int) arr_18 [i_5] [i_6])) : (((/* implicit */int) var_5))));
            arr_20 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3675707298349106006ULL))));
        }
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_23 [i_5] [(_Bool)1]))));
            arr_25 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 - 1])) ? (arr_21 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))) ? (((((/* implicit */int) arr_23 [i_5] [i_5])) >> (((18446744073709551615ULL) - (18446744073709551592ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)30)))))))) ? (min((((/* implicit */unsigned long long int) 0)), (arr_16 [i_5 + 1]))) : (max((((14771036775360445609ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_5] [(signed char)1] [i_7])))))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_5] [(_Bool)1] [i_5] [i_10] [i_5] [i_5]))) : (arr_27 [i_5] [i_9])))) ? (((((/* implicit */_Bool) arr_15 [i_8])) ? (-18LL) : (((/* implicit */long long int) arr_28 [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11] [i_11])))));
                            arr_37 [i_5 + 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_30 [i_5] [(unsigned short)20] [i_5 - 1])));
                            var_25 = ((((/* implicit */_Bool) arr_27 [i_8 + 2] [i_9 + 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))));
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)14828)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */short) arr_17 [i_9 + 1] [i_8 - 1] [i_5 + 1]);
                            var_28 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_5] [i_8 + 2] [i_8 + 1]))));
                        }
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (unsigned char)41);
                            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_5] [i_8] [i_9 - 2] [i_8] [i_13] [i_10])) ? (arr_16 [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_9] [i_8 - 2] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))));
                            arr_44 [i_10] [i_10] [i_9] [i_9] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((arr_34 [i_5 + 2] [i_10] [i_10]) ? (((/* implicit */int) arr_34 [i_5 + 2] [18ULL] [i_10])) : (((/* implicit */int) arr_34 [i_5 + 2] [(_Bool)1] [i_10]))));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 1) 
                        {
                            arr_47 [i_5] [i_8] [i_9] [i_10] [i_10] [i_8] = ((/* implicit */unsigned long long int) (unsigned char)24);
                            var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [(unsigned char)20] [i_10] [(short)17]))));
                        }
                        var_32 = ((/* implicit */signed char) ((arr_35 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        arr_48 [(short)10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4294967295U) : (0U)))) ? (((/* implicit */int) (unsigned short)50707)) : (((/* implicit */int) (short)0))));
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_5 + 1]))));
                    }
                } 
            } 
            var_34 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)32767)))) & (((((/* implicit */int) arr_36 [i_8] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) - (88000570)))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 23; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) (signed char)-31);
            var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_5] [21] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767)))) / (((((/* implicit */_Bool) 2962761647U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)14828))))));
        }
        var_37 = ((/* implicit */unsigned int) arr_33 [i_5] [14] [14] [i_5 + 1]);
        arr_51 [(signed char)19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_31 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]) ? (((/* implicit */int) arr_31 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2])) : (((/* implicit */int) arr_31 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2])))))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_21 [i_5 + 2])))) ? (arr_30 [4ULL] [i_5] [i_5]) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_15 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) (signed char)30)) ? (arr_15 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [10U] [i_5] [i_5]))))))))));
    }
}
