/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87913
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
    var_17 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) ((unsigned char) 18153889335963205384ULL))))));
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (max((((/* implicit */int) var_5)), (var_13))) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (signed char)73)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 &= ((/* implicit */signed char) arr_1 [i_0]);
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)117)) * (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_1 [i_1 - 1]);
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) (signed char)14)))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1]))) : (var_10)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)425))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) arr_6 [i_4]);
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_4 + 1] [i_4 - 1])) ? (arr_16 [i_6] [i_4 + 1] [i_4 - 1]) : (arr_16 [i_6] [i_4 + 1] [i_4 - 1])));
                        }
                        var_27 = var_7;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_5] [i_4 + 1])) ? (((/* implicit */int) arr_11 [(short)2] [i_2] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_4] [i_2] [i_2]))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (signed char)57))));
                        }
                        for (short i_8 = 2; i_8 < 17; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */short) 4294967288U);
                            var_31 = ((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_3]);
                        }
                        arr_26 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_5))))));
                        var_32 = ((/* implicit */unsigned char) arr_24 [i_2]);
                    }
                } 
            } 
        } 
    }
}
