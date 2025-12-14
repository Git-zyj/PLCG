/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61070
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
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-6215)))) ? (((/* implicit */int) (unsigned short)44085)) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)8] [(unsigned char)8]))))), (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65531)) || (((/* implicit */_Bool) (unsigned short)21450))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)251)) + (((/* implicit */int) (unsigned char)3))));
        var_17 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)24556)) ? (1152921502459363328LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21)))))));
    }
    var_18 = ((/* implicit */short) var_3);
}
