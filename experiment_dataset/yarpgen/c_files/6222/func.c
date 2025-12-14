/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6222
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((long long int) var_0))))) != (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9))) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-20))));
        var_18 |= ((/* implicit */long long int) min((((/* implicit */short) arr_1 [i_0 - 1])), (((short) arr_2 [i_0 + 1]))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (short)23869))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1696))) : (max((((/* implicit */unsigned int) min((var_10), (((/* implicit */int) var_12))))), (max((var_11), (var_3)))))));
    var_20 = ((/* implicit */short) 72338402);
}
