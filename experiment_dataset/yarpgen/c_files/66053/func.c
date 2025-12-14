/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66053
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))));
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(var_7))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) ((short) arr_6 [i_1]))) ? ((((_Bool)1) ? (arr_11 [i_1] [i_2]) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((arr_10 [i_3] [i_2] [i_1] [i_1]), (((/* implicit */int) var_4)))))))));
                    var_16 = ((((/* implicit */_Bool) arr_11 [6LL] [i_1])) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [1LL] [i_3])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_0 [(unsigned char)19] [10LL])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))) : ((+(((18446744073709551615ULL) << (((72057593769492480ULL) - (72057593769492423ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_6 [1]), ((short)-9823)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))) * (10654669794749436565ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [11])))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)59045)) : (((/* implicit */int) arr_1 [i_1])))) - (59019)))))))))));
                                arr_21 [1LL] [(signed char)4] [(signed char)4] [(signed char)4] [i_5] [(signed char)4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 1728362043U)) : (-1643125748319431410LL)));
                            }
                        } 
                    } 
                    arr_22 [9LL] [i_2] [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_1] [i_2] [i_3] [(unsigned char)1] [(short)2]), (var_3))))) == (((1697007199U) >> (((-8915091408368425200LL) + (8915091408368425221LL)))))))), ((+(18446744073709551615ULL)))));
                }
            } 
        } 
        arr_23 [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [(signed char)8])), (arr_7 [i_1] [i_1])))) ? ((-(((/* implicit */int) arr_13 [i_1])))) : (((/* implicit */int) arr_15 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_12) : (arr_14 [0LL] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17592186044415LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_19 [i_1] [i_1] [i_1] [(short)9] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))) : (((/* implicit */unsigned long long int) ((int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_18 -= ((((((-8915091408368425200LL) + (9223372036854775807LL))) >> (((8121367203725052640ULL) - (8121367203725052623ULL))))) << (((/* implicit */int) (short)0)));
            arr_27 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (arr_20 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_6])))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_30 [2] [2] |= ((/* implicit */unsigned short) var_7);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (short)32767))) + (2147483647))) >> (((-7449402004284776549LL) + (7449402004284776574LL)))))) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (arr_25 [i_1] [i_7]) : (arr_25 [i_1] [i_1]))) : (min((((((/* implicit */int) arr_26 [i_1] [1LL] [i_7])) << (((arr_14 [i_1] [i_7] [9U] [i_1]) - (293390543))))), (((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_4))))))));
        }
        arr_31 [3ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [0] [i_1] [i_1])), (arr_19 [i_1] [5ULL] [i_1] [3ULL] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) : ((-(18446744073709551615ULL)))))));
    }
    var_20 = ((/* implicit */unsigned char) var_8);
}
