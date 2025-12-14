/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83454
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_12 = ((/* implicit */_Bool) (unsigned short)65525);
    }
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) var_1)) : (-6502078976172874960LL)))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (6502078976172874945LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 112ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134086656)) ? (6502078976172874960LL) : (63LL)))))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8934))))) ? (((((/* implicit */_Bool) 3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (short)511))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)768)) : (1131376611))), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-8)) ? (((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)480))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120)))))));
}
