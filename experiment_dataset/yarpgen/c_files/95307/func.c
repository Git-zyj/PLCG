/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95307
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_12)) >= ((~(var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (short)32755))))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (30935))))) / ((~(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_4), (((/* implicit */short) var_0)))))))) : (var_15)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 &= ((/* implicit */short) arr_1 [i_0]);
        var_22 += var_12;
        var_23 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) arr_0 [i_0])), (min((var_7), (((/* implicit */unsigned short) arr_0 [i_0])))))), (var_7)));
    }
}
