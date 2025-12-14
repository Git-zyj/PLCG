/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86647
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0LL) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-51))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_4)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (((var_6) * (((/* implicit */unsigned long long int) 0LL))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 462233013U)) ? (min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_14)))), (((((/* implicit */_Bool) 137438951424LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)496))) : (-137438951425LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */signed char) ((long long int) var_16));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29987))) : (2777267262910973928ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))));
    }
    var_20 = ((/* implicit */_Bool) (+(-1LL)));
}
