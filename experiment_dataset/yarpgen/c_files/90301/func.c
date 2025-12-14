/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90301
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19875))) : (var_10))) : (((/* implicit */long long int) 0U)))) / (var_9)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_12))))), (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */unsigned int) (signed char)63)))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) 1849862456U);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1]);
        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    }
    var_19 = ((/* implicit */unsigned int) var_1);
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_0)) ? (62914560ULL) : (var_2)))));
}
