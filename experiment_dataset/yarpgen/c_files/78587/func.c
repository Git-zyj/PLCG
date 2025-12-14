/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78587
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
    var_12 = ((/* implicit */signed char) 4294967295U);
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(399374975U))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_11)), (var_4)))), ((~(-8077347881214051502LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_15 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), (var_5)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_7))))) : (3630958824U)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (3630958824U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (12703155763999562904ULL)))))));
        var_17 |= ((/* implicit */unsigned int) ((535822336ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        var_18 = (~(((/* implicit */int) ((arr_0 [i_0]) == (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))) : (arr_0 [i_0])))));
    }
}
