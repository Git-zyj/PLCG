/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78101
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((var_13), (((/* implicit */long long int) var_11)))), (9223372036854775807LL))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_6)), (var_3)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3923638188U))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_12)))))))) : (((/* implicit */int) min((var_6), (var_0))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_4))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_1 [i_0] [i_0])))) - (67)))));
        var_18 = ((/* implicit */long long int) ((((((unsigned long long int) (unsigned short)65535)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (var_13) : (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) var_14)) << (((var_15) + (1384178483))))) : (var_15))))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = arr_0 [i_1];
        var_21 = (signed char)-16;
        var_22 ^= ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_6)), (var_15))), (((/* implicit */int) var_14))));
    }
}
