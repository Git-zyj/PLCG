/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69059
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
    var_11 = ((/* implicit */signed char) min((min((621644660U), (3770301857U))), (min((max((var_6), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [(unsigned short)13] = var_6;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_4] [i_0]))));
                                arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [(short)9] [i_4] |= ((/* implicit */int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_13 &= ((/* implicit */int) arr_0 [i_1 + 1]);
                        var_14 *= ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_0]);
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        arr_21 [i_6] [(unsigned short)10] = ((/* implicit */long long int) var_1);
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_0]));
                        arr_23 [i_0] [i_0] [i_0] [3] [i_6] [(short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_18 [i_2])) ? (arr_8 [i_0] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [16LL]))))) : (var_10)));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_2] [i_2] [i_7] [(short)10] [i_2] [i_1] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 587458541U)) == (min((arr_1 [i_6]), (((/* implicit */unsigned long long int) (signed char)107)))))))));
                            var_16 = (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((arr_8 [i_6] [i_6] [i_2]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_6] [i_7] [i_1])) : (((/* implicit */int) var_1)))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [18LL])) && (((/* implicit */_Bool) 669786971))))), (-1732454682))));
                            arr_27 [i_0] [(signed char)19] [(signed char)19] [(signed char)19] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((var_3), (((/* implicit */unsigned int) -669786971)))))) ? (((((/* implicit */_Bool) var_2)) ? (max((var_6), (var_3))) : (max((((/* implicit */unsigned int) (unsigned char)70)), (arr_9 [i_0] [(unsigned char)10] [15U] [5] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)16] [i_1] [i_2] [11U])))));
                            arr_28 [i_0] [8LL] [8LL] [i_0] [i_0] [2U] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1732454681)) ? (((/* implicit */int) arr_24 [i_7] [9U] [i_6] [i_2] [9U] [9U])) : (((/* implicit */int) (unsigned short)48190))))) ? (max((-4577254261604550213LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6] [i_1] [i_1 + 1]))))), (((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (arr_17 [i_0] [i_1] [i_0] [11LL] [11LL]))))));
                            var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (min((var_6), (var_10))))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) max(((+(min((((/* implicit */long long int) var_2)), (arr_29 [10LL] [i_0] [(short)11] [i_2] [14] [i_0] [(short)13]))))), (((/* implicit */long long int) ((unsigned char) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (4294967295U)));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_1] [i_0] [i_6] [9ULL] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (signed char)4))), (0U)))) ? (((unsigned int) (short)7723)) : (var_10)));
                            var_20 = ((/* implicit */unsigned int) max((var_20), ((+((~(min((var_5), (var_0)))))))));
                            arr_35 [8ULL] [i_1] [4LL] [i_6] [i_9] &= ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) * (((unsigned int) (-(-9005865189888876996LL))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_4)), (arr_8 [i_1] [i_1 + 1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(4577254261604550213LL)))) < (min((var_9), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_22 = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_4 [i_2] [9U] [14LL])) : (((/* implicit */int) var_1))))) : (var_6)))), (((long long int) arr_15 [14U] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_2] [i_10] [i_11]))) : (var_3))), (((/* implicit */unsigned int) arr_38 [16] [16] [i_2] [i_10]))));
                            arr_41 [i_10] [i_2] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11627))) == (((min((9223372036854775807LL), (((/* implicit */long long int) (short)32767)))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [12U] [(unsigned char)13] [i_1] [i_2] [i_10] [i_11])))))))));
                            arr_42 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) max(((~((((-9223372036854775807LL - 1LL)) & (-4577254261604550213LL))))), (((/* implicit */long long int) arr_40 [i_0] [i_1] [18] [i_1] [9] [i_11]))));
                        }
                        arr_43 [i_0] [i_0] [(signed char)17] [i_2] [i_10] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [6ULL]))));
                        arr_44 [i_0] &= ((/* implicit */signed char) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)10))))))));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    arr_47 [i_1 - 2] = max((((/* implicit */long long int) max((((/* implicit */int) arr_15 [14ULL] [i_1 - 1])), (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_12])) : (((/* implicit */int) (short)3863))))))), (8773856760454456535LL));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (((((/* implicit */_Bool) 9005865189888876995LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [(short)19] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) : (var_0)))) ? (min((((/* implicit */unsigned int) (short)7723)), (arr_46 [i_12] [i_1 - 2] [13U]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-188380451) == (((/* implicit */int) var_4)))))))) : (arr_3 [i_0] [i_0] [i_12])))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) (+(arr_45 [i_1 - 1] [i_1 - 2] [i_1 - 1])))))))));
                }
                var_26 |= ((/* implicit */unsigned short) ((((((long long int) (-2147483647 - 1))) / (((/* implicit */long long int) 621644672U)))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [0U]), (arr_4 [i_0] [i_0] [i_1 - 1])))))));
            }
        } 
    } 
}
