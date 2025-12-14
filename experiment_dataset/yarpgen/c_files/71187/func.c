/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71187
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) min(((short)22002), ((short)-21980))))))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) var_1)), (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((((((/* implicit */_Bool) (short)-22004)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (short)-22004)))))))));
}
