/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87473
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_0 - 2]);
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_21 = (i_1 % 2 == zero) ? (((/* implicit */short) min((((((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_3] [i_1])) + ((+(((/* implicit */int) (signed char)-126)))))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_3 - 4])) + (16630))))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_14)))))))))) : (((/* implicit */short) min((((((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_3] [i_1])) + ((+(((/* implicit */int) (signed char)-126)))))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_4)) >> (((((((/* implicit */int) arr_3 [i_0] [i_1] [i_3 - 4])) + (16630))) - (11297))))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_14))))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                arr_12 [i_0] [(signed char)5] [14LL] [13LL] [i_4] [i_1] = (signed char)112;
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [15U] [i_3 - 3] [(signed char)7])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [8])) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_12)));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((_Bool) arr_0 [i_2 - 3])))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
                            {
                                var_24 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_2 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_2 + 1] [(short)13] [i_3]))) : (arr_11 [i_5 + 1] [i_3] [i_5] [2U] [i_5 + 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 + 1] [i_3] [i_5 - 1] [i_5 + 1] [i_5 + 1]))))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (((+(arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2] [i_3] [i_5])) * (((/* implicit */int) arr_2 [i_0]))))) / (min((var_18), (((/* implicit */long long int) -1))))))))))));
                            }
                            var_26 = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1] [(signed char)6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((0ULL) >= (var_12)))) : (((/* implicit */int) var_0)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_16)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
}
