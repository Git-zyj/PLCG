/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66094
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : ((~(arr_2 [(_Bool)1])))))) ? (max((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)246)), (var_5)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : ((-9223372036854775807LL - 1LL)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (-((+(arr_0 [i_0] [10LL])))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (min((((/* implicit */unsigned long long int) (-(var_14)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (2594988572063069363ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((-1845229161), (((/* implicit */int) var_12))))), (var_15))))));
    var_18 = ((/* implicit */short) var_1);
}
