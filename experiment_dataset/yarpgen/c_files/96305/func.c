/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96305
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
    var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) != (arr_0 [i_0])));
        var_20 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-3505)) : (((/* implicit */int) var_16))))));
    }
    var_21 = var_5;
    var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) (!(var_2)))))) >> (((max((var_9), (var_5))) - (2077191638)))));
}
