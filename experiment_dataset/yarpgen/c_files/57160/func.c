/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57160
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */_Bool) var_10);
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65524)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) == (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0])))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (arr_1 [(unsigned char)6])));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_22 &= ((/* implicit */unsigned int) var_0);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 211042091)) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (var_3)))))));
}
