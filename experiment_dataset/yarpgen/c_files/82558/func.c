/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82558
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((-4626887221779083904LL), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_12)))) == ((-(((/* implicit */int) ((_Bool) var_2)))))));
    var_21 = ((/* implicit */unsigned short) min((((((((var_9) / (((/* implicit */long long int) var_10)))) + (9223372036854775807LL))) >> (((/* implicit */int) var_14)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_17))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_22 = var_6;
                            arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */long long int) (short)-32724)), (-4626887221779083904LL))) : (((/* implicit */long long int) 4064604679U)))))));
                            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4064604689U)) ? (11238859759123692201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (max((var_10), (((/* implicit */unsigned int) (signed char)127)))) : (((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_1] [i_3 + 1] [i_3 + 1] [i_3]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                arr_16 [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_15)) > (arr_9 [i_0 - 1] [i_1] [i_2 + 2] [i_3 + 1] [i_2])));
                                var_23 += ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)125))))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 - 3])) ? (-128145809298503268LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [16LL] [i_1])))));
                                arr_17 [i_1] [i_1] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1]))) == (var_9));
                                var_25 ^= ((/* implicit */signed char) arr_0 [i_4] [i_3 + 1]);
                            }
                        }
                    } 
                } 
                arr_18 [8LL] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(short)0] [(_Bool)1] [i_0 + 1] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_0])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) : (((/* implicit */int) var_17))))));
            }
        } 
    } 
}
