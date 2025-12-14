/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61716
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
        arr_2 [i_0] = ((((var_10) - (((/* implicit */unsigned long long int) arr_0 [(signed char)8])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_1 [(short)1])) - (127)))))) : (var_19)));
    }
    var_20 = ((/* implicit */signed char) var_4);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))))) : (((/* implicit */int) var_17))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((((/* implicit */int) var_11)) / (var_13)))))) - (((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)-16032))))) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
