/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90257
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_20 += ((/* implicit */signed char) ((((((/* implicit */int) var_17)) + (2147483647))) << (((((((/* implicit */int) var_7)) + (20621))) - (23)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((((/* implicit */int) var_19)) != (((/* implicit */int) (short)-19976)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)12837), (var_6)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)85)), (var_12)))) : (((/* implicit */int) var_17))))) : (var_9)));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) (signed char)62)), (min((((/* implicit */unsigned int) (short)-14)), (3981445075U)))))));
        var_21 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_17);
}
