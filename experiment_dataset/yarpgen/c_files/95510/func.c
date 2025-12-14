/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95510
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)24309))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (short)-24310)))))) | (((int) arr_1 [i_0]))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (-5379638188771753982LL)))) ? (((/* implicit */unsigned long long int) (~(0U)))) : (((unsigned long long int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */short) max((((/* implicit */long long int) (short)24310)), (((long long int) var_6))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) + (var_6)));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((signed char) var_4)))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1]))));
    }
}
