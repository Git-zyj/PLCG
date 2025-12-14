/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7961
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
    var_14 = ((/* implicit */unsigned short) min((((unsigned int) ((16777215U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40212)))))), (((/* implicit */unsigned int) (unsigned short)40222))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) (unsigned short)25324);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_16 ^= arr_7 [i_0 - 1] [0] [i_2 + 1] [i_0];
                            var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4841149687679396413LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8292)))));
                            var_18 = arr_2 [i_0] [i_0] [i_0];
                            var_19 = ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_20 += ((/* implicit */unsigned int) var_13);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */unsigned long long int) var_7)), (arr_13 [i_0 - 1] [i_0 - 1] [0ULL] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : (var_1)))), (var_8)))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) (unsigned char)255);
                        arr_17 [i_0] [i_0 - 1] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_21 [5LL] [i_1] [10U] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_13 [i_7] [i_7] [(signed char)3] [i_1] [i_1] [14] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40199))) | (((((/* implicit */_Bool) (unsigned short)32767)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 0U)))))) : (((long long int) var_0))));
                        arr_22 [i_0 - 1] [(signed char)3] [i_2] [(unsigned short)14] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_1] [i_2] [2LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57248))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) : (4294967295U)));
                            var_24 = ((/* implicit */signed char) -609747576);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(2147483646)))) : (var_11)));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */long long int) var_10)) <= (var_4)))) : (((/* implicit */int) var_6)))))));
                            var_27 *= ((/* implicit */signed char) ((arr_23 [i_0] [(signed char)7] [i_0 - 1] [i_2 - 1] [i_9]) >> (((arr_23 [i_0 - 1] [i_1] [i_0 - 1] [i_2 + 1] [i_9]) - (1849761371624915492LL)))));
                            arr_28 [i_7] [i_1] [i_2] [i_7] [i_9] = ((/* implicit */_Bool) var_1);
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            arr_32 [6] [i_1] [i_10] [i_2 - 1] [(unsigned short)8] [i_7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8277))) * (arr_19 [i_0] [(short)0] [(_Bool)1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32767)))))));
                            var_28 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [(unsigned char)6] [8U] [i_2] [i_7] [i_10]))));
                            var_29 = ((((/* implicit */_Bool) (unsigned short)26)) ? (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1]) : (((/* implicit */long long int) 3259514676U)));
                        }
                        var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)25323)) : (((/* implicit */int) arr_29 [i_0] [10U] [i_0] [i_0] [4LL] [9LL] [i_0 - 1])))), (((/* implicit */int) (unsigned short)9064)))) : (((/* implicit */int) (unsigned short)8297))));
                    }
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) max(((-(((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [i_11] [i_11])))))))), (((/* implicit */int) ((unsigned short) (short)30409)))));
                        var_32 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_9)))) ? (((((/* implicit */_Bool) arr_24 [i_0 - 1] [8LL] [i_1] [i_2] [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1)))), (-1303418780)));
                    }
                    arr_35 [(short)6] |= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((unsigned int) (unsigned short)40225))) / (var_9))), (((/* implicit */long long int) (short)-16384))));
                }
            } 
        } 
    } 
    var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_34 += ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_6)), (min((var_11), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
