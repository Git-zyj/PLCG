/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84363
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [6U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1760446354U)) ? (1033309160216887722ULL) : (((/* implicit */unsigned long long int) 2855538141U))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2534520934U)) ? (((/* implicit */unsigned int) var_11)) : (var_18)))) == ((~(9223372036854775807LL)))))) : (((/* implicit */int) ((_Bool) ((3877426591161924440ULL) + (((/* implicit */unsigned long long int) arr_5 [i_0] [9] [15]))))))));
                var_19 = ((((/* implicit */long long int) ((int) min((2855538134U), (((/* implicit */unsigned int) (_Bool)1)))))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) var_11)))))) : (arr_0 [i_0 + 1]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) 2107222486)) - (1439429167U)))) >= (((long long int) 7186686203711824731ULL))));
                                var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1]))) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_3] [(unsigned short)8] [i_0])) : (((int) 7186686203711824748ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_18 [4] [4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0 + 1]))) ? (min((-2107222482), (((/* implicit */int) ((unsigned char) arr_1 [i_1]))))) : (((/* implicit */int) (unsigned char)111))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_5)) ? ((-(((((/* implicit */_Bool) 17330203180000690519ULL)) ? (((/* implicit */int) var_15)) : (var_1))))) : ((~(var_5))));
}
