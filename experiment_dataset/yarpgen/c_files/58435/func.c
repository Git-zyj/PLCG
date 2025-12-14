/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58435
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
    var_12 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = arr_2 [i_0] [i_0];
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((446015080U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2]))))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [9U]))))) | (arr_0 [i_1 - 2] [i_1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (~(((unsigned long long int) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [9ULL] [i_1])))))));
                                var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)212)) ? (arr_0 [i_1 - 2] [i_1 + 1]) : (var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3]))))) || (((/* implicit */_Bool) 0))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_5))));
            }
        } 
    } 
}
