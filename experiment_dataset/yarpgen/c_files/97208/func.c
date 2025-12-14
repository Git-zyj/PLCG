/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97208
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_10 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) 3594408761U)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
                    {
                        var_19 ^= (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2])), (var_15))))) + (max((((/* implicit */unsigned int) arr_15 [i_2])), (var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) var_15))))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((var_2), (var_1))))));
                            arr_19 [i_0] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_0))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_3 + 2] [i_5]))));
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (4293918720U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3170835370818713715LL)) || (((/* implicit */_Bool) (signed char)13)))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_18)))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [5] [i_3 + 2] [i_2 + 1] [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (0U))))));
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (signed char i_6 = 4; i_6 < 10; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_2 + 1] [i_2]), (arr_9 [i_2 - 1] [i_2])))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) : (min((min((((/* implicit */int) arr_24 [i_6] [i_2] [i_1])), (var_5))), (((/* implicit */int) ((signed char) (_Bool)1)))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_2 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-32756)))) - (((/* implicit */int) (_Bool)1))))))))));
                            arr_26 [i_0] [(signed char)5] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) -9LL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_3 - 3] [i_6] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_6 - 1] [i_2 + 1]))) : (-660952435540513943LL))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 + 1])))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (1654751777))))) & (0ULL)));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-660952435540513954LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) 1073741824U)) : (17671618256731159269ULL))))));
                            arr_29 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = var_18;
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned long long int) arr_3 [i_1] [8LL] [8]))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) & (((/* implicit */int) var_3)))), (max((arr_27 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0]), (((/* implicit */int) (signed char)125))))))) : (arr_9 [i_1] [i_1]));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7U]))) == (arr_18 [i_0 + 1] [i_2 - 1] [i_2 - 1])))) > (((/* implicit */int) (((_Bool)1) && (((((/* implicit */_Bool) 10831846669529899800ULL)) || (((/* implicit */_Bool) 4294967295U)))))))));
                        var_30 = var_7;
                    }
                }
            } 
        } 
    } 
    var_31 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_5)) ? (514002783501094623ULL) : (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) var_7)), (var_17))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_4)) != (var_16)))), (max((((/* implicit */unsigned int) var_12)), (var_2)))))));
}
