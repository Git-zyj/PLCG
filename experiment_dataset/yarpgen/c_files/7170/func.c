/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7170
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
    var_12 = ((/* implicit */long long int) -415148925);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) (unsigned short)3240);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) 3685308128U)) ? (830612784U) : (3464354512U)))))) && (var_4)));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) (((-(830612784U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [i_1])))));
        var_14 -= ((/* implicit */unsigned long long int) var_10);
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 3464354503U))));
        var_16 -= ((/* implicit */short) arr_0 [i_2]);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4870031606466217503LL)) ? ((+(-4870031606466217498LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (-2064116847))))))) ? (((/* implicit */long long int) 830612786U)) : ((+(((long long int) var_5))))));
    var_18 = ((/* implicit */int) var_0);
}
