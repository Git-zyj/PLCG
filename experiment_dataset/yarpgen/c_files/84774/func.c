/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84774
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14513049891698850357ULL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) (unsigned short)58250);
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [21]))));
        var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 268304384)) ? (((/* implicit */unsigned int) 2147483647)) : (var_18)))) ^ (var_3)));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) var_8))));
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~((~(((-268304375) ^ (((/* implicit */int) (short)21309)))))))))));
    var_26 = (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_17)) * (((/* implicit */int) (unsigned short)47881))))))));
}
