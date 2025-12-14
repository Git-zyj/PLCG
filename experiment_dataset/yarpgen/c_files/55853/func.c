/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55853
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5369378486014952994LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (5369378486014952994LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) var_3)) ? (2900472661U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
        var_13 = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (short)8191))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 33554400U)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_10))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (var_5)));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U)))) ? (var_8) : (((/* implicit */unsigned long long int) 1394494634U))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
}
