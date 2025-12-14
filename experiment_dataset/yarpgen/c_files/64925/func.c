/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64925
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6346664513598973734LL)) ? ((+(((unsigned long long int) (short)-6)))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -6346664513598973726LL)) ? (-2273155241563899604LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
    }
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_3)))) ? (min((-7427887214996346898LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) var_11)))) : (min((((/* implicit */int) var_7)), (((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (52))) - (7)))))))));
}
