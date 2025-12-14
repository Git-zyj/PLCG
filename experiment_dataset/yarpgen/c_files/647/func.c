/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/647
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32760)) : (var_2))), (((/* implicit */int) var_3)))) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(signed char)0] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22255)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
}
