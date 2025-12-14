/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72586
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */short) var_3)), (arr_1 [i_0 + 1] [i_0 + 1])));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((unsigned char) (signed char)23))) : (((/* implicit */int) min(((short)32436), ((short)-32437))))));
        var_13 = ((/* implicit */short) (+((+(((/* implicit */int) (short)32436))))));
        var_14 = ((/* implicit */unsigned char) max(((((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)9])) : (((/* implicit */int) (short)-32437)))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))))), (((min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)9] [(unsigned short)9])), (var_7))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30321)))))));
    }
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) <= (((((/* implicit */_Bool) ((8118126223072937878ULL) ^ (var_7)))) ? (var_7) : (((/* implicit */unsigned long long int) var_1)))));
    var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_4)))));
    var_17 = ((/* implicit */unsigned char) min((var_7), (min((var_7), (((/* implicit */unsigned long long int) ((var_3) || (((/* implicit */_Bool) var_6)))))))));
    var_18 |= ((/* implicit */long long int) var_5);
}
