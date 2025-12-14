/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89631
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
    for (int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(8388576U)))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_6)) : (144115188075855808ULL)))));
                arr_4 [i_0] [i_0] [(unsigned char)6] = ((/* implicit */short) 18302628885633695807ULL);
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 3])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((~(arr_7 [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = ((int) min((((/* implicit */unsigned long long int) (-(var_3)))), (18302628885633695807ULL)));
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50765))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))) : (((((var_9) + (((/* implicit */int) arr_0 [i_4 + 2] [i_2])))) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3]))))));
                            var_13 *= arr_7 [i_2 - 3] [i_1 + 1];
                            var_14 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 144115188075855814ULL)) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_1 - 2] [i_2 - 1] [i_4 + 2])) : (var_7))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) != (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 2] [i_4])), (var_4))))))));
                            var_15 *= ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1596265930))));
                            var_17 = ((/* implicit */unsigned long long int) (~((-(4294967295U)))));
                        }
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 18302628885633695804ULL))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_0] = ((/* implicit */short) var_7);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18302628885633695807ULL)) || (((/* implicit */_Bool) var_7))));
                        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_1 - 3]);
                        arr_20 [i_0] [i_1] [i_6] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (short)26563);
                        arr_21 [i_1] [i_1] = ((/* implicit */short) (~(arr_2 [(unsigned char)20] [i_0] [i_1 - 1])));
                    }
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_0 - 2] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_10 [i_0 - 2])))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) ((1484689513849229133LL) == (((/* implicit */long long int) 1277693232))))), (arr_1 [i_2]))))));
                }
                for (int i_7 = 3; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (long long int i_9 = 3; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) min((321227152), (var_3))))), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (144115188075855813ULL))), (((/* implicit */unsigned long long int) var_8))))));
                                arr_30 [i_7 - 2] [i_7 - 2] [14ULL] [i_8] [i_7] = ((/* implicit */int) min(((~(var_4))), (((/* implicit */unsigned long long int) ((((var_6) <= (((/* implicit */long long int) var_3)))) ? ((+(((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) (unsigned short)1386)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((var_2) + (-321227167)));
                        arr_35 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_7)))));
                        arr_36 [i_10] [i_0 - 4] [i_0 - 4] [i_0 - 4] = ((/* implicit */unsigned int) var_9);
                        var_24 = ((unsigned short) arr_18 [i_0] [i_0] [i_0] [i_1 + 2] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_40 [i_0] [i_1 + 2] [i_7] [i_7 - 3] [i_7])))));
                        var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -1277693232)), (min((var_4), (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_10);
    var_28 = ((/* implicit */long long int) ((int) var_5));
}
