/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62214
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
    var_15 = ((/* implicit */signed char) max((var_7), (var_5)));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (short)-7463);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)8383))))))));
                                var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 2147483647))))), (239431670U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 3] [i_5])) == (arr_7 [i_1]))))) - (9223372036854775807LL)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) min((((((/* implicit */_Bool) ((511378402665718881LL) / (((/* implicit */long long int) ((/* implicit */int) (short)7461)))))) ? (((/* implicit */int) (short)23628)) : (((/* implicit */int) var_4)))), ((+(((((/* implicit */int) (unsigned short)42225)) / (((/* implicit */int) var_10))))))));
                        var_20 = ((/* implicit */long long int) var_0);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        var_21 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)23310))));
                        arr_19 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6]))))) >= (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)34561))))));
                        var_22 = ((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0]);
                        var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-26148)) : (((/* implicit */int) arr_13 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0])))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)4135)) ? (arr_18 [i_0 - 4] [i_1] [i_2] [i_6]) : (((/* implicit */long long int) 329198147))));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) var_5);
                        var_26 = ((/* implicit */int) ((signed char) ((unsigned char) (+(((/* implicit */int) (unsigned char)116))))));
                        var_27 = ((short) (short)21530);
                        arr_22 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2])))) << ((((~(((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_12)))))) - (12226)))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] = ((/* implicit */int) 1741093199644256531ULL);
                        var_28 = ((/* implicit */short) var_5);
                    }
                    var_29 -= ((/* implicit */short) (!(((/* implicit */_Bool) 4294967295U))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_7);
}
