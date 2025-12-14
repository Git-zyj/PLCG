/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55480
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((long long int) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) : (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)83)) % (((/* implicit */int) (unsigned char)94)))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)915)))) : (((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (short)-2463)))) ? (var_9) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)2443))));
        var_19 = ((/* implicit */unsigned short) var_13);
    }
}
