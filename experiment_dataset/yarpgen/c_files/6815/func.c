/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6815
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 &= ((/* implicit */unsigned short) min((arr_0 [(unsigned char)8]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25776)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) (unsigned short)21963)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25776)))))));
        var_13 += ((/* implicit */unsigned short) min((9223372036854775794LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)21963)) : (((/* implicit */int) (unsigned short)54575))))) ? (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21963))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)42832), (((/* implicit */unsigned short) arr_1 [i_0]))))))))));
    }
    var_14 *= ((/* implicit */unsigned short) var_7);
}
