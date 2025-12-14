/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82498
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
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_19)) * (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))) <= (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [9ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                arr_9 [i_0] [(unsigned short)12] [6LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (9222809086901354496LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)2] [i_1]))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 2] [i_2] [i_0]))))) % (((((/* implicit */_Bool) arr_13 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_13 [i_1] [(unsigned short)7])))))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [(signed char)3] [(short)0] [i_3 - 1])), (arr_10 [i_0] [i_0] [i_2] [i_3 + 2])))) > ((-(((/* implicit */int) var_15)))))))));
                            var_23 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1)) / (var_13)))) + (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)9]))) : (18446744073709551613ULL))))), (((/* implicit */unsigned long long int) ((-1264480517) | (960998825))))));
                            var_24 = ((/* implicit */long long int) arr_2 [i_0] [9]);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                arr_20 [i_2] [i_1] [(unsigned short)9] [i_3 + 2] [i_3 + 2] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_3 + 2] [1] [i_1] [i_3 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [2LL]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0])) << (((arr_17 [(short)7] [i_1] [2U] [(unsigned short)4]) - (106892223)))))) <= (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [1ULL] [i_0]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) : (arr_3 [i_3 + 1])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [0U] [8]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((4294967293U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) % (((((/* implicit */_Bool) 2280008523U)) ? (((((/* implicit */_Bool) arr_10 [i_0] [7] [i_2] [i_3 + 2])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))))) : (arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [(signed char)4] [(unsigned char)5])))));
                                var_26 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) 4294967295U)) <= (18446744073709551615ULL))));
                            }
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (min((((/* implicit */long long int) ((0U) | (((/* implicit */unsigned int) 2147483643))))), ((~(var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_1 [(short)12])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
