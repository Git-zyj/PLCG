/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82772
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
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_1)))) / (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_12))));
        var_16 = ((/* implicit */short) ((int) (~(((/* implicit */int) var_4)))));
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) | (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (signed char)-27)) + (33)))))) >= (var_8))))) > (var_8)));
}
