/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56632
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) (~(var_7)));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_1 [(short)16]) : (((/* implicit */int) (short)15))))) ? (((int) var_4)) : ((+(((/* implicit */int) arr_3 [i_0]))))))) ? (max((((/* implicit */unsigned int) var_18)), (arr_2 [i_1 - 1] [i_1 - 4]))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (unsigned short)38481)) : (((/* implicit */int) var_3)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551600ULL))))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_12))))));
                        arr_11 [i_0] [i_1 - 4] [i_2 + 3] [(short)11] [i_3 + 4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (-1930645952)))) ? ((+(((/* implicit */int) (short)-20241)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_5 [7U] [3LL])) : (1930645951)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_10))))));
                        arr_12 [(short)4] [15LL] [i_2 - 2] [15] [(unsigned short)14] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_1 - 4] [i_2 + 3])) ? (((/* implicit */int) (short)-20259)) : (((((/* implicit */int) (short)3584)) / (((/* implicit */int) (short)15))))))));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (33554432U))))));
                    }
                    for (int i_4 = 4; i_4 < 16; i_4 += 3) 
                    {
                        arr_16 [(unsigned short)2] [(short)5] [i_2 - 1] [(unsigned short)7] [(short)10] [i_0] = ((/* implicit */int) max((max((((((/* implicit */_Bool) 4261412864U)) ? (((/* implicit */unsigned long long int) arr_1 [i_2 + 2])) : (2566026917498872276ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15880717156210679307ULL)) ? (((/* implicit */int) (short)25)) : (((/* implicit */int) (signed char)-108))))))), (min((arr_6 [i_2 + 3] [i_4 - 2] [i_1 + 1] [i_4 - 1]), (arr_6 [i_2 - 1] [i_4 + 1] [i_1 - 2] [i_2 - 2])))));
                        arr_17 [i_0] [i_1 - 4] [i_2 + 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((-(33554449U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1])))))), (var_14)));
                        var_24 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_4 - 1])))))) / (min((((/* implicit */long long int) (short)-25)), (var_11))))))));
                        var_25 = (~(((/* implicit */int) ((arr_7 [i_4 - 1] [i_1 - 2]) >= (((/* implicit */int) arr_9 [i_4 - 1] [i_1 + 1] [i_2 + 3]))))));
                        arr_18 [i_0] [(short)3] = ((/* implicit */int) ((((arr_9 [i_4 - 2] [i_2 - 1] [i_1 - 4]) && (arr_9 [i_0] [i_2 + 2] [(unsigned short)6]))) ? (min((1125007316U), (((/* implicit */unsigned int) (short)9829)))) : (max((4261412867U), (((/* implicit */unsigned int) arr_9 [(unsigned short)7] [14ULL] [(short)6]))))));
                    }
                    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) 
                    {
                        arr_21 [i_1 - 3] [i_5] [i_1 + 1] [(unsigned short)2] [i_1 - 2] [i_1 - 4] = ((/* implicit */long long int) ((2566026917498872276ULL) >= (((/* implicit */unsigned long long int) 33554431U))));
                        var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_2 + 1] [i_2 + 2] [i_2 + 3])), (33554447U))))));
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [(short)15] [(_Bool)1] [i_1 - 2] [i_2 - 1]) & (arr_6 [(short)16] [i_1 + 1] [i_1 - 2] [(short)1])))) ? (((/* implicit */int) max(((unsigned short)59107), (((/* implicit */unsigned short) (short)32767))))) : ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_15 [i_2 - 2] [(short)15] [i_1 - 3] [14U]))))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_6] [i_1 - 1] [i_0] [i_0] = ((/* implicit */int) var_11);
                    arr_25 [(short)16] [2ULL] [i_1 - 3] [(unsigned short)12] = ((/* implicit */long long int) ((unsigned int) var_12));
                }
                var_28 = ((/* implicit */int) 1125007316U);
                var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) (short)0))))) ? (((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 + 1] [i_1 - 4])) ? (max((((/* implicit */unsigned int) (short)-1)), (985722914U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) >= (var_15))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)168))) / (985722914U)))));
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_0);
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_7))));
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (781207080543772284ULL))))));
}
