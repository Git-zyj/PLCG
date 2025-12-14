/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/939
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
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((int) -14LL)) : (((/* implicit */int) ((_Bool) -1LL)))))) >= (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (_Bool)1))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))) + (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                var_20 = ((/* implicit */short) min((min((max((((/* implicit */int) (_Bool)0)), (var_0))), (((/* implicit */int) (unsigned short)0)))), (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)55995)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_1 [15U] [i_1]))))))));
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((var_10) == (((/* implicit */int) (short)-14355))))) | (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) var_14))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (~(arr_4 [i_3])))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65336)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))))))))), (((min((arr_4 [i_0]), (((/* implicit */unsigned int) var_16)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_23 ^= ((/* implicit */unsigned char) arr_7 [i_3 + 2] [i_1 - 1] [i_1]);
                                var_24 = ((/* implicit */long long int) (unsigned char)2);
                            }
                            var_25 *= ((/* implicit */short) max((((((/* implicit */int) (short)-14349)) / (arr_5 [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1]))), (((((/* implicit */_Bool) (unsigned char)197)) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_3] [i_3 + 4]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_3 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (17LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16))))) >= (5230502903928367103LL)))) / (var_17)));
}
