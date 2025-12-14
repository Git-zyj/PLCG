/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66750
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
    var_19 = ((/* implicit */short) ((unsigned short) var_4));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) 4294967295U)))) >= ((~(var_0)))))) * (((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) - (arr_1 [i_0])))) ? (((/* implicit */int) min((var_5), ((signed char)7)))) : (((/* implicit */int) ((arr_0 [i_0 + 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-18563))))))))));
        var_21 -= min((min((var_16), (((((/* implicit */_Bool) 11550763643641218101ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29286))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) - ((-(((/* implicit */int) (unsigned short)65535))))))));
    }
}
